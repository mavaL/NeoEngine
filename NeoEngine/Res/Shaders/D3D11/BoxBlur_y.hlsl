#include "Common.h"

Texture2D texSrc : register(t0);
SamplerState sam : register(s0);

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
// Box Blur n * n
//--------------------------------------------------------------------------------------
cbuffer cbufferBlur : register(b10)
{
	float	fFilterWidth;
};

float BoxFilterStart(float fWidth)  //Assumes filter is odd
{
	return ((fWidth - 1.0f) / 2.0f);
}

#define ESM_BLUR_WIDTH	5

float4 PS_BoxBlurY(VS_OUTPUT IN) : SV_Target
{
	float fStartOffset = BoxFilterStart(ESM_BLUR_WIDTH);
	float2 fTexelOffset = float2(0, shadowMapTexelSize);
    
    float2 fTexStart = IN.uv - ( fStartOffset * fTexelOffset );
    float4 output = (float4)0.0f;
    
	for (int i = 0; i < ESM_BLUR_WIDTH; ++i)
		output += texSrc.Sample(sam, float2(fTexStart + fTexelOffset * i));
    
	return output / ESM_BLUR_WIDTH;
}