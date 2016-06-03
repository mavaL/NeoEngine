
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