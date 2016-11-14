#include "Common.h"


Texture2D		texDepth		: register(t0);
Texture2D		texDiffuse		: register(t1);
Texture2D		texNormal		: register(t2);
Texture2D		texSpec			: register(t3);
SamplerState	samPoint		: register(s0);
SamplerState	samLinear		: register(s1);


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
};

struct VS_OUTPUT
{
	float4 Pos		: SV_POSITION;

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
VS_OUTPUT VS_GBuffer(VS_INPUT IN)
{
	VS_OUTPUT OUT = (VS_OUTPUT)0;

	float4 vWorldPos = mul(IN.Pos, World);
	float4 posH = mul(vWorldPos, ViewProj);

	OUT.Pos = posH;

#ifdef NORMAL_MAP
	OUT.tangent.xyz = normalize(mul(IN.tangent.xyz, (float3x3)WorldIT));
	OUT.tangent.w = IN.tangent.w;
	OUT.binormal = normalize(mul(IN.binormal, (float3x3)WorldIT));
#else
	OUT.normal = mul(IN.normal, (float3x3)WorldIT);
#endif

	return OUT;
}


//--------------------------------------------------------------------------------------
// PS for g-buffer generation
//--------------------------------------------------------------------------------------
gbuffer_output PS_GBuffer(VS_OUTPUT IN)
{
	gbuffer_output output = (gbuffer_output)0;

	float2 screenTC = IN.Pos.xy / frameBufferSize.xy;
	float3 vWorldPos = ReconstructWorldPos(texDepth, samPoint, screenTC);
	float4 vObjPos = mul(float4(vWorldPos, 1), InvWorld);

	// Projecing 3d box to 2d plane
	clip(0.5f - abs(vObjPos.xyz));

#ifdef NORMAL_MAP
	float3x3 matTSToWS = float3x3(IN.tangent.xyz, IN.binormal, cross(IN.tangent.xyz, IN.binormal) * IN.tangent.w);
	float3 vNormalTS = GetNormalFromTexture(texNormal, samLinear, IN.uv);
	float3 vWorldNormal = normalize(mul(vNormalTS, matTSToWS));

	output.oNormal.xyz = vWorldNormal * 0.5f + 0.5f;
#else
	output.oNormal = float4(0, 0, 0, 0);
#endif

#ifdef SPEC_MAP
	output.oSpec.xyz = texSpec.Sample(samLinear, IN.uv).xyz;
	output.oSpec.w = specularGloss.w;
#else
	output.oSpec = specularGloss;
#endif

	// [-0.5, 0.5] -> [0, 1]
	float2 fUv = vObjPos.xz + 0.5f;
	fUv.y = 1 - fUv.y;

	float4 albedo = texDiffuse.Sample(samLinear, fUv);
	// Avoid precision problem, decode in ComposePass.
	albedo.xyz = sqrt(albedo.xyz);
	output.oAlbedo = albedo;

	return output;
}