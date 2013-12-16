
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
    float3 Pos : POSITION;
	float3 normal : NORMAL;
	float2 uv  : TEXCOORD0;
	float4 color : COLOR;
};

struct VS_OUTPUT
{
    float4 Pos		: SV_POSITION;
	float2 uv		: TEXCOORD0;
	float4 color	: TEXCOORD1;
};

//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS( VS_INPUT input )
{
    VS_OUTPUT output = (VS_OUTPUT)0;

    output.Pos = float4(input.Pos, 1);
    output.uv = input.uv;
    output.color = input.color;
    
    return output;
}


//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------
Texture2D tex : register(t0);
SamplerState sam : register( s0 );

float4 PS( VS_OUTPUT input ) : SV_Target
{
	float4 oColor = tex.Sample(sam, input.uv);
	oColor.rgb/* *= input.color.rgb*/;
	
	return oColor;
}