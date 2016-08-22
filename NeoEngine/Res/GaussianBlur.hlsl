#include "Common.h"


static const float BlurWeights[13] = 
{
    0.002216,
    0.008764,
    0.026995,
    0.064759,
    0.120985,
    0.176033,
    0.199471,
    0.176033,
    0.120985,
    0.064759,
    0.026995,
    0.008764,
    0.002216,
};

//--------------------------------------------------------------------------------------
struct VS_INPUT
{
    float4 Pos : POSITION;
	float2 uv  : TEXCOORD0;
};

struct VS_OUTPUT
{
    float4 Pos		: SV_POSITION;
	float2 uv		: TEXCOORD0;
};

//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS( VS_INPUT input )
{
    VS_OUTPUT OUT = (VS_OUTPUT)0;

    OUT.Pos = input.Pos;
	OUT.uv = input.uv;
    
    return OUT;
}

//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------
Texture2D texSrc : register(t0);
SamplerState sam : register(s0);

float4 PS_BlurX( VS_OUTPUT IN ) : SV_Target
{
	float4 Color = 0;

    for (int i = -6; i <= 6; i++) 
		Color += texSrc.Sample(sam, IN.uv + float2(i*shadowMapTexelSize, 0)) * BlurWeights[i+6];
    
    return Color;
}

float4 PS_BlurY(VS_OUTPUT IN) : SV_Target
{
	float4 Color = 0;

	for (int i = -6; i <= 6; i++)
		Color += texSrc.Sample(sam, IN.uv + float2(0, i*shadowMapTexelSize)) * BlurWeights[i+6];

	return Color;
}