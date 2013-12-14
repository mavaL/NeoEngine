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
    float4 Pos		:	POSITION;
	float3 normal	:	NORMAL;
	float2 uv		:	TEXCOORD0;
};

struct PS_INPUT
{
	float4 oPos	:	SV_POSITION;
	float2 uv	:	TEXCOORD0;
};


//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
PS_INPUT VS( VS_INPUT IN )
{
    PS_INPUT OUT = (PS_INPUT)0;

	OUT.oPos = mul(IN.Pos, WVP);
	OUT.uv	=	IN.uv;

	return OUT;
}


//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------
float4 PS( PS_INPUT input ) : SV_Target
{
	return float4(0,0,0,0);
}
