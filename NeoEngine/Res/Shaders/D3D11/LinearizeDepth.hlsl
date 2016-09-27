#include "Common.h"
#include "DeferredShadingCommon.h"


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
VS_OUTPUT VS(VS_INPUT IN)
{
	VS_OUTPUT OUT = (VS_OUTPUT)0;

	OUT.Pos = sign(IN.Pos);
	OUT.uv = IN.uv;
	OUT.rayV = frustumFarCorner[IN.toFarCornerIndex.x].xyz;

	return OUT;
}

Texture2D tex0 : register(t0);
SamplerState samPoint : register(s0);

//--------------------------------------------------------------------------------------
/// LinearizeDepthPS
//--------------------------------------------------------------------------------------
float DeviceDepthToLinear(float fDepth)
{
	float x = farZ / (farZ - nearZ);
	float y = nearZ / (nearZ - farZ);

	return y / (fDepth - x);
}

float4 LinearizeDepthPS(VS_OUTPUT IN) : SV_Target
{
	float fDevDepth = tex0.Sample(samPoint, IN.uv).x;
	float fz = DeviceDepthToLinear(fDevDepth);

	return float4(fz, fz, fz, fz);
}