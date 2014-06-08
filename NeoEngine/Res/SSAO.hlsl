
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
	// Sample texel kernels to determin occlusion
	//=====================================================================
	float occlusionSum = 0.0f;
	for(int i = 0; i < 14; ++i)
	{
		// Deal with self-occlusion
		float flip = sign( dot(g_vecOffset[i].xyz, N) );

		// Get the offset point
		float3 ptOffset = PosV + flip * gOcclusionRadius * g_vecOffset[i].xyz;

		// View space to texture space
		float4 projPt = mul(float4(ptOffset,1), Projection);
		projPt.xyz /= projPt.w;
		projPt.xy = (projPt.xy + float2(1.0, -1.0)) * float2(0.5, -0.5);

		float ptDepth = tex.Sample(sam, projPt.xy).a;

#ifdef SC2_SSAO
		float occlusion = 0.0f, deltaZ = ptOffset.z - ptDepth;

		if ( deltaZ > 0.01f ) 
		{
            // Past this distance there is no occlusion.
            float fNoOcclusionRange = gOcclusionFadeEnd - gOcclusionFadeStart;      
            if ( deltaZ < gOcclusionFadeStart )
                occlusion = 1.0f;
            else 
				occlusion = max( 1.0f - ( ( deltaZ - gOcclusionFadeStart ) / fNoOcclusionRange ), 0.0f );
        } 
#else // From D3D11龙书,自遮闭更健壮一点,当然计算量也多了一点
		// Get this texel's view space position
		float3 NeighbourPosV = ptOffset * (ptDepth / ptOffset.z);

		// Test whether occlusion occurs
		float distZ = PosV.z - NeighbourPosV.z;
		float dp = max(dot(N, normalize(NeighbourPosV - PosV)), 0.0f);
		float occlusion = dp * OcclusionFunction(distZ);
#endif
		
		occlusionSum += occlusion;
	}

	occlusionSum /= 14;
	
	float access = 1.0f - occlusionSum;

	// Sharpen the contrast of the SSAO map to make the SSAO affect more dramatic.
	return saturate(pow(access, 4.0f));
}