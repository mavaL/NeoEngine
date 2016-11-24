static const float PI = 3.141592657f;
static const float fESMExponentialMultiplier = 80.0f;
#define MAX_BONE_NUM	100


struct gbuffer_output
{
	float4	oNormal : SV_Target0;
	float4	oAlbedo : SV_Target1;
	float4	oSpec : SV_Target2;
};


//--------------------------------------------------------------------------------------
// Constant Buffer Variables
//--------------------------------------------------------------------------------------
cbuffer cbufferGlobal : register(b0)
{
	matrix	View;
	matrix	Projection;
	matrix	ViewProj;
	matrix	InvView;
	matrix	ShadowTransform;
	matrix	ShadowTransform2;
	matrix	ShadowTransform3;
	float4	clipPlane;
	float4	frustumFarCorner[4];
	float4	ambientColor;
	float4	lightColor;
	uint4	frameBufferSize;
	float3	lightDirection;			// Already negated
	float3	camPos;
	float	time;
	float	nearZ, farZ;
	float	shadowMapTexelSize;
	float	shadowDepthBias;
	float4	shadowSplitDists;
};

cbuffer cbufferMaterial : register(b1)
{
	matrix	World;
	matrix	WorldIT;
	matrix	InvWorld;
	float4	specularGloss;
	float4	anisotropicParam;
};

cbuffer cbufferSkin : register(b2)
{
	matrix	matSkin[MAX_BONE_NUM];
};

struct PointLight 
{
	float3 position;
	float attenuationBegin;
	float3 color;
	float attenuationEnd;
};


float2 Expand(float2 v)
{
	return v * 255.f / 127.f - 128.f / 127.f;
}

float3 Expand(float3 v)
{
	return v * 255.f / 127.f - 128.f / 127.f;
}

float4 Expand(float4 v)
{
	return v * 255.f / 127.f - 128.f / 127.f;
}

float3 GetNormalFromTexture(Texture2D tex, SamplerState samp, float2 uv)
{
	float4 color = tex.Sample(samp, uv);
	float3 normal;
	normal.xy = Expand(color.yx);
	normal.z = sqrt(saturate(1.f + dot(normal.xy, -normal.xy)));

	return normal;
}

float3 ReconstructWorldPos(Texture2D texDepth, SamplerState samp, float2 uv)
{
	float2 positionScreen = uv * float2(2.0f, -2.0f) + float2(-1.0f, 1.0f);
	float fViewSpaceZ = texDepth.SampleLevel(samp, uv, 0.0f).x * farZ;

	float2 screenSpaceRay = float2(positionScreen.x / Projection._11, positionScreen.y / Projection._22);

	float3 positionView;
	positionView.z = fViewSpaceZ;
	// Solve the two projection equations
	positionView.xy = screenSpaceRay.xy * positionView.z;

	float3 positionWorld = mul(float4(positionView, 1.0f), InvView).xyz;

	return positionWorld;
}

float4 Shadow_Sample(Texture2D texShadow, SamplerState sam, float3 posW, float shadowMapTexelSize, float4x4 matShadow)
{
	float4 shadowPos = mul(float4(posW, 1.0f), matShadow);
	float fLinearZ = shadowPos.z;
	shadowPos.xyz /= shadowPos.w;
	float2 shadowTexUV = shadowPos.xy;

#ifdef USE_ESM
	// Filtered look up using mip mapping
	float fOccluderExponential = texShadow.Sample(sam, shadowTexUV).r;
	float fReceiverExponential = exp( -fESMExponentialMultiplier * fLinearZ);
	float fESMShadowTest = fOccluderExponential * fReceiverExponential;
	float fLitFactor = saturate(fESMShadowTest);
#else
	fLinearZ -= shadowDepthBias;
	float fz = texShadow.SampleLevel(sam, shadowTexUV, 0).x;
	float fLitFactor = fLinearZ <= fz;
#endif

	return float4(fLitFactor, fLitFactor, fLitFactor, 1);
}

float4	ComputeShadow(float3 posW, float4x4 matShadow, float4x4 matShadow2, float4x4 matShadow3, float shadowMapTexelSize,
	SamplerState sam, Texture2D texShdow1, Texture2D texShdow2, Texture2D texShdow3)
{
#ifdef SHADOW_PSSM
	float fEyeZ = mul(float4(posW, 1.0f), View).z;
	if (fEyeZ <= shadowSplitDists[1])
	{
		return Shadow_Sample(texShdow1, sam, posW, shadowMapTexelSize, matShadow);
	} 
	else if (fEyeZ <= shadowSplitDists[2])
	{
		return Shadow_Sample(texShdow2, sam, posW, shadowMapTexelSize, matShadow2);
	}
	else
	{
		return Shadow_Sample(texShdow3, sam, posW, shadowMapTexelSize, matShadow3);
	}
#else
	return Shadow_Sample(texShdow1, sam, posW, shadowMapTexelSize, matShadow);
#endif
}

half DiffuseBRDF(half3 N, half3 V, half3 L, half Gloss, half NdotL)
{
	// TODO: Merge with Specular BRDF to save a few instructions

	half m = pow((1.0 - Gloss * 0.7), 6);

	// Approximation of the full quality Oren-Nayar model
	half s = dot(L, V) - dot(N, L) * dot(N, V);
	half t = s <= 0 ? 1 : max(max(dot(N, L), dot(N, V)), 1e-6);
	half A = 1.0f / (1.0f + (0.5f - 2.0f / (3.0f * PI)) * m);
	half B = m * A;

	return NdotL * max(A + B * (s / t), 0);
}

half3 PhysicalBRDF(half3 N, half3 V, half3 L, half Gloss, half3 SpecCol)
{
	half3 H = normalize(V + L);

	// Compute perceptually linear roughness parameter (squared)
	half m = pow((1.0 - Gloss * 0.7), 6);
	half m2 = m * m;

	// Prevent highlights from getting too tiny since we don't have real area lights yet
	m2 = max(m2, 0.00001);

	// GGX NDF
	half NdotH = saturate(dot(N, H));
	half spec = (NdotH * NdotH) * (m2 - 1) + 1;
	spec = m2 / (spec * spec);

	// Schlick-Smith Visibility Term
	half k = (0.8 + m * 0.5) * (0.8 + m * 0.5) / 2;
	half Gv = saturate(dot(N, V)) * (1 - k) + k;
	half Gl = saturate(dot(N, L)) * (1 - k) + k;
	spec /= max(Gv * Gl, 1e-6);

	// Schlick approximation for Fresnel
	half3 fresnel = lerp(SpecCol, 1.0h, pow(1 - dot(L, H), 5));

	return (fresnel * spec) / 4.0h;
}

// See: http://www.thetenthplanet.de/archives/1180 [11/15/2016 maval]
void cotangent_frame(float3 p, float2 uv, out float3 ot, out float3 ob)
{
	// get edge vectors of the pixel triangle
	float3 dp1 = ddx(p);
	float3 dp2 = ddy(p);
	float2 duv1 = ddx(uv);
	float2 duv2 = ddy(uv);

	// solve the linear system
	float3x3 M = float3x3(dp1, dp2, cross(dp1, dp2));
	float2x3 inversetransposeM = float2x3(cross(M[1], M[2]), cross(M[2], M[0]));
	float3 T = mul(float2(duv1.x, duv2.x), inversetransposeM);
	float3 B = mul(float2(duv1.y, duv2.y), inversetransposeM);

	float invmax = rsqrt(max(dot(T, T), dot(B, B)));

	ot = T * invmax;
	ob = B * invmax;
}