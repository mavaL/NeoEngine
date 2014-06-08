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


//--------------------------------------------------------------------------------------
struct VS_INPUT
{
    float4 Pos : POSITION;
	float3 normal : NORMAL;
	float2 uv  : TEXCOORD0;
	float4 color : COLOR;
};

struct VS_OUTPUT
{
    float4 Pos		: SV_POSITION;
	float2 uv		: TEXCOORD0;
	float3 normal	: TEXCOORD1;
};

//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS( VS_INPUT input )
{
    VS_OUTPUT output = (VS_OUTPUT)0;

    output.Pos = mul(input.Pos, WVP);
	output.uv = input.uv;
	output.normal = mul(input.normal, (float3x3)WorldIT);
    
    return output;
}


//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------
Texture2D		texDiffuse		: register(t0);
SamplerState	samDiffuse		: register(s0);

const static float fAlphaTest = 84.0f / 255.0f;

float4 PS( VS_OUTPUT input ) : SV_Target
{
	float4 texColor = texDiffuse.Sample(samDiffuse, input.uv);

	// Do alpha test
	clip(texColor.a - fAlphaTest);

	// Do lighting
	float3 N = normalize(input.normal);
	float4 cLight = max(0, dot(N, -lightDirection)) * lightColor + ambientColor;

	cLight = saturate(cLight);
	float4 oColor = texColor * cLight;

	return float4(oColor.rgb, 1.0);
}

#include "../ClipPlaneWrapper.hlsl"