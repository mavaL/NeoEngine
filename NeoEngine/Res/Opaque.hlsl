
//--------------------------------------------------------------------------------------
// Constant Buffer Variables
//--------------------------------------------------------------------------------------
cbuffer cbufferGlobal : register( b0 )
{
    matrix	World;
	matrix	View;
	matrix	Projection;
	matrix	WVP;
	matrix	WorldIT;
	matrix	ShadowTransform;
	matrix	ShadowTransform2;
	matrix	ShadowTransform3;
	float4	clipPlane;
	float4	frustumFarCorner[4];
	float4	ambientColor;
	float4	lightColor;
	float3	lightDirection;
	float3	camPos;
	float	time;
	float	nearZ, farZ;
	float	shadowMapTexelSize;
};


//--------------------------------------------------------------------------------------
struct VS_INPUT
{
    float4 Pos : POSITION;
	float3 normal : NORMAL;
	float2 uv  : TEXCOORD0;
	float4 color : COLOR;
};

struct VS_OUTPUT
{
    float4 Pos		: SV_POSITION;
	float3 PosW		: POSITION;
	float2 uv		: TEXCOORD0;
	float3 normal	: TEXCOORD1;
#ifdef SSAO
	float4 projUV	: TEXCOORD2;
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

	output.PosW = mul(input.Pos, World).xyz;
	output.uv = input.uv;
	output.normal = mul(input.normal, (float3x3)WorldIT);

#ifdef SSAO
	output.projUV = float4(posH.x, -posH.y, 1, posH.w);
	output.projUV.xy = (output.projUV.xy + posH.w) * 0.5f;    
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
SamplerComparisonState	samShadowMap	: register(s1);


#include "Common.h"

float4 PS( VS_OUTPUT input ) : SV_Target
{
	// Do shadowing
	float4 fLitFactor = ComputeShdow(input.PosW, ShadowTransform, ShadowTransform2, ShadowTransform3, shadowMapTexelSize, samShadowMap, gShadowMap, gShadowMap2, gShadowMap3);

	// Do lighting
	float3 N = normalize(input.normal);
	float4 cLight = max(0, dot(N, -lightDirection)) * lightColor * fLitFactor;

	// SSAO
#ifdef SSAO
	input.projUV /= input.projUV.w;

	float fAmbientAccess = texSSAO.Sample(samSSAO, input.projUV.xy).r;
	// SSAO affects only ambient term!
	cLight += ambientColor * fAmbientAccess;
#else
	cLight += ambientColor;
#endif

	cLight = saturate(cLight);
	float4 oColor = texDiffuse.Sample(samLinear, input.uv) * cLight;

	return float4(oColor.rgb, 1.0);
}




struct gbuffer_output
{
	float4	oNormal	:	SV_Target0;
	float4	oAlbedo	:	SV_Target1;
	float4	oSpec	:	SV_Target2;
};

gbuffer_output PS_GBuffer(VS_OUTPUT input)
{
	gbuffer_output output = (gbuffer_output)0;

	output.oNormal = texNormal.Sample(samLinear, input.uv);
	output.oAlbedo = texDiffuse.Sample(samLinear, input.uv);
	output.oSpec = texSpec.Sample(samLinear, input.uv);

	return output;
}


#include "ClipPlaneWrapper.hlsl"