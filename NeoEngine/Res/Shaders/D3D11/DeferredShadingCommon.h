

float3 GetEnvBRDFFresnel(float3 specCol0, float gloss, float fNdotV, Texture2D texEnvBRDF, SamplerState  samLinear)
{
	// Use a LUT that contains the numerically integrated BRDF for given N.V and smoothness parameters
	// x: integral for base reflectance 0.0, y: integral for base reflectance 1.0

	float2 envBRDF = texEnvBRDF.SampleLevel(samLinear, float2(fNdotV, gloss), 0.0f).xy;
	return lerp(envBRDF.xxx, envBRDF.yyy, specCol0);
}

void	ComputeAmbientCube(out float4 oDiffuse, out float4 oSpecular, TextureCube texDiff, TextureCube texSpec, Texture2D texEnvBRDF,
	SamplerState samLinear, float3 vView, float3 vNormal, float3 specCol, float fGloss)
{
	// Specular
	float fNdotE = dot(vView, vNormal);
	float3 vReflVec = reflect(-vView, vNormal);

	const int CUBE_MAP_SPEC_MIP_COUNT = 8;	// Assume ambient cubemap has 128x128 res
	float mipIndex = (1.0f - fGloss) * (CUBE_MAP_SPEC_MIP_COUNT - 1);

	oSpecular = texSpec.SampleLevel(samLinear, vReflVec, mipIndex);

	float3 fresnel = GetEnvBRDFFresnel(specCol, fGloss, fNdotE, texEnvBRDF, samLinear);
	oSpecular.xyz *= fresnel;

	// Diffuse
	oDiffuse = texDiff.SampleLevel(samLinear, vNormal, 0.0f);
}