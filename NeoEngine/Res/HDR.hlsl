#include "Common.h"

//--------------------------------------------------------------------------------------
struct VS_INPUT
{
    float4 Pos : POSITION;
	float2 uv  : TEXCOORD0;
	float3 toFarCornerIndex : NORMAL;
};

struct VS_OUTPUT
{
    float4	Pos		: SV_POSITION;
	float2	uv		: TEXCOORD0;
	float3	rayV	: TEXCOORD1;
};

//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS( VS_INPUT IN )
{
    VS_OUTPUT OUT = (VS_OUTPUT)0;

	OUT.Pos = sign(IN.Pos);
	OUT.uv = IN.uv;
	OUT.rayV = frustumFarCorner[IN.toFarCornerIndex.x].xyz;
    
    return OUT;
}


//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------
#ifdef TBDR
	StructuredBuffer<uint2> gLitTextureFlat : register(t0);
#else
	Texture2D texScene : register(t0);
#endif
SamplerState samPoint : register( s0 );


float4 UnpackRGBA16(uint2 e)
{
	return float4(f16tof32(e), f16tof32(e >> 16));
}


float4 PS( VS_OUTPUT IN ) : SV_Target
{
#ifdef TBDR
	uint2 index = IN.uv * frameBufferSize.xy;
	return UnpackRGBA16(gLitTextureFlat[index.y * frameBufferSize.x + index.x]);
#else
	return texScene.Sample(samPoint, IN.uv);
#endif
}