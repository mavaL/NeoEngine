// 算法来自D3D11龙书

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

static float4	g_vecOffset[14] =
{
	float4(+1.0f/3, +1.0f/3, +1.0f/3, 0.0f),
	float4(-1.0f/3, -1.0f/3, -1.0f/3, 0.0f),

	float4(-1.0f/3, +1.0f/3, +1.0f/3, 0.0f),
	float4(+1.0f/3, -1.0f/3, -1.0f/3, 0.0f),

	float4(+1.0f/3, +1.0f/3, -1.0f/3, 0.0f),
	float4(-1.0f/3, -1.0f/3, +1.0f/3, 0.0f),

	float4(-1.0f/3, +1.0f/3, -1.0f/3, 0.0f),
	float4(+1.0f/3, -1.0f/3, +1.0f/3, 0.0f),

	float4(-1.0f, 0.0f, 0.0f, 0.0f),
	float4(+1.0f, 0.0f, 0.0f, 0.0f),

	float4(0.0f, -1.0f, 0.0f, 0.0f),
	float4(0.0f, +1.0f, 0.0f, 0.0f),

	float4(0.0f, 0.0f, -1.0f, 0.0f),
	float4(0.0f, 0.0f, +1.0f, 0.0f)
};

static float    gOcclusionRadius    = 0.5f;
static float    gOcclusionFadeStart = 0.2f;
static float    gOcclusionFadeEnd   = 2.0f;
static float    gSurfaceEpsilon     = 0.05f;


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


//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------
Texture2D tex : register(t0);
SamplerState sam : register( s0 );


// Determines how much the sample point q occludes the point p as a function
// of distZ.
float OcclusionFunction(float distZ)
{
	//
	// If depth(q) is "behind" depth(p), then q cannot occlude p.  Moreover, if 
	// depth(q) and depth(p) are sufficiently close, then we also assume q cannot
	// occlude p because q needs to be in front of p by Epsilon to occlude p.
	//
	// We use the following function to determine the occlusion.  
	// 
	//
	//       1.0     -------------\
	//               |           |  \
	//               |           |    \
	//               |           |      \ 
	//               |           |        \
	//               |           |          \
	//               |           |            \
	//  ------|------|-----------|-------------|---------|--> zv
	//        0     Eps          z0            z1        
	//
	
	float occlusion = 0.0f;
	if(distZ > gSurfaceEpsilon)
	{
		float fadeLength = gOcclusionFadeEnd - gOcclusionFadeStart;
		
		// Linearly decrease occlusion from 1 to 0 as distZ goes 
		// from gOcclusionFadeStart to gOcclusionFadeEnd.	
		occlusion = saturate( (gOcclusionFadeEnd-distZ)/fadeLength );
	}
	
	return occlusion;	
}

float4 PS( VS_OUTPUT IN ) : SV_Target
{
	//=====================================================================
	// Reconstruct view space position
	//=====================================================================
	float4 normalDepth = tex.Sample(sam, IN.uv);
	float3 N = normalDepth.xyz;
	float linearZ = normalDepth.a;

	float3 PosV = IN.rayV * (linearZ / IN.rayV.z);

	//=====================================================================
	// Sample texels around to determin occlusion
	//=====================================================================
	float occlusionSum = 0.0f;
	for(int i = 0; i < 14; ++i)
	{
		// Get the offset point
		float flip = sign( dot(g_vecOffset[i].xyz, N) );
		float3 ptOffset = PosV + flip * gOcclusionRadius * g_vecOffset[i].xyz;

		// View space to texture space
		float4 projPt = mul(float4(ptOffset,1), Projection);
		projPt.xyz /= projPt.w;
		projPt.xy = (projPt.xy + float2(1.0, -1.0)) * float2(0.5, -0.5);

		// Get this texel's view space position
		float ptDepth = tex.Sample(sam, projPt.xy).a;
		float3 NeighbourPosV = ptOffset * (ptDepth / ptOffset.z);

		// Test whether occlusion occurs
		float distZ = PosV.z - NeighbourPosV.z;
		float dp = max(dot(N, normalize(NeighbourPosV - PosV)), 0.0f);
		float occlusion = dp * OcclusionFunction(distZ);
		
		occlusionSum += occlusion;
	}

	occlusionSum /= 14;
	
	float access = 1.0f - occlusionSum;

	// Sharpen the contrast of the SSAO map to make the SSAO affect more dramatic.
	return saturate(pow(access, 4.0f));
}