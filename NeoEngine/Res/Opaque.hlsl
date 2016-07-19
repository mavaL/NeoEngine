#include "Common.h"


//--------------------------------------------------------------------------------------
struct VS_INPUT
{
    float4 Pos : POSITION;

#ifdef NORMAL_MAP
	float4 tangent : TANGENT;
	float3 binormal : BINORMAL;
#else
	float3 normal : NORMAL;
#endif

	float2 uv  : TEXCOORD0;
};

struct VS_OUTPUT
{
    float4 Pos		: SV_POSITION;
	float2 uv		: TEXCOORD0;
	float3 WPos		: TEXCOORD1;

#ifdef NORMAL_MAP
	float4 tangent	: TEXCOORD2;
	float3 binormal	: TEXCOORD3;
#else
	float3 normal	: TEXCOORD2;
#endif
};

//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS( VS_INPUT input )
{
    VS_OUTPUT output = (VS_OUTPUT)0;

	float4 vWorldPos = mul(input.Pos, World);
	float4 posH = mul(vWorldPos, ViewProj);

    output.Pos = posH;
	output.WPos = vWorldPos.xyz;
	output.uv = input.uv;

#ifdef NORMAL_MAP
	output.tangent.xyz = normalize(mul(input.tangent.xyz, (float3x3)WorldIT));
	output.tangent.w = input.tangent.w;
	output.binormal = normalize(mul(input.binormal, (float3x3)WorldIT));
#else
	output.normal = mul(input.normal, (float3x3)WorldIT);
#endif

    return output;
}


//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------
Texture2D		texDiffuse		: register(t0);
Texture2D		texNormal		: register(t1);
Texture2D		texSpec			: register(t2);
Texture2D		gShadowMap		: register(t3);
Texture2D		gShadowMap2		: register(t4);
Texture2D		gShadowMap3		: register(t5);
SamplerState	samLinear		: register(s0);

float4 PS(VS_OUTPUT IN) : SV_Target
{
#ifdef NORMAL_MAP
	float3x3 matWSToTS = float3x3(IN.tangent.xyz, IN.binormal, cross(IN.tangent.xyz, IN.binormal) * IN.tangent.w);
	matWSToTS = transpose(matWSToTS);
	float3 vNormalTS = GetNormalFromTexture(texNormal, samLinear, IN.uv);
	float3 vWorldNormal = normalize(mul(vNormalTS, matWSToTS));
#else
	float3 vWorldNormal = normalize(IN.normal);
#endif
	float3 vView = normalize(camPos - IN.WPos);

	// Sun light
	float4 cDiffuse = saturate(dot(vWorldNormal, lightDirection)) * lightColor;
	float3 cSpecular = PhysicalBRDF(vWorldNormal, vView, lightDirection, specularGloss.w, specularGloss.xyz);

	float4 vAmbient = float4(0.2f, 0.2f, 0.2f, 1.0f);	// Forward rendering uses simple ambient lighting
	float4 oColor = texDiffuse.Sample(samLinear, IN.uv) * (cDiffuse + vAmbient);
	oColor.xyz += cSpecular;

	return oColor;
}

struct gbuffer_output
{
	float4	oNormal	:	SV_Target0;
	float4	oAlbedo	:	SV_Target1;
	float4	oSpec	:	SV_Target2;
};

gbuffer_output PS_GBuffer(VS_OUTPUT IN)
{
	gbuffer_output output = (gbuffer_output)0;

#ifdef NORMAL_MAP
	float3x3 matWSToTS = float3x3(IN.tangent.xyz, IN.binormal, cross(IN.tangent.xyz, IN.binormal) * IN.tangent.w);
	matWSToTS = transpose(matWSToTS);
	float3 vNormalTS = GetNormalFromTexture(texNormal, samLinear, IN.uv);
	float3 vWorldNormal = normalize(mul(vNormalTS, matWSToTS));

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

	output.oAlbedo = texDiffuse.Sample(samLinear, IN.uv);

	return output;
}


#include "ClipPlaneWrapper.hlsl"