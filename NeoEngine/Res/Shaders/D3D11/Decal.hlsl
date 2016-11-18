#include "Common.h"


cbuffer cbDecal	:	register(b10)
{
	matrix	matRotation;
	float	fClipDistance;
};
//--------------------------------------------------------------------------------------
struct VS_INPUT
{
	float4 Pos : POSITION;
	float3 normal	: NORMAL;
};

struct VS_OUTPUT
{
	float4 Pos		: SV_POSITION;
	float3 normal	: NORMAL;
	float3 WPos		: WPOS;
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
	OUT.WPos = vWorldPos.xyz;
	OUT.normal = mul(IN.normal, (float3x3)WorldIT);

	return OUT;
}


//--------------------------------------------------------------------------------------
// PS for g-buffer generation
//--------------------------------------------------------------------------------------
Texture2D		texDepth		: register(t10);
Texture2D		texDiffuse		: register(t0);
Texture2D		texNormal		: register(t1);
Texture2D		texSpec			: register(t3);
SamplerState	samPoint		: register(s0);
SamplerState	samLinear		: register(s1);

gbuffer_output PS_GBuffer(VS_OUTPUT IN)
{
	gbuffer_output output = (gbuffer_output)0;

	float2 screenTC = IN.Pos.xy / frameBufferSize.xy;
	float3 vWorldPos = ReconstructWorldPos(texDepth, samPoint, screenTC);
	float4 vObjPos = mul(float4(vWorldPos, 1), InvWorld);

	// Projecing 3d box to 2d plane
	clip(0.5f - abs(vObjPos.xyz));

	// [-0.5, 0.5] -> [0, 1]
	vObjPos = mul(float4(vObjPos.xyz, 0), matRotation);
	float2 fUv = vObjPos.xz + 0.5f;
	fUv.y = 1 - fUv.y;

	clip(fClipDistance - abs(vObjPos.y));

	float4 albedo = texDiffuse.Sample(samLinear, fUv);
	// Avoid precision problem, decode in ComposePass.
	albedo.xyz = sqrt(albedo.xyz);
	output.oAlbedo = albedo;

#ifdef NORMAL_MAP

	float3 vView = normalize(camPos - IN.WPos);
	float3 vNormal = normalize(IN.normal);
	float3 tangent, binormal;
	cotangent_frame(vView, fUv, tangent, binormal);

	float3x3 matTSToWS = float3x3(tangent, binormal, vNormal);

	float3 vNormalTS = GetNormalFromTexture(texNormal, samLinear, fUv);
	float3 vWorldNormal = normalize(mul(vNormalTS, matTSToWS));

	output.oNormal.xyz = vWorldNormal * 0.5f + 0.5f;
	output.oNormal.w = albedo.w;
#else
	output.oNormal = float4(0, 0, 0, 0);
#endif

#ifdef SPEC_MAP
	output.oSpec.xyz = texSpec.Sample(samLinear, fUv).xyz;
	output.oSpec.w = specularGloss.w;
#else
	output.oSpec = specularGloss;
#endif

	return output;
}