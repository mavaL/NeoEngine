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

struct VS_OUTPUT
{
	float4	oPos	:	SV_POSITION;
	float	waterDepth : TEXCOORD0;
};


//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS( VS_INPUT IN )
{
    VS_OUTPUT OUT = (VS_OUTPUT)0;

	OUT.oPos = mul(IN.Pos, WVP);
	OUT.waterDepth = IN.Pos.y - waterPlaneHeight;

	return OUT;
}


//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------
float4 PS( VS_OUTPUT IN ) : SV_Target
{
	float oDepth = IN.waterDepth;
	oDepth = oDepth * depthLimit + 1;
	oDepth = saturate(oDepth);

	return oDepth;
}