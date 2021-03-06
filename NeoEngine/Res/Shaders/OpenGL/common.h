float PI = 3.141592657f;
float fESMExponentialMultiplier = 80.0f;
#define MAX_BONE_NUM	100


//--------------------------------------------------------------------------------------
// Constant Buffer Variables
//--------------------------------------------------------------------------------------
uniform cbufferGlobal
{
	mat4	View;
	mat4	Projection;
	mat4	ViewProj;
	mat4	InvView;
	mat4	ShadowTransform;
	mat4	ShadowTransform2;
	mat4	ShadowTransform3;
	vec4	clipPlane;
	vec4	frustumFarCorner[4];
	vec4	ambientColor;
	vec4	lightColor;
	uvec4	frameBufferSize;
	vec3	lightDirection;			// Already negated
	vec3	camPos;
	float	time;
	float	nearZ, farZ;
	float	shadowMapTexelSize;
	float	shadowDepthBias;
	vec4	shadowSplitDists;
};

uniform cbufferMaterial
{
	mat4	World;
	mat4	WorldIT;
	mat4	InvWorld;
	vec4	specularGloss;
	vec4	anisotropicParam;
};

uniform cbufferSkin
{
	mat4	matSkin[MAX_BONE_NUM];
};

struct PointLight 
{
	vec3 position;
	float attenuationBegin;
	vec3 color;
	float attenuationEnd;
};


vec2 Expand(vec2 v)
{
	return v * 2 - 1;
}

vec3 Expand(vec3 v)
{
	return v * 2 - 1;
}

vec4 Expand(vec4 v)
{
	return v * 2 - 1;
}

float saturate(float v)
{
	return min(max(v, 0), 1);
}

vec3 saturate(vec3 v)
{
	return min(max(v, vec3(0)), vec3(1));
}

vec4 saturate(vec4 v)
{
	return min(max(v, vec4(0)), vec4(1));
}

vec4 TextureFlipY(sampler2D tex, vec2 uv)
{
	return texture(tex, vec2(uv.x, 1 - uv.y));
}

vec4 TextureFlipY(samplerCube tex, vec3 uv)
{
	return texture(tex, vec3(uv.x, -uv.y, uv.z));
}

vec4 TextureLodFlipY(sampler2D tex, vec2 uv, float lod)
{
	return textureLod(tex, vec2(uv.x, 1-uv.y), lod);
}

vec4 TextureLodFlipY(samplerCube tex, vec3 uv, float lod)
{
	return textureLod(tex, vec3(uv.x, -uv.y, uv.z), lod);
}


vec3 GetNormalFromTexture(sampler2D tex, vec2 uv)
{
	vec4 color = texture(tex, uv);
	vec3 normal;
	normal.xy = Expand(color.yx);
	normal.z = sqrt(saturate(1.f + dot(normal.xy, -normal.xy)));

	return normal;
}

vec3 ReconstructWorldPos(sampler2D texDepth, vec2 uv)
{
	vec2 positionScreen = uv * vec2(2.0f, -2.0f) + vec2(-1.0f, 1.0f);
	float fViewSpaceZ = TextureLodFlipY(texDepth, uv, 0.0f).x * farZ;

	vec2 screenSpaceRay = vec2(positionScreen.x / Projection._11, positionScreen.y / Projection._22);

	vec3 positionView;
	positionView.z = fViewSpaceZ;
	// Solve the two projection equations
	positionView.xy = screenSpaceRay.xy * positionView.z;

	vec4 positionWorld = vec4(positionView, 1.0f) * InvView;

	return positionWorld.xyz;
}

vec4 Shadow_Sample(sampler2D texShadow, vec3 posW, float shadowMapTexelSize, mat4 matShadow)
{
	vec4 shadowPos = vec4(posW, 1.0f) * matShadow;
	float fLinearZ = shadowPos.z;

	shadowPos.xyz /= shadowPos.w;
	vec2 shadowTexUV = shadowPos.xy;

#ifdef USE_ESM
	// Filtered look up using mip mapping
	float fOccluderExponential = TextureFlipY(texShadow, shadowTexUV).r;
	float fReceiverExponential = exp( -fESMExponentialMultiplier * fLinearZ);
	float fESMShadowTest = fOccluderExponential * fReceiverExponential;
	float fLitFactor = saturate(fESMShadowTest);
#else
	fLinearZ -= shadowDepthBias;
	float fz = TextureLodFlipY(texShadow, shadowTexUV, 0).x;
	float fLitFactor = 0.f;

	if (fLinearZ <= fz)
	{
		fLitFactor = 1.f;
	}
#endif

	return vec4(fLitFactor, fLitFactor, fLitFactor, 1);
}

