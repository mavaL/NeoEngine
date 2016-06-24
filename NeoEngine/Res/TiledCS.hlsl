#include "Common.h"

// Tile dim : 16 x 16
#define		COMPUTE_SHADER_TILE_GROUP_DIM	16

RWStructuredBuffer<uint2> gFramebuffer : register(u0);

Texture2D texAlbedo : register(t0);
Texture2D texNormal : register(t1);
Texture2D texSpec : register(t2);
Texture2D texDepth : register(t3);

SamplerState samPoint : register(s0);


// - RGBA 16-bit per component packed into a uint2 per texel
uint2 PackRGBA16(float4 c)
{
	return f32tof16(c.rg) | (f32tof16(c.ba) << 16);
}

[numthreads(COMPUTE_SHADER_TILE_GROUP_DIM, COMPUTE_SHADER_TILE_GROUP_DIM, 1)]
void CS(
	uint3 groupId          : SV_GroupID,
	uint3 dispatchThreadId : SV_DispatchThreadID,
	uint3 groupThreadId : SV_GroupThreadID)
{
	uint2 globalCoords = dispatchThreadId.xy;
	float2 texUV = globalCoords / (float2)frameBufferSize.xy;

	float3 vNormal = texNormal.SampleLevel(samPoint, texUV, 0.0f).xyz;
	vNormal = normalize(Expand(vNormal));

	float fViewSpaceZ = texDepth.SampleLevel(samPoint, texUV, 0.0f).x * farZ;
	float2 vPosH = (texUV + 0.5f) * 2.0f - 1.0f;
	vPosH.y = 1 - vPosH.y;
	float3 vPosW = ComputeWorldPosFromViewSpaceZ(vPosH, fViewSpaceZ);
	float3 vView = normalize(camPos - vPosW);

	float4 cDiffuse = saturate(dot(vNormal, lightDirection)) * lightColor;
	float3 cSpecular = PhysicalBRDF(vNormal, vView, lightDirection, 0.7f, float3(0.7f, 0.7f, 0.7f));

	float4 oColor = texAlbedo.SampleLevel(samPoint, texUV, 0.0f) * cDiffuse;
	oColor.xyz += cSpecular;

	gFramebuffer[globalCoords.y * frameBufferSize.x + globalCoords.x] = PackRGBA16(oColor);
}