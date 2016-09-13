
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

cbuffer cbufferTerrain : register( b1 )
{
	float4	frustumWorldPlanes[4];
	float	minTessDist;
	float	maxTessDist;
	float	minTess;
	float	maxTess;
	float2	invTexSize;
	float	terrainCellSpace;
};

//--------------------------------------------------------------------------------------
struct VS_OUTPUT
{
    float3 PosW		: POSITION;
	float2 uv		: TEXCOORD0;
	float2 boundY	: TEXCOORD1;
};

struct DomainOut
{
	float4 PosH     : SV_POSITION;
    float3 PosW     : POSITION;
	float2 Tex      : TEXCOORD0;
	float2 TiledTex : TEXCOORD1;
};

//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------

float4 PS( DomainOut IN ) : SV_Target
{
	return float4(1.0f, 1.0f, 1.0f, 1.0f);
}