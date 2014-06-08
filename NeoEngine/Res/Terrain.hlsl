#include "Common.h"

//--------------------------------------------------------------------------------------
// Global Variables
//--------------------------------------------------------------------------------------
Texture2D		gHeightMap		: register(t0);
Texture2DArray	gLayerMaps		: register(t1);
Texture2D		gBlendMap		: register(t2);
Texture2D		gNormalMap		: register(t3);
Texture2D		gShadowMap		: register(t4);
SamplerState	samHeightmap	: register(s0);
SamplerState	samLayerMap		: register(s1);
SamplerState	samBlendMap		: register(s2);
SamplerState	samNormalMap	: register(s3);
SamplerComparisonState	samShadowMap	: register(s4);

static const float2	g_layerTexScale = 50.0;

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
struct VS_INPUT
{
    float3 Pos : POSITION;
	float3 normal : NORMAL;
	float2 uv  : TEXCOORD0;
	float4 color : COLOR;
};

struct VS_OUTPUT
{
    float3 PosW		: POSITION;
	float2 uv		: TEXCOORD0;
	float2 boundY	: TEXCOORD1;
};

//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS( VS_INPUT input )
{
    VS_OUTPUT OUT = (VS_OUTPUT)0;

    OUT.PosW = input.Pos;
	OUT.uv = input.uv;
	OUT.boundY = input.color.xy;
    
    return OUT;
}


//--------------------------------------------------------------------------------------
// Hull Shader
//--------------------------------------------------------------------------------------
bool AabbBehindPlaneTest(float3 center, float3 extents, float4 plane)
{
	float3 n = abs(plane.xyz);
	
	// This is always positive.
	float r = dot(extents, n);
	
	// signed distance from center point to plane.
	float s = dot( float4(center, 1.0f), plane );
	
	// If the center point of the box is a distance of e or more behind the
	// plane (in which case s is negative since it is behind the plane),
	// then the box is completely in the negative half space of the plane.
	return (s + r) < 0.0f;
}

bool FrustumCull(float3 center, float3 extents)
{
	for(int i = 0; i < 4; ++i)
	{
		if( AabbBehindPlaneTest(center, extents, frustumWorldPlanes[i]) )
		{
			return true;
		}
	}
	
	return false;
}

float CalcTessFactor(float3 p)
{
	float d = distance(p, camPos);

	// max norm in xz plane (useful to see detail levels from a bird's eye).
	//float d = max( abs(p.x-gEyePosW.x), abs(p.z-gEyePosW.z) );
	
	float s = saturate( (d - minTessDist) / (maxTessDist - minTessDist) );
	
	return pow(2, (lerp(maxTess, minTess, s)) );
}

struct PatchTess
{
	float EdgeTess[4]   : SV_TessFactor;
	float InsideTess[2] : SV_InsideTessFactor;
};

PatchTess ConstantHS(InputPatch<VS_OUTPUT, 4> patch, uint patchID : SV_PrimitiveID)
{
	PatchTess pt;

	// Frusum culling
	float minY = patch[0].boundY.x;
	float maxY = patch[0].boundY.y;
	
	// Build axis-aligned bounding box
	float3 vMin = float3(patch[0].PosW.x, minY, patch[0].PosW.z);
	float3 vMax = float3(patch[3].PosW.x, maxY, patch[3].PosW.z);

	float3 boxCenter  = 0.5f*(vMin + vMax);
	float3 boxExtents = 0.5f*(vMax - vMin);

	bool bUseGpuFrustumClip = false;
#ifdef GPU_FRUSTUM_CLIP
	bUseGpuFrustumClip = true;
#endif
	if(bUseGpuFrustumClip && FrustumCull(boxCenter, boxExtents))
	{
		pt.EdgeTess[0] = 0;
		pt.EdgeTess[1] = 0;
		pt.EdgeTess[2] = 0;
		pt.EdgeTess[3] = 0;

		pt.InsideTess[0] = pt.InsideTess[1] = 0;
	}
	else
	{
		// Do tessellation based on distance.
		// It is important to do the tess factor calculation based on the
		// edge properties so that edges shared by more than one patch will
		// have the same tessellation factor.  Otherwise, gaps can appear.

		// Compute midpoint on edges, and patch center
		float3 e0 = 0.5f*(patch[0].PosW + patch[2].PosW);
		float3 e1 = 0.5f*(patch[0].PosW + patch[1].PosW);
		float3 e2 = 0.5f*(patch[1].PosW + patch[3].PosW);
		float3 e3 = 0.5f*(patch[2].PosW + patch[3].PosW);
		float3  c = 0.25f*(patch[0].PosW + patch[1].PosW + patch[2].PosW + patch[3].PosW);

		pt.EdgeTess[0] = CalcTessFactor(e0);
		pt.EdgeTess[1] = CalcTessFactor(e1);
		pt.EdgeTess[2] = CalcTessFactor(e2);
		pt.EdgeTess[3] = CalcTessFactor(e3);

		pt.InsideTess[0] = CalcTessFactor(c);
		pt.InsideTess[1] = pt.InsideTess[0];
	}

	return pt;
}

struct HullOut
{
	float3 PosW     : POSITION;
	float2 Tex      : TEXCOORD0;
};

