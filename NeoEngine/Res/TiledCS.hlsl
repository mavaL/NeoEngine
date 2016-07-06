#include "Common.h"
#include "DeferredShadingCommon.h"

#define		DEBUG_LIGHT_COUNT				0

// Tile dim : 16 x 16
#define		COMPUTE_SHADER_TILE_DIM			16
#define		COMPUTE_SHADER_TILE_SIZE		COMPUTE_SHADER_TILE_DIM * COMPUTE_SHADER_TILE_DIM
#define		TOTAL_LIGHT_NUM					100

// Output UAV
RWStructuredBuffer<uint2> gFramebuffer : register(u0);

// Input GBuffer and light info
Texture2D texAlbedo : register(t0);
Texture2D texNormal : register(t1);
Texture2D texSpec : register(t2);
Texture2D texDepth : register(t3);
Texture2D texShadow1 : register(t4);
Texture2D texShadow2 : register(t5);
Texture2D texShadow3 : register(t6);
StructuredBuffer<PointLight> gLight : register(t7);
TextureCube texAmbientCubeDiff : register(t8);
TextureCube texAmbientCubeSpec : register(t9);
Texture2D texEnvBRDF : register(t10);

SamplerState samPoint : register(s0);
SamplerComparisonState samShadow : register(s1);
SamplerState samLinear : register(s2);

// Per-tile shared data
groupshared uint s_TileMinZ;
groupshared uint s_TileMaxZ;
groupshared uint s_TileLightNum;
groupshared uint s_TileLightIndices[TOTAL_LIGHT_NUM];

// - RGBA 16-bit per component packed into a uint2 per texel
uint2 PackRGBA16(float4 c)
{
	return f32tof16(c.rg) | (f32tof16(c.ba) << 16);
}

float linstep(float min, float max, float v)
{
	return saturate((v - min) / (max - min));
}

