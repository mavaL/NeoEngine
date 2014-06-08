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
	float3 uv2 : TEXCOORD1;
	float3 uv3 : TEXCOORD2;
	float3 uv4 : TEXCOORD3;
	
};

struct VS_OUTPUT
{
    float4 Pos		: SV_POSITION;
	float2 uv		: TEXCOORD0;
	float4 lightDiffuse : TEXCOORD1;
};

//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS( VS_INPUT input )
{
    VS_OUTPUT output = (VS_OUTPUT)0;

	float4 vPosition = input.Pos;
	float3 vNormal = input.normal;
	float3 vOrientX = input.uv2;	// xyz = vector xyz
    float3 vOrientZ = input.uv3;	// xyz = vector xyz
    float3 vOffset = input.uv4;		// xyz = mesh placement position
	
	float3 vOrientY = -cross(vOrientX, vOrientZ);

    float3x3 matOrientMesh =
    {
        vOrientX, vOrientY, vOrientZ
    };
    
    // apply orientation matrix to the mesh positon & normal
    vPosition.xyz = mul(vPosition.xyz, matOrientMesh);
    vNormal = mul(vNormal, matOrientMesh);
	vNormal = normalize(mul(vNormal, (float3x3)WorldIT));

    // put oriented mesh into place at rotated and wind-affected vOffset
    vPosition.xyz += vOffset;

	output.lightDiffuse = max(0, dot(vNormal, -lightDirection)) * lightColor + ambientColor;
    output.lightDiffuse.a = 1.0f;
	output.lightDiffuse = saturate(output.lightDiffuse);

    output.Pos = mul(vPosition, WVP);
	output.uv = input.uv;
    
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

	float4 oColor = texColor * input.lightDiffuse;

	return float4(oColor.rgb, 1.0);
}

#include "../ClipPlaneWrapper.hlsl"