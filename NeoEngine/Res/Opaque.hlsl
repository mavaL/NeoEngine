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

#ifdef NORMAL_MAP
	float4 tangent	: TEXCOORD1;
	float3 binormal	: TEXCOORD2;
#else
	float3 normal	: TEXCOORD1;
#endif
};

//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS( VS_INPUT input )
{
    VS_OUTPUT output = (VS_OUTPUT)0;

	float4 posH = mul(input.Pos, WVP);
    output.Pos = posH;
	output.uv = input.uv;

#ifdef NORMAL_MAP
	output.tangent = input.tangent;
	output.binormal = input.binormal;
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

float4 PS(VS_OUTPUT input) : SV_Target
{
	return 0;
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
	float3x3 mTangentToWS = float3x3(IN.tangent.xyz, IN.binormal.xyz, cross(IN.tangent.xyz, IN.binormal.xyz)*IN.tangent.w);
	float3 vNormalTS = Expand(texNormal.Sample(samLinear, IN.uv).xyz);
	float3 vWorldNormal = normalize(mul(vNormalTS, mTangentToWS));
	output.oNormal.xyz = vWorldNormal * 0.5f + 0.5f;
#else
	output.oNormal.xyz = normalize(IN.normal) * 0.5f + 0.5f;
#endif
	output.oNormal.w = 1.0f;

	output.oAlbedo = texDiffuse.Sample(samLinear, IN.uv);
	output.oSpec = texSpec.Sample(samLinear, IN.uv);

	return output;
}


#include "ClipPlaneWrapper.hlsl"