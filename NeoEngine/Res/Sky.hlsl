
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
	float	time;
};

//--------------------------------------------------------------------------------------
struct VS_INPUT
{
    float4 Pos		: POSITION;
};

struct PS_INPUT
{
    float4 Pos	: SV_POSITION;
	float3 oUV  : TEXCOORD0;
};

//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
PS_INPUT VS( VS_INPUT IN )
{
	PS_INPUT OUT = (PS_INPUT)0;

	OUT.Pos = mul(IN.Pos, WVP);
	OUT.oUV	= IN.Pos;

	return OUT;
}


//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------
TextureCube tex : register(t0);
SamplerState sam : register( s0 );

float4 PS( PS_INPUT IN ) : SV_Target
{
	float4 oColor = tex.Sample(sam, IN.oUV);

	return float4(oColor.rgb, 1.0);
}


#include "ClipPlaneWrapper.hlsl"
