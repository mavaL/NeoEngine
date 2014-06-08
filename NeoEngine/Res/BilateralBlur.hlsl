// From D3D11¡˙ È

//--------------------------------------------------------------------------------------
// Global Variables
//--------------------------------------------------------------------------------------
static const float gTexelWidth = 1.0f / 800;
static const float gTexelHeight = 1.0f / 600;
static const int gBlurRadius = 5;

cbuffer cbufferBlur : register( b1 )
{
	float4 texelKernel[gBlurRadius*2+1];
};

static const float gWeights[gBlurRadius*2+1] = 
{
	0.05f, 0.05f, 0.1f, 0.1f, 0.1f, 0.2f, 0.1f, 0.1f, 0.1f, 0.05f, 0.05f
};

Texture2D		gNormalDepthMap		: register(t0);
SamplerState	gSamNormalDepth		: register(s0);
Texture2D		gInputMap			: register(t1);
SamplerState	gSamInputMap		: register(s1);

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
// Vertex Shader
//--------------------------------------------------------------------------------------
struct VertexIn
{
	float3 PosL    : POSITION;
	float3 NormalL : NORMAL;
	float2 Tex     : TEXCOORD;
};

struct VertexOut
{
    float4 PosH  : SV_POSITION;
	float2 Tex   : TEXCOORD;
};

VertexOut VS(VertexIn vin)
{
	VertexOut vout;
	
	vout.PosH = float4(vin.PosL, 1.0f);
	vout.Tex = vin.Tex;
	
    return vout;
}

//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------
float4 PS(VertexOut pin) : SV_Target
{
	// The center value always contributes to the sum.
	float4 color      = gWeights[5]*gInputMap.SampleLevel(gSamInputMap, pin.Tex, 0.0);
	float totalWeight = gWeights[5];
	 
	float4 centerNormalDepth = gNormalDepthMap.SampleLevel(gSamNormalDepth, pin.Tex, 0.0f);

	for(float i = -gBlurRadius; i <=gBlurRadius; ++i)
	{
		// We already added in the center weight.
		if( i == 0 )
			continue;

		float2 tex = pin.Tex + i * texelKernel[i+gBlurRadius];

		float4 neighborNormalDepth = gNormalDepthMap.SampleLevel(gSamNormalDepth, tex, 0.0f);

		//
		// If the center value and neighbor values differ too much (either in 
		// normal or depth), then we assume we are sampling across a discontinuity.
		// We discard such samples from the blur.
		//
	
		if( dot(neighborNormalDepth.xyz, centerNormalDepth.xyz) >= 0.8f &&
		    abs(neighborNormalDepth.a - centerNormalDepth.a) <= 0.2f )
		{
			float weight = gWeights[i+gBlurRadius];

			// Add neighbor pixel to blur.
			color += weight*gInputMap.SampleLevel(
				gSamInputMap, tex, 0.0);
		
			totalWeight += weight;
		}
	}

	// Compensate for discarded samples by making total weights sum to 1.
	return color / totalWeight;
}