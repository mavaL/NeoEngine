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

cbuffer ShaderCB : register(b1)
{
	float refractionMask;
};

//--------------------------------------------------------------------------------------
struct VS_INPUT
{
    float4 Pos	:	POSITION;
	float2 uv	:	TEXCOORD0;
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
Texture2D tex : register(t0);
SamplerState sam : register( s0 );

float4 PS( PS_INPUT input ) : SV_Target
{
	float4 oColor = tex.Sample(sam, input.uv) * refractionMask;
	oColor.a = refractionMask;

	return oColor;
}
