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
	float4	ambientColor;
	float4	lightColor;
	float3	lightDirection;
	float	time;
};


//--------------------------------------------------------------------------------------
struct VS_INPUT
{
    float4 Pos : POSITION;
	float3 normal : NORMAL;
	float2 uv  : TEXCOORD0;
	float4 color : COLOR;
};

struct PS_INPUT
{
    float4 Pos		: SV_POSITION;
	float2 uv		: TEXCOORD0;
	float3 normal	: TEXCOORD1;
};


//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
PS_INPUT VS( VS_INPUT input )
{
    PS_INPUT output = (PS_INPUT)0;
    output.Pos = mul( input.Pos, WVP );

	output.uv = input.uv;
	output.normal = mul(input.normal, WorldIT);
    
    return output;
}


//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------
Texture2D tex : register(t0);
SamplerState sam : register( s0 );

float4 PS( PS_INPUT input ) : SV_Target
{
	//float3 N = normalize(input.normal);
	//float4 diffuse = saturate(max(0, dot(N, -lightDirection)) * lightColor + ambientColor);
	float4 oColor = tex.Sample(sam, input.uv)/* * diffuse*/;

	return float4(oColor.rgb, 1);
}
