#include "Common.h"


//--------------------------------------------------------------------------------------
struct VS_INPUT
{
    float4 Pos : POSITION;
	float3 normal : NORMAL;
	float2 uv  : TEXCOORD0;
	float4 boneIndices : BLENDINDICES;
	float4 boneWeights : BLENDWEIGHT;
};

struct VS_OUTPUT
{
    float4 Pos		: SV_POSITION;
	float2 uv		: TEXCOORD0;
	float3 WPos		: TEXCOORD1;
	float3 normal	: TEXCOORD2;
};

//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS( VS_INPUT IN )
{
    VS_OUTPUT output = (VS_OUTPUT)0;

	int4 decodeIndices = D3DCOLORtoUBYTE4(IN.boneIndices).zyxw;

	float4 vLocalPos = 
		mul(IN.Pos, matSkin[decodeIndices.x]) * IN.boneWeights.x +
		mul(IN.Pos, matSkin[decodeIndices.y]) * IN.boneWeights.y +
		mul(IN.Pos, matSkin[decodeIndices.z]) * IN.boneWeights.z +
		mul(IN.Pos, matSkin[decodeIndices.w]) * IN.boneWeights.w;

	float4 vLocalNormal =
		mul(IN.normal, matSkin[decodeIndices.x]) * IN.boneWeights.x +
		mul(IN.normal, matSkin[decodeIndices.y]) * IN.boneWeights.y +
		mul(IN.normal, matSkin[decodeIndices.z]) * IN.boneWeights.z +
		mul(IN.normal, matSkin[decodeIndices.w]) * IN.boneWeights.w;

	float4 vWorldPos = mul(vLocalPos, World);
	float4 posH = mul(vWorldPos, ViewProj);

    output.Pos = posH;
	output.WPos = vWorldPos.xyz;
	output.uv = IN.uv;
	output.normal = mul(vLocalNormal, (float3x3)WorldIT);

    return output;
}


//--------------------------------------------------------------------------------------
// shadow map generation
//--------------------------------------------------------------------------------------
struct VS_OUTPUT_ShadowMapGen
{
	float4 Pos			: SV_POSITION;
	float4 vDepth		: TEXCOORD0;
};

VS_OUTPUT_ShadowMapGen VS_ShadowMapGen(VS_INPUT IN)
{
	VS_OUTPUT_ShadowMapGen OUT = (VS_OUTPUT_ShadowMapGen)0;

	int4 decodeIndices = D3DCOLORtoUBYTE4(IN.boneIndices).zyxw;

	float4 vLocalPos =
		mul(IN.Pos, matSkin[decodeIndices.x]) * IN.boneWeights.x +
		mul(IN.Pos, matSkin[decodeIndices.y]) * IN.boneWeights.y +
		mul(IN.Pos, matSkin[decodeIndices.z]) * IN.boneWeights.z +
		mul(IN.Pos, matSkin[decodeIndices.w]) * IN.boneWeights.w;

	float4 vWorldPos = mul(vLocalPos, World);
	float4 posH = mul(vWorldPos, ViewProj);

	OUT.Pos = posH;
	OUT.vDepth = posH.z;

	return OUT;
}

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
// Pixel Shader
//--------------------------------------------------------------------------------------
Texture2D		texDiffuse		: register(t0);
Texture2D		texNormal		: register(t1);
Texture2D		texSpec			: register(t2);
Texture2D		gShadowMap		: register(t3);
Texture2D		gShadowMap2		: register(t4);
Texture2D		gShadowMap3		: register(t5);
SamplerState	samLinear		: register(s0);


gbuffer_output PS_GBuffer(VS_OUTPUT IN)
{
	gbuffer_output output = (gbuffer_output)0;

#ifdef NORMAL_MAP
	float3 tangent, binormal, normal;
	normal = normalize(IN.normal);
	float3 vView = normalize(camPos - IN.WPos);
	cotangent_frame(normal, vView, IN.uv, tangent, binormal);

	float3x3 matTSToWS = float3x3(tangent, binormal, normal);
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

	// Avoid precision problem, decode in ComposePass.
	float4 albedo = texDiffuse.Sample(samLinear, IN.uv);
	albedo.xyz = sqrt(albedo.xyz);
	output.oAlbedo = albedo;

	return output;
}