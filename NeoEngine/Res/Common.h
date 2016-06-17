#define PI 3.1415926

//--------------------------------------------------------------------------------------
// Constant Buffer Variables
//--------------------------------------------------------------------------------------
cbuffer cbufferGlobal : register(b0)
{
	matrix	World;
	matrix	View;
	matrix	Projection;
	matrix	WVP;
	matrix	WorldIT;
	matrix	ShadowTransform;
	matrix	ShadowTransform2;
	matrix	ShadowTransform3;
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


float3 Expand(float3 v)
{
	// [0, 1] -> [-1, 1]
	return v * 2.0f - 1.0f;
}

float3 ReconstructWorldPos(float3 rayV, Texture2D texDepth, SamplerState samp, float2 uv)
{
	float fLinearDepth = texDepth.Sample(samp, uv).x;
	return rayV * fLinearDepth + camPos;
}


float4 Shadow_Sample(Texture2D texShadow, SamplerComparisonState sam, float3 posW, float shadowMapTexelSize, float4x4 matShadow)
{
	float4 shadowPos = mul(float4(posW, 1.0f), matShadow);
	shadowPos.xyz /= shadowPos.w;
	float2 shadowTexUV = shadowPos.xy;

	// 2x2 PCF kernel
	float fLitFactor = 0.25f * texShadow.SampleCmpLevelZero(sam, shadowTexUV + float2(-shadowMapTexelSize, -shadowMapTexelSize), shadowPos.z);
	fLitFactor += 0.25f * texShadow.SampleCmpLevelZero(sam, shadowTexUV + float2(+shadowMapTexelSize, -shadowMapTexelSize), shadowPos.z);
	fLitFactor += 0.25f * texShadow.SampleCmpLevelZero(sam, shadowTexUV + float2(-shadowMapTexelSize, +shadowMapTexelSize), shadowPos.z);
	fLitFactor += 0.25f * texShadow.SampleCmpLevelZero(sam, shadowTexUV + float2(+shadowMapTexelSize, +shadowMapTexelSize), shadowPos.z);

	return float4(fLitFactor, fLitFactor, fLitFactor, 1);
}

float4	ComputeShdow(float3 posW, float4x4 matShadow, float4x4 matShadow2, float4x4 matShadow3, float shadowMapTexelSize,
	SamplerComparisonState sam, Texture2D texShdow1, Texture2D texShdow2, Texture2D texShdow3)
{
#ifdef SHADOW_CSM
	float fEyeZ = mul(float4(posW, 1.0f), View).z;
	float fZ = (fEyeZ - nearZ) / (farZ - nearZ);

	const float	CASCADE_PARTITION[3] =
	{
		0.1f, 0.4f, 1.0f
	};

	if (fZ <= CASCADE_PARTITION[0])
	{
		return Shadow_Sample(texShdow1, sam, posW, shadowMapTexelSize, matShadow);
	} 
	else if (fZ <= CASCADE_PARTITION[1])
	{
		return Shadow_Sample(texShdow2, sam, posW, shadowMapTexelSize, matShadow2);
	}
	else
	{
		return Shadow_Sample(texShdow3, sam, posW, shadowMapTexelSize, matShadow3);
	}
#else
	return Shadow_Sample(texShdow1, sam, posW, shadowMapTexelSize, matShadow);
#endif

}