[domain("quad")]
[partitioning("fractional_even")]
[outputtopology("triangle_cw")]
[outputcontrolpoints(4)]
[patchconstantfunc("ConstantHS")]
[maxtessfactor(64.0f)]
HullOut HS(InputPatch<VS_OUTPUT, 4> p, 
           uint i : SV_OutputControlPointID,
           uint patchId : SV_PrimitiveID)
{
	HullOut hout;
	
	// Pass through shader.
	hout.PosW     = p[i].PosW;
	hout.Tex      = p[i].uv;
	
	return hout;
}

//--------------------------------------------------------------------------------------
// Domain Shader
//--------------------------------------------------------------------------------------

struct DomainOut
{
	float4 PosH     : SV_POSITION;
    float3 PosW     : POSITION;
	float2 Tex      : TEXCOORD0;
	float2 TiledTex : TEXCOORD1;
};

[domain("quad")]
DomainOut DS(PatchTess patchTess, 
             float2 uv : SV_DomainLocation, 
             const OutputPatch<HullOut, 4> quad)
{
	DomainOut dout;
	
	// Bilinear interpolation.
	dout.PosW = lerp(
		lerp(quad[0].PosW, quad[1].PosW, uv.x),
		lerp(quad[2].PosW, quad[3].PosW, uv.x),
		uv.y); 
	
	dout.Tex = lerp(
		lerp(quad[0].Tex, quad[1].Tex, uv.x),
		lerp(quad[2].Tex, quad[3].Tex, uv.x),
		uv.y); 
		
	// Tile layer textures over terrain.
	dout.TiledTex = dout.Tex * g_layerTexScale; 
	
	// Displacement mapping
	dout.PosW.y = gHeightMap.SampleLevel( samHeightmap, dout.Tex, 0 ).r;
	
	// Project to homogeneous clip space.
	dout.PosH = mul(float4(dout.PosW, 1.0f), WVP);
	
	return dout;
}

//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------

float4 PS( DomainOut IN ) : SV_Target
{
	//====================================================================================
	// Estimate normal and tangent using central differences.
	//====================================================================================
	float2 leftTex   = IN.Tex + float2(-invTexSize.x, 0.0f);
	float2 rightTex  = IN.Tex + float2(invTexSize.x, 0.0f);
	float2 bottomTex = IN.Tex + float2(0.0f, invTexSize.y);
	float2 topTex    = IN.Tex + float2(0.0f, -invTexSize.y);
	
	float leftY   = gHeightMap.SampleLevel( samHeightmap, leftTex, 0 ).r;
	float rightY  = gHeightMap.SampleLevel( samHeightmap, rightTex, 0 ).r;
	float bottomY = gHeightMap.SampleLevel( samHeightmap, bottomTex, 0 ).r;
	float topY    = gHeightMap.SampleLevel( samHeightmap, topTex, 0 ).r;
	
	float3 tangent = normalize(float3(2.0f*terrainCellSpace, rightY - leftY, 0.0f));
	float3 bitan   = normalize(float3(0.0f, bottomY - topY, -2.0f*terrainCellSpace)); 
	
	float3x3 matTBN = float3x3(tangent, bitan, cross(tangent, bitan));

	//====================================================================================
	// Texture splatting
	//====================================================================================
	float4 c0 = gLayerMaps.Sample( samLayerMap, float3(IN.TiledTex, 0.0f) );
	float4 c1 = gLayerMaps.Sample( samLayerMap, float3(IN.TiledTex, 1.0f) );
	float4 c2 = gLayerMaps.Sample( samLayerMap, float3(IN.TiledTex, 2.0f) );
	float4 c3 = gLayerMaps.Sample( samLayerMap, float3(IN.TiledTex, 3.0f) );
	float4 c4 = gLayerMaps.Sample( samLayerMap, float3(IN.TiledTex, 4.0f) ); 
	
	// blend map
	float4 t  = gBlendMap.Sample( samBlendMap, IN.Tex ); 
    
    // Blend the layers on top of each other.
    float4 texColor = c0;
    texColor = lerp(texColor, c1, t.r);
    texColor = lerp(texColor, c2, t.g);
    texColor = lerp(texColor, c3, t.b);
    texColor = lerp(texColor, c4, t.a);

	// normal map
	float3 N = gNormalMap.Sample(samNormalMap, IN.TiledTex);
	// decode normal
	N = (N - 0.5) * 2.0;
	// tangent space to world space
	N = mul(N, matTBN);

	// Do shadowing
	float fLitFactor = ComputeShdow(IN.PosW, ShadowTransform, shadowMapTexelSize, samShadowMap, gShadowMap);

	// Do lighting
	float3 PosToCam = camPos - IN.PosW;
	float3 H = normalize(PosToCam + (-lightDirection));
	float4 spec = pow(max(0, dot(N, H)), 50) * lightColor;

	float4 oColor = saturate(max(0, dot(N, -lightDirection)) * lightColor * fLitFactor + ambientColor);
	oColor *= texColor;
	oColor += spec;

	return saturate(float4(oColor.rgb, 1.0));
}

#include "ClipPlaneWrapper.hlsl"