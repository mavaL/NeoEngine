/********************************************************************
created:	2016/08/24 18:03
author:		maval

purpose:	Anisotropic GGX forward rendering

references:	1. http://www.filmicworlds.com/2014/05/31/materials-that-need-forward-shading/
			2. http://blog.selfshadow.com/publications/s2012-shading-course/burley/s2012_pbs_disney_brdf_notes_v3.pdf
*********************************************************************/

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
	float4 tangent : TANGENT;
	float3 binormal : BINORMAL;
	float2 uv  : TEXCOORD0;
};

struct VS_OUTPUT
{
    float4 Pos		: SV_POSITION;
	float2 uv		: TEXCOORD0;
	float3 WPos		: TEXCOORD1;

	float4 tangent	: TEXCOORD2;
	float3 binormal	: TEXCOORD3;
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

	OUT.tangent.xyz = normalize(mul(IN.tangent.xyz, (float3x3)WorldIT));
	OUT.tangent.w = IN.tangent.w;
	OUT.binormal = normalize(mul(IN.binormal, (float3x3)WorldIT));

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

// X = tangent in world space
// Y = binormal in world space
// fAnisotropic = [0, 1] strength of anisotropic
float3 AnisotropicGGX(float3 N, float3 V, float3 L, float3 X, float3 Y, float fGloss, half3 SpecCol, float fAnisotropic)
{
	// From sig2012 disney paper
	float fAspect = sqrt(1 - 0.9f * fAnisotropic);
	float fRoughness = max(1 - fGloss, 0.05f);
	float ax = fRoughness * fRoughness / fAspect;
	float ay = fRoughness * fRoughness * fAspect;

	float3 H = normalize(L + V);

	float NdotV = dot(N, V);
	float NdotH = dot(N, H);
	float LdotH = dot(L, H);
	float HdotX = dot(H, X);
	float HdotY = dot(H, Y);

	float NdotH_2 = NdotH * NdotH;
	float HdotX_2 = HdotX * HdotX;
	float HdotY_2 = HdotY * HdotY;
	float ax_2 = ax * ax;
	float ay_2 = ay * ay;

	float GGX = (ax * ay * pow(HdotX_2 / ax_2 + HdotY_2 / ay_2 + NdotH_2, 2.0));

	float3 F = SpecCol + (1.0 - SpecCol) * exp(-6 * LdotH);

	float3 Rs = F / (4 * GGX * LdotH * LdotH);

	return Rs;
}


float4 PS(VS_OUTPUT IN) : SV_Target
{
	float3 vNormal = cross(IN.tangent.xyz, IN.binormal) * IN.tangent.w;
	float3 vView = normalize(camPos - IN.WPos);

	// Sun light
	float fNdotL = saturate(dot(vNormal, lightDirection));
	float4 cDiffuse = fNdotL * lightColor;
	float3 cSpecular = AnisotropicGGX(vNormal, vView, lightDirection, IN.tangent.xyz, IN.binormal, specularGloss.w, specularGloss.xyz, 0.7f);

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