#include "Common.h"


cbuffer cbTerrain	:	register(b10)
{
	matrix		posIndexToObjectSpace;
	float4		uvMul_0;
	float2		lodMorph;
	float		baseUVScale;
};

//--------------------------------------------------------------------------------------
struct VS_INPUT
{
	int2 posIndex : POSITION;
	float height : TEXCOORD0;
	float2 delta : TEXCOORD1;
};

struct VS_OUTPUT
{
	float4 oPos : SV_Position;
	float4 oWPos : TEXCOORD0;
	float4 oUVMisc : TEXCOORD1; // xy = uv, z = camDepth
	float4 oUV0 : TEXCOORD2;
	float4 oUV1 : TEXCOORD3;
};


VS_OUTPUT VS_GBuffer(VS_INPUT IN)
{
	VS_OUTPUT OUT = (VS_OUTPUT)0;

	float4 pos = mul(float4(IN.posIndex.x, IN.posIndex.y, IN.height, 1), posIndexToObjectSpace);
	pos = mul(pos, World);
	OUT.oWPos = pos;

	float toMorph = -min(0, sign(IN.delta.y - lodMorph.y));
	pos.y += IN.delta.x * toMorph * lodMorph.x;
	OUT.oPos = mul(pos, ViewProj);

	float2 uv = float2(IN.posIndex.x * baseUVScale, 1.0 - (IN.posIndex.y * baseUVScale));
	OUT.oUV0.xy = uv.xy * uvMul_0.r;
	OUT.oUV0.zw = uv.xy * uvMul_0.g;
	OUT.oUV1.xy = uv.xy * uvMul_0.b;
	OUT.oUV1.zw = uv.xy * uvMul_0.a;
	OUT.oUVMisc.xy = uv.xy;

	return OUT;
}

//===============================================================================================
Texture2D globalNormal : register(t0);
Texture2D blendTex0 : register(t1);
Texture2D difftex0 : register(t2);
Texture2D normtex0 : register(t3);
Texture2D difftex1 : register(t4);
Texture2D normtex1 : register(t5);
Texture2D difftex2 : register(t6);
Texture2D normtex2 : register(t7);

SamplerState samLinear : register(s0);

gbuffer_output PS_GBuffer(VS_OUTPUT IN)
{
	gbuffer_output OUT = (gbuffer_output)0;

	float4 outputCol = float4(0,0,0,1);
	float2 uv = IN.oUVMisc.xy;
	float3 normal = Expand(globalNormal.Sample(samLinear, uv)).rgb;

	float3 diffuse = float3(0,0,0);
	float specular = 0;
	float4 blendTexVal0 = blendTex0.Sample(samLinear, uv);

	float3 tangent = float3(1, 0, 0);
	float3 binormal = normalize(cross(tangent, normal));
	tangent = normalize(cross(normal, binormal));
	float3x3 TBN = float3x3(tangent, binormal, normal);

	float4 litRes, litResLayer;
	float3 TSlightDir, TSeyeDir, TShalfAngle, TSnormal;
	float displacement;
	float4 scaleBiasSpecular = float4(0.03f, -0.04f, 32.f, 1.f);
	float2 uv0 = IN.oUV0.xy;
	displacement = normtex0.Sample(samLinear, uv0).a * scaleBiasSpecular.x + scaleBiasSpecular.y;
	//uv0 += TSeyeDir.xy * displacement;
	TSnormal = Expand(normtex0.Sample(samLinear, uv0)).rgb;
	float3 vWorldNormal = mul(TBN, TSnormal);
	vWorldNormal = mul(vWorldNormal, World);

	float4 diffuseSpecTex0 = difftex0.Sample(samLinear, uv0);
	diffuse = diffuseSpecTex0.rgb;
	specular = diffuseSpecTex0.a;

	float2 uv1 = IN.oUV0.zw;
	displacement = normtex1.Sample(samLinear, uv1).a * scaleBiasSpecular.x + scaleBiasSpecular.y;
	//uv1 += TSeyeDir.xy * displacement;
	TSnormal = Expand(normtex1.Sample(samLinear, uv1)).rgb;
	TSnormal = mul(TBN, TSnormal);
	vWorldNormal += mul(TSnormal, World);

	float4 diffuseSpecTex1 = difftex1.Sample(samLinear, uv1);
	diffuse = lerp(diffuse, diffuseSpecTex1.rgb, blendTexVal0.r);
	specular = lerp(specular, diffuseSpecTex1.a, blendTexVal0.r);

	float2 uv2 = IN.oUV1.xy;
	displacement = normtex2.Sample(samLinear, uv2).a * scaleBiasSpecular.x + scaleBiasSpecular.y;
	//uv2 += TSeyeDir.xy * displacement;
	TSnormal = Expand(normtex2.Sample(samLinear, uv2)).rgb;
	TSnormal = mul(TBN, TSnormal);
	vWorldNormal += mul(TSnormal, World);

	float4 diffuseSpecTex2 = difftex2.Sample(samLinear, uv2);
	diffuse = lerp(diffuse, diffuseSpecTex2.rgb, blendTexVal0.g);
	specular = lerp(specular, diffuseSpecTex2.a, blendTexVal0.g);

	diffuse = sqrt(diffuse);
	OUT.oAlbedo = float4(diffuse, 1.0f);
	OUT.oSpec = float4(0.05f, 0.05f, 0.05f, 0.02f);
	OUT.oNormal.xyz = normalize(vWorldNormal) * 0.5f + 0.5f;
	OUT.oNormal.w = 1;

	return OUT;
}