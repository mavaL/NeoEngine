
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
	float4	frustumFarCorner[4];
	float4	ambientColor;
	float4	lightColor;
	float3	lightDirection;
	float3	camPos;
	float	time;
	float	nearZ, farZ;
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
    float4	Pos		: SV_POSITION;
	float3	normal	: TEXCOORD0;
	float3	PosV	: TEXCOORD1;
};

//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS( VS_INPUT IN )
{
    VS_OUTPUT OUT = (VS_OUTPUT)0;
    OUT.Pos = mul( IN.Pos, WVP );

	OUT.normal = mul(IN.normal, (float3x3)WorldIT);
	OUT.normal = mul(OUT.normal, (float3x3)View);

	OUT.PosV = mul(IN.Pos, World).xyz;
	OUT.PosV = mul(float4(OUT.PosV, 1.0), View).xyz;
    
    return OUT;
}


//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------
float4 PS( VS_OUTPUT IN ) : SV_Target
{
	float3 N = normalize(IN.normal);

	return float4(N, IN.PosV.z);
}