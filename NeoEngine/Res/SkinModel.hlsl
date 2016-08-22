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
	float4 boneIndices : BLENDINDICES;
	float4 boneWeights : BLENDWEIGHT;
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

#ifdef NORMAL_MAP
	output.tangent.xyz = normalize(mul(IN.tangent.xyz, (float3x3)WorldIT));
	output.tangent.w = IN.tangent.w;
	output.binormal = normalize(mul(IN.binormal, (float3x3)WorldIT));
#else
	output.normal = mul(vLocalNormal, (float3x3)WorldIT);
#endif

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
	return float4(IN.vDepth.x, IN.vDepth.x * IN.vDepth.x, 0, 1);
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
	float3x3 matTSToWS = float3x3(IN.tangent.xyz, IN.binormal, cross(IN.tangent.xyz, IN.binormal) * IN.tangent.w);
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


#include "ClipPlaneWrapper.hlsl"