[numthreads(COMPUTE_SHADER_TILE_DIM, COMPUTE_SHADER_TILE_DIM, 1)]
void CS(
	uint3 groupId          : SV_GroupID,
	uint3 dispatchThreadId : SV_DispatchThreadID,
	uint groupIndex : SV_GroupIndex)
{
	uint2 globalCoords = dispatchThreadId.xy;
	float2 texUV = globalCoords / (float2)frameBufferSize.xy;
	float fViewSpaceZ = texDepth.SampleLevel(samPoint, texUV, 0.0f).x * farZ;

	//////////////////////////////////////////////////////////////////
	/////////	Per-tile light culling

	// Calc Z bounds for THIS PIXEL
	float minZ = farZ;
	float maxZ = nearZ;

	// Avoid shading skybox/background or otherwise invalid pixels
	bool validPixel = fViewSpaceZ >= nearZ && fViewSpaceZ <  farZ;
	[flatten] if (validPixel) 
	{
		minZ = min(minZ, fViewSpaceZ);
		maxZ = max(maxZ, fViewSpaceZ);
	}

	// Initialize shared memory light list and Z bounds
	if (groupIndex == 0) 
	{
		s_TileLightNum = 0;
		s_TileMinZ = 0x7F7FFFFF;      // Max float
		s_TileMaxZ = 0;
	}

	GroupMemoryBarrierWithGroupSync();

	// Calc Z bounds for THIS TILE
	if (maxZ >= minZ) 
	{
		InterlockedMin(s_TileMinZ, asuint(minZ));
		InterlockedMax(s_TileMaxZ, asuint(maxZ));
	}

	GroupMemoryBarrierWithGroupSync();

	// Do frustum culling
	float minTileZ = asfloat(s_TileMinZ);
	float maxTileZ = asfloat(s_TileMaxZ);
	float2 tileScale = float2(frameBufferSize.xy) * rcp(float(2 * COMPUTE_SHADER_TILE_DIM));
	float2 tileBias = tileScale - float2(groupId.xy);

	float4 c1 = float4(Projection._11 * tileScale.x, 0.0f, tileBias.x, 0.0f);
	float4 c2 = float4(0.0f, -Projection._22 * tileScale.y, tileBias.y, 0.0f);
	float4 c4 = float4(0.0f, 0.0f, 1.0f, 0.0f);

	// Derive frustum planes
	float4 frustumPlanes[6];
	// Sides
	frustumPlanes[0] = c4 - c1;
	frustumPlanes[1] = c4 + c1;
	frustumPlanes[2] = c4 - c2;
	frustumPlanes[3] = c4 + c2;
	// Near/far
	frustumPlanes[4] = float4(0.0f, 0.0f, 1.0f, -minTileZ);
	frustumPlanes[5] = float4(0.0f, 0.0f, -1.0f, maxTileZ);

	// Normalize frustum planes (near/far already normalized)
	[unroll] for (uint i = 0; i < 4; ++i) 
	{
		frustumPlanes[i] *= rcp(length(frustumPlanes[i].xyz));
	}

	for (uint iLightIndex = groupIndex; iLightIndex < TOTAL_LIGHT_NUM; iLightIndex += COMPUTE_SHADER_TILE_SIZE)
	{
		PointLight light = gLight[iLightIndex];
		bool bInFrustum = true;
		float4 vLightPosView = mul(float4(light.position, 1.0f), View);

		[unroll] for (uint iPlane = 0; iPlane < 6; ++iPlane)
		{
			float d = dot(frustumPlanes[iPlane], vLightPosView);
			bInFrustum = bInFrustum && (d >= -light.attenuationEnd);
		}

		[branch]if (bInFrustum)
		{
			// Append light to list
			// Compaction might be better if we expect a lot of lights
			uint listIndex;
			InterlockedAdd(s_TileLightNum, 1, listIndex);
			s_TileLightIndices[listIndex] = iLightIndex;
		}
	}

	GroupMemoryBarrierWithGroupSync();

	//////////////////////////////////////////////////////////////////
	/////////	Per-tile lighting
	float4 oColor = 0;

	// Only process onscreen pixels (tiles can span screen edges)
	if (all(globalCoords < frameBufferSize.xy))
	{
#if DEBUG_LIGHT_COUNT
		oColor.xyz = s_TileLightNum / 255.0f;
#else
		float3 vNormal = texNormal.SampleLevel(samPoint, texUV, 0.0f).xyz;
		vNormal = normalize(Expand(vNormal));

		// Reconstructint world position from view-space z
		float3 vWorldPos = ReconstructWorldPos(texDepth, samPoint, texUV);
		float3 vView = normalize(camPos - vWorldPos);

		float4 cDiffuse = saturate(dot(vNormal, lightDirection)) * lightColor;

		float4 specGloss = texSpec.SampleLevel(samPoint, texUV, 0.0f);
		float3 cSpecular = PhysicalBRDF(vNormal, vView, lightDirection, specGloss.w, specGloss.xyz);

		float4 albedo = texAlbedo.SampleLevel(samPoint, texUV, 0.0f);

		// Sun light
		float4 vShadow = ComputeShadow(vWorldPos, ShadowTransform, ShadowTransform2, ShadowTransform3, 
			shadowMapTexelSize, samShadow, texShadow1, texShadow2, texShadow3);

		oColor.xyz = albedo.xyz * cDiffuse.xyz + cSpecular;
		oColor *= vShadow;

		// Ambient
		float4 vAmbientDiff, vAmbientSpec;
		ComputeAmbientCube(vAmbientDiff, vAmbientSpec, texAmbientCubeDiff, texAmbientCubeSpec, texEnvBRDF, samLinear, vView, vNormal, specGloss.xyz, specGloss.w);

		oColor += vAmbientSpec + vAmbientDiff * albedo;

		// Point lights
		uint nPointLights = s_TileLightNum;
		for (uint i = 0; i < nPointLights; ++i)
		{
			PointLight light = gLight[s_TileLightIndices[i]];

			float3 vPosToLight = light.position - vWorldPos;
			float fDistance = length(vPosToLight);

			if (fDistance <= light.attenuationEnd)
			{
				vPosToLight *= rcp(fDistance);
				float fAtten = linstep(light.attenuationEnd, light.attenuationBegin, fDistance);
				cDiffuse.xyz = saturate(dot(vNormal, vPosToLight)) * light.color * fAtten;
				cSpecular = PhysicalBRDF(vNormal, vView, vPosToLight, specGloss.w, specGloss.xyz) * fAtten;
				oColor.xyz += albedo.xyz * cDiffuse.xyz + cSpecular;
			}
		}
		oColor.w = 1.0f;
#endif
	}

	gFramebuffer[globalCoords.y * frameBufferSize.x + globalCoords.x] = PackRGBA16(oColor);
}