vec4	ComputeShadow(vec3 posW, mat4 matShadow, mat4 matShadow2, mat4 matShadow3, float shadowMapTexelSize,
	sampler2D texShdow1, sampler2D texShdow2, sampler2D texShdow3)
{
#ifdef SHADOW_PSSM
	float fEyeZ = (vec4(posW, 1.0f) * View).z;
	if (fEyeZ <= shadowSplitDists[1])
	{
		return Shadow_Sample(texShdow1, posW, shadowMapTexelSize, matShadow);
	} 
	else if (fEyeZ <= shadowSplitDists[2])
	{
		return Shadow_Sample(texShdow2, posW, shadowMapTexelSize, matShadow2);
	}
	else
	{
		return Shadow_Sample(texShdow3, posW, shadowMapTexelSize, matShadow3);
	}
#else
	return Shadow_Sample(texShdow1, posW, shadowMapTexelSize, matShadow);
#endif
}

float DiffuseBRDF(vec3 N, vec3 V, vec3 L, float Gloss, float NdotL)
{
	// TODO: Merge with Specular BRDF to save a few instructions

	float m = pow((1.0 - Gloss * 0.7), 6);

	// Approximation of the full quality Oren-Nayar model
	float s = dot(L, V) - dot(N, L) * dot(N, V);
	float t = s <= 0 ? 1 : max(max(dot(N, L), dot(N, V)), 1e-6);
	float A = 1.0f / (1.0f + (0.5f - 2.0f / (3.0f * PI)) * m);
	float B = m * A;

	return NdotL * max(A + B * (s / t), 0);
}

vec3 PhysicalBRDF(vec3 N, vec3 V, vec3 L, float Gloss, vec3 SpecCol)
{
	vec3 H = normalize(V + L);

	// Compute perceptually linear roughness parameter (squared)
	float m = pow((1.0 - Gloss * 0.7), 6);
	float m2 = m * m;

	// Prevent highlights from getting too tiny since we don't have real area lights yet
	m2 = max(m2, 0.00001);

	// GGX NDF
	float NdotH = saturate(dot(N, H));
	float spec = (NdotH * NdotH) * (m2 - 1) + 1;
	spec = m2 / (spec * spec);

	// Schlick-Smith Visibility Term
	float k = (0.8 + m * 0.5) * (0.8 + m * 0.5) / 2;
	float Gv = saturate(dot(N, V)) * (1 - k) + k;
	float Gl = saturate(dot(N, L)) * (1 - k) + k;
	spec /= max(Gv * Gl, 1e-6);

	// Schlick approximation for Fresnel
	vec3 fresnel = mix(SpecCol, vec3(1.f), pow(1 - dot(L, H), 5));

	return (fresnel * spec) / 4.0f;
}

#ifdef PIXEL_SHADER
mat3 invert_3x3(mat3 M)
{
	float det = dot(cross(M[0], M[1]), M[2]);
	mat3 T = transpose(M);
	return mat3(cross(M[1], M[2]), cross(M[2], M[0]), cross(M[0], M[1]) / det);
}

void cotangent_frame(vec3 p, vec2 uv, out vec3 ot, out vec3 ob)
{
	// get edge vectors of the pixel triangle
	vec3 dp1 = dFdx(p);
	vec3 dp2 = dFdy(p);
	vec2 duv1 = dFdx(uv);
	vec2 duv2 = dFdy(uv);

	// solve the linear system
	mat3 M = mat3(dp1, dp2, cross(dp1, dp2));
	mat3 inverseM = invert_3x3(M);
	vec3 T = inverseM * vec3(duv1.x, duv2.x, 0);
	vec3 B = inverseM * vec3(duv1.y, duv2.y, 0);

	float invmax = inversesqrt(max(dot(T, T), dot(B, B)));

	ot = T * invmax;
	ob = B * invmax;
}
#endif