
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
	float4	clipPlane;
	float4	ambientColor;
	float4	lightColor;
	float3	lightDirection;
	float3	camPos;
	float	time;
};

//--------------------------------------------------------------------------------------
struct VS_INPUT
{
    float4 Pos		: POSITION;
};

struct VS_OUTPUT
{
    float4 Pos	: SV_POSITION;
	float3 oUV  : TEXCOORD0;
};

//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS( VS_INPUT IN )
{
	VS_OUTPUT OUT = (VS_OUTPUT)0;

	OUT.Pos = mul(IN.Pos, WVP);
	OUT.oUV	= IN.Pos;

	return OUT;
}


//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------
TextureCube tex : register(t0);
SamplerState sam : register( s0 );

float4 PS( VS_OUTPUT IN ) : SV_Target
{
	float4 oColor = tex.Sample(sam, IN.oUV);

	return float4(oColor.rgb, 1.0);
}


#include "ClipPlaneWrapper.hlsl"
