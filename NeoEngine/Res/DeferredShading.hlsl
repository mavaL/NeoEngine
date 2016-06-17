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

half DiffuseBRDF(half3 N, half3 V, half3 L, half Gloss, half NdotL)
{
	// TODO: Merge with Specular BRDF to save a few instructions

	half m = pow((1.0 - Gloss * 0.7), 6);

	// Approximation of the full quality Oren-Nayar model
	half s = dot(L, V) - dot(N, L) * dot(N, V);
	half t = s <= 0 ? 1 : max(max(dot(N, L), dot(N, V)), 1e-6);
	half A = 1.0f / (1.0f + (0.5f - 2.0f / (3.0f * PI)) * m);
	half B = m * A;

	return NdotL * max(A + B * (s / t), 0);
}

half3 PhysicalBRDF(half3 N, half3 V, half3 L, half Gloss, half3 SpecCol)
{
	half3 H = normalize( V + L );
	
	// Compute perceptually linear roughness parameter (squared)
	half m = pow( (1.0 - Gloss * 0.7), 6 );
	half m2 = m * m;
	
	// Prevent highlights from getting too tiny since we don't have real area lights yet
	m2 = max( m2, 0.00001 );
	
	// GGX NDF
	half NdotH = saturate( dot( N, H ) );
	half spec = (NdotH * NdotH) * (m2 - 1) + 1;
	spec = m2 / (spec * spec);
	
	// Schlick-Smith Visibility Term
	half k = (0.8 + m * 0.5) * (0.8 + m * 0.5) / 2;
	half Gv = saturate( dot( N, V ) ) * (1 - k) + k;
	half Gl = saturate( dot( N, L ) ) * (1 - k) + k;
	spec /= max( Gv * Gl, 1e-6 );
		
	// Schlick approximation for Fresnel
	half3 fresnel = lerp( SpecCol, 1.0h, pow( 1 - dot(L, H), 5 ) );

	return (fresnel * spec) / 4.0h;
}


float4 ComposePS( VS_OUTPUT IN ) : SV_Target
{
	float3 vNormal = tex1.Sample(samPoint, IN.uv).xyz;
	vNormal = normalize(Expand(vNormal));

	float3 vPosW = ReconstructWorldPos(IN.rayV, tex3, samPoint, IN.uv);
	float3 vView = camPos - vPosW;

	float4 cDiffuse = saturate(dot(vNormal, -lightDirection)) * lightColor;
	float3 cSpecular = PhysicalBRDF(vNormal, vView, -lightDirection, 0.7f, float3(0.7f, 0.7f, 0.7f));

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