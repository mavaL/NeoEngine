#include "Common.h"


//--------------------------------------------------------------------------------------
struct VS_INPUT
{
    float4 Pos : POSITION;
	float2 uv  : TEXCOORD0;
	float3 toFarCornerIndex : NORMAL;
};

struct VS_OUTPUT
{
    float4	Pos		: SV_POSITION;
	float2	uv		: TEXCOORD0;
	float3	rayV	: TEXCOORD1;
};

//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS( VS_INPUT IN )
{
    VS_OUTPUT OUT = (VS_OUTPUT)0;

    OUT.Pos = sign(IN.Pos);
	OUT.uv = IN.uv;
	OUT.rayV = frustumFarCorner[IN.toFarCornerIndex.x].xyz;
    
    return OUT;
}

Texture2D tex0 : register(t0);
Texture2D tex1 : register(t1);
Texture2D tex2 : register(t2);
Texture2D tex3 : register(t3);
SamplerState samPoint : register(s0);


//--------------------------------------------------------------------------------------
/// ComposePS
//--------------------------------------------------------------------------------------
float4 ComposePS( VS_OUTPUT IN ) : SV_Target
{
	float3 vNormal = tex1.Sample(samPoint, IN.uv).xyz;
	vNormal = normalize(Expand(vNormal));

	float3 vPosW = ReconstructWorldPos(IN.rayV, tex3, samPoint, IN.uv);
	float3 vView = normalize(camPos - vPosW);

	float4 cDiffuse = saturate(dot(vNormal, lightDirection)) * lightColor;

	float4 specGloss = tex2.Sample(samPoint, IN.uv);
	float3 cSpecular = PhysicalBRDF(vNormal, vView, lightDirection, specGloss.w, specGloss.xyz);

	float4 oColor = tex0.Sample(samPoint, IN.uv) * cDiffuse;
	oColor.xyz += cSpecular;

	return oColor;
}


//--------------------------------------------------------------------------------------
/// LinearizeDepthPS
//--------------------------------------------------------------------------------------
float DeviceDepthToLinear(float fDepth)
{
	float x = farZ / (farZ - nearZ);
	float y = nearZ / (nearZ - farZ);
	
	return y / (fDepth - x);
}

float4 LinearizeDepthPS(VS_OUTPUT IN) : SV_Target
{
	float fDevDepth = tex0.Sample(samPoint, IN.uv).x;
	float fz = DeviceDepthToLinear(fDevDepth);

	return float4(fz, fz, fz, fz);
}