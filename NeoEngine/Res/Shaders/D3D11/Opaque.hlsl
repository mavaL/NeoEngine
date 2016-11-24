#include "Common.h"


Texture2D		texDiffuse		: register(t0);
Texture2D		texNormal		: register(t1);
Texture2D		texSpec			: register(t2);
Texture2D		gShadowMap		: register(t3);
Texture2D		gShadowMap2		: register(t4);
Texture2D		gShadowMap3		: register(t5);
SamplerState	samLinear		: register(s0);


//--------------------------------------------------------------------------------------
struct VS_INPUT
{
    float4 Pos : POSITION;
	float3 normal : NORMAL;
	float2 uv  : TEXCOORD0;

#ifdef INSTANCED
	row_major float4x4 matWorldInst : INSTANCEDATA;
#endif
};

struct VS_OUTPUT
{
    float4 Pos		: SV_POSITION;
	float2 uv		: TEXCOORD0;
	float3 WPos		: TEXCOORD1;
	float3 normal	: TEXCOORD2;
	float3 vView	: TEXCOORD3;
};

//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS( VS_INPUT IN )
{
    VS_OUTPUT OUT = (VS_OUTPUT)0;

#ifdef INSTANCED
	float4 vWorldPos = mul(IN.Pos, IN.matWorldInst);
	OUT.normal = mul(IN.normal, (float3x3)IN.matWorldInst);
#else
	float4 vWorldPos = mul(IN.Pos, World);
	OUT.normal = mul(IN.normal, (float3x3)WorldIT);
#endif
	float4 posH = mul(vWorldPos, ViewProj);

	OUT.Pos = posH;
	OUT.WPos = vWorldPos.xyz;
	OUT.uv = IN.uv;
	OUT.vView = camPos - vWorldPos.xyz;

	return OUT;
}

struct VS_OUTPUT_ShadowMapGen
{
	float4 Pos			: SV_POSITION;
	float4 vDepth		: TEXCOORD0;
};

VS_OUTPUT_ShadowMapGen VS_ShadowMapGen(VS_INPUT IN)
{
	VS_OUTPUT_ShadowMapGen OUT = (VS_OUTPUT_ShadowMapGen)0;

	float4 vWorldPos = mul(IN.Pos, World);
	float4 posH = mul(vWorldPos, ViewProj);

	OUT.Pos = posH;
	OUT.vDepth = posH.z;

	return OUT;
}


//--------------------------------------------------------------------------------------
// PS for forward rendering
//--------------------------------------------------------------------------------------
float4 PS(VS_OUTPUT IN) : SV_Target
{
#ifdef NORMAL_MAP
	float3 vNormal = normalize(IN.normal);
	float3 tangent, binormal;
	cotangent_frame(IN.vView, IN.uv, tangent, binormal);

	float3x3 matTSToWS = float3x3(tangent, binormal, vNormal);
	float3 vNormalTS = GetNormalFromTexture(texNormal, samLinear, IN.uv);
	float3 vWorldNormal = normalize(mul(vNormalTS, matTSToWS));
#else
	float3 vWorldNormal = normalize(IN.normal);
#endif

	// Sun light
	float3 vView = normalize(IN.vView);
	float fNdotL = saturate(dot(vWorldNormal, lightDirection));
	float4 cDiffuse = fNdotL * lightColor;
	float3 cSpecular = PhysicalBRDF(vWorldNormal, vView, lightDirection, specularGloss.w, specularGloss.xyz);

	float4 vAmbient = float4(0.2f, 0.2f, 0.2f, 1.0f);	// Forward rendering uses simple ambient lighting
	float4 oColor = texDiffuse.Sample(samLinear, IN.uv) * (cDiffuse + vAmbient);
	oColor.xyz += cSpecular * lightColor.xyz * fNdotL;

	return oColor;
}


//--------------------------------------------------------------------------------------
// PS for shadow map generation
//--------------------------------------------------------------------------------------
float4 PS_ShadowMapGen(VS_OUTPUT_ShadowMapGen IN) : SV_Target
{
#ifdef USE_ESM
	float fDepthExponential = exp(fESMExponentialMultiplier * IN.vDepth.x);
	return fDepthExponential;
#else
	return IN.vDepth.x;
#endif
}

//--------------------------------------------------------------------------------------
// PS for g-buffer generation
//--------------------------------------------------------------------------------------
gbuffer_output PS_GBuffer(VS_OUTPUT IN)
{
	gbuffer_output output = (gbuffer_output)0;

	// Avoid precision problem, decode in ComposePass.
	float4 albedo = texDiffuse.Sample(samLinear, IN.uv);
	albedo.xyz = sqrt(albedo.xyz);
	output.oAlbedo = albedo;

#ifdef TREE
	clip(albedo.w - 0.01f);
#endif

#ifdef NORMAL_MAP
	float3 vNormal = normalize(IN.normal);
	float3 tangent, binormal;
	cotangent_frame(IN.vView, IN.uv, tangent, binormal);

	float3x3 matTSToWS = float3x3(tangent, binormal, vNormal);
	float3 vNormalTS = GetNormalFromTexture(texNormal, samLinear, IN.uv);
	float3 vWorldNormal = normalize(mul(vNormalTS, matTSToWS));

	output.oNormal.xyz = vWorldNormal * 0.5f + 0.5f;
#else
	output.oNormal.xyz = normalize(IN.normal) * 0.5f + 0.5f;
#endif
	output.oNormal.w = 1.0f;

#ifdef SPEC_MAP
	output.oSpec.xyz = texSpec.Sample(samLinear, IN.uv).xyz;
	output.oSpec.w = specularGloss.w;
#else
	output.oSpec = specularGloss;
#endif

	return output;
}