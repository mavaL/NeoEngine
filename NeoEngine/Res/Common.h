
float	ComputeShdow(float3 posW, float4x4 matShadow, float shadowMapTexelSize,
	SamplerComparisonState sam, Texture2D texShdow)
{
	float4 shadowPos = mul(float4(posW, 1.0f), matShadow);
	shadowPos.xyz /= shadowPos.w;
	float2 shadowTexUV = shadowPos.xy;

	// 2x2 PCF kernel
	float fLitFactor = 0.25f * texShdow.SampleCmpLevelZero(sam, shadowTexUV + float2(-shadowMapTexelSize, -shadowMapTexelSize), shadowPos.z);
	fLitFactor += 0.25f * texShdow.SampleCmpLevelZero(sam, shadowTexUV + float2(+shadowMapTexelSize, -shadowMapTexelSize), shadowPos.z);
	fLitFactor += 0.25f * texShdow.SampleCmpLevelZero(sam, shadowTexUV + float2(-shadowMapTexelSize, +shadowMapTexelSize), shadowPos.z);
	fLitFactor += 0.25f * texShdow.SampleCmpLevelZero(sam, shadowTexUV + float2(+shadowMapTexelSize, +shadowMapTexelSize), shadowPos.z);

	return fLitFactor;
}