#include "Common.h"
#include "DeferredShadingCommon.h"


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
Texture2D tex4 : register(t4);
Texture2D tex5 : register(t5);
Texture2D tex6 : register(t6);
Texture2D tex7 : register(t7);
TextureCube texCube0 : register(t10);
TextureCube texCube1 : register(t11);
SamplerState samPoint : register(s0);


//--------------------------------------------------------------------------------------
/// ComposePS
//--------------------------------------------------------------------------------------
SamplerState samLinear : register(s1);
SamplerComparisonState samShadow : register(s2);

float4 ComposePS( VS_OUTPUT IN ) : SV_Target
{
	float3 vNormal = tex1.Sample(samPoint, IN.uv).xyz;
	vNormal = normalize(Expand(vNormal));

	float3 vWorldPos = ReconstructWorldPos(tex3, samPoint, IN.uv);
	float3 vView = normalize(camPos - vWorldPos);

	// Sun light
	float4 cDiffuse = saturate(dot(vNormal, lightDirection)) * lightColor;

	float4 specGloss = tex2.Sample(samPoint, IN.uv);
	float3 cSpecular = PhysicalBRDF(vNormal, vView, lightDirection, specGloss.w, specGloss.xyz);

	float4 albedo = tex0.Sample(samPoint, IN.uv);
	float4 oColor = albedo * cDiffuse;
	oColor.xyz += cSpecular;

	// Shadow
	float4 vShadow = ComputeShadow(vWorldPos, ShadowTransform, ShadowTransform2, ShadowTransform3, shadowMapTexelSize, samShadow, tex4, tex5, tex6);
	oColor *= vShadow;

#ifdef AMBIENT_CUBE
	// Ambient
	float4 vAmbientDiff, vAmbientSpec;
	float fAmbDiffStrength = 0.5f, fAmbSpecStrength = 0.5f;
	ComputeAmbientCube(vAmbientDiff, vAmbientSpec, texCube0, texCube1, tex7, samLinear, vView, vNormal, specGloss.xyz, specGloss.w);

	oColor += vAmbientSpec * fAmbDiffStrength + vAmbientDiff * albedo * fAmbSpecStrength;
#endif

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