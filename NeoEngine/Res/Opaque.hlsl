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
VS_OUTPUT VS( VS_INPUT IN )
{
    VS_OUTPUT OUT = (VS_OUTPUT)0;

	float4 vWorldPos = mul(IN.Pos, World);
	float4 posH = mul(vWorldPos, ViewProj);

	OUT.Pos = posH;
	OUT.WPos = vWorldPos.xyz;
	OUT.uv = IN.uv;

#ifdef NORMAL_MAP
	OUT.tangent.xyz = normalize(mul(IN.tangent.xyz, (float3x3)WorldIT));
	OUT.tangent.w = IN.tangent.w;
	OUT.binormal = normalize(mul(IN.binormal, (float3x3)WorldIT));
#else
	OUT.normal = mul(IN.normal, (float3x3)WorldIT);
#endif

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
	OUT.vDepth.xy = posH.zw;

	return OUT;
}


//--------------------------------------------------------------------------------------
// PS for forward rendering
//--------------------------------------------------------------------------------------
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


//--------------------------------------------------------------------------------------
// PS for shadow map generation
//--------------------------------------------------------------------------------------
float4 PS_ShadowMapGen(VS_OUTPUT_ShadowMapGen IN) : SV_Target
{
	float fDepth = IN.vDepth.x / IN.vDepth.y;
	return float4(fDepth, fDepth * fDepth, 0, 1);
}

//--------------------------------------------------------------------------------------
// PS for g-buffer generation
//--------------------------------------------------------------------------------------
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