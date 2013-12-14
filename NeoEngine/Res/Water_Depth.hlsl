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

cbuffer ShaderCB : register(b1)
{
	float	waterPlaneHeight;
	float	depthLimit;
};

//--------------------------------------------------------------------------------------
struct VS_INPUT
{
    float4 Pos	:	POSITION;
};

struct PS_INPUT
{
	float4	oPos	:	SV_POSITION;
	float	waterDepth : TEXCOORD0;
};


//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
PS_INPUT VS( VS_INPUT IN )
{
    PS_INPUT OUT = (PS_INPUT)0;

	OUT.oPos = mul(IN.Pos, WVP);
	OUT.waterDepth = IN.Pos.y - waterPlaneHeight;

	return OUT;
}


//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------
float4 PS( PS_INPUT IN ) : SV_Target
{
	float oDepth = IN.waterDepth;
	oDepth = oDepth * depthLimit + 1;
	oDepth = saturate(oDepth);

	return oDepth;
}