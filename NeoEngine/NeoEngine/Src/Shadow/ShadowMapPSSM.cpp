#include "stdafx.h"
#include "ShadowMapPSSM.h"
#include "AABB.h"
#include "SceneManager.h"
#include "Scene.h"
#include "Camera.h"
#include "D3D11RenderTarget.h"
#include "D3D11RenderSystem.h"
#include "Utility.h"
#include "Entity.h"
#include "Terrain.h"
#include "SkinModel.h"
#include "ThirdPersonCharacter.h"
#include "Material.h"
#include "MaterialManager.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	ShadowMapPSSM::ShadowMapPSSM()
		: m_fSplitSchemeWeight(0.5f)
		, m_pRT_VSM_Blur(nullptr)
	{
		ZeroMemory(m_shadowMapCascades, sizeof(m_shadowMapCascades));
	}
	//------------------------------------------------------------------------------------
	ShadowMapPSSM::~ShadowMapPSSM()
	{
		for (int iCascade = 0; iCascade < CSM_CASCADE_NUM; ++iCascade)
		{
			SAFE_RELEASE(m_shadowMapCascades[iCascade]);
		}
		SAFE_RELEASE(m_pRT_VSM_Blur);
	}
	//------------------------------------------------------------------------------------
	void ShadowMapPSSM::SetShadowMapSize(uint32 nSize)
	{
		for (int iCascade = 0; iCascade < CSM_CASCADE_NUM; ++iCascade)
		{
			SAFE_RELEASE(m_shadowMapCascades[iCascade]);
		}
		SAFE_RELEASE(m_pRT_VSM_Blur);

		for (int iCascade = 0; iCascade < CSM_CASCADE_NUM; ++iCascade)
		{
			m_shadowMapCascades[iCascade] = new D3D11RenderTarget();
			m_shadowMapCascades[iCascade]->Init(nSize, nSize, ePF_G32R32F, true, false, false, true);
		}

		m_pRT_VSM_Blur = new D3D11RenderTarget();
		m_pRT_VSM_Blur->Init(nSize, nSize, ePF_G32R32F, false, false);
	}
	//------------------------------------------------------------------------------------
	void ShadowMapPSSM::Update(Camera& cam)
	{
		// Constructing a new camera because we will modify near/far plane
		Camera tmpCam = cam;

		_AdjustCameraNearFar(tmpCam);

		float fSplitPoints[CSM_CASCADE_NUM + 1] = { 0 };
		_CalculateSplitPositions(tmpCam, fSplitPoints);

		cBufferGlobal& cb = g_env.pRenderSystem->GetGlobalCB();
		cb.shadowSplitDists[0] = fSplitPoints[0];
		cb.shadowSplitDists[1] = fSplitPoints[1];
		cb.shadowSplitDists[2] = fSplitPoints[2];
		cb.shadowSplitDists[3] = fSplitPoints[3];

		// Calc light view matrix
		VEC3 vLightDir = g_env.pSceneMgr->GetSunLight().lightDir;
		VEC3 vInvLightDir = vLightDir;
		vInvLightDir.Neg();

		const AABB sceneAABB = g_env.pSceneMgr->GetCurScene()->GetSceneAABB();

		VEC3 vLightPos = vInvLightDir * sceneAABB.m_boundingRadius;

		MAT44 lightView = Common::BuildViewMatrix(vLightPos, VEC3::ZERO, VEC3::UNIT_Y);
		m_matLightView = lightView;

		// Calc a tight light frustum
		AABB tmpAABB = _CalculateSplitFrustumAABB(tmpCam, tmpCam.GetNearClip(), tmpCam.GetFarClip());
		tmpAABB.Transform(lightView);

		const VEC3 vAabbSize = tmpAABB.GetSize();
		
		MAT44 lightProj = Common::BuildOthroMatrix(vAabbSize.x, vAabbSize.y, 0, vAabbSize.z);

		for (int i = 0; i < CSM_CASCADE_NUM; ++i)
		{
			VEC3 vFrustumPoints[8];
			AABB frusumAABB = _CalculateSplitFrustumAABB(tmpCam, fSplitPoints[i], fSplitPoints[i + 1], vFrustumPoints);

			// find casters
			//std::vector<Entity*> castersInSplit = _FindCasters(tmpCam, frusumAABB, vLightDir);
			std::vector<Entity*> castersInSplit = _FindCasters2(tmpCam, fSplitPoints[i], fSplitPoints[i + 1]);
			
			m_shadowCasters[i] = castersInSplit;

			// calculate crop matrix
			MAT44 matCrop = _CalculateCropMatrix(tmpCam, g_env.pSceneMgr->GetCurScene()->GetEntityList(), castersInSplit, frusumAABB, lightView * lightProj);
			// combine
			m_matLightProj[i] = lightView * lightProj * matCrop;

			// calculate texture matrix
			float fTexOffset = 0.5f + (0.5f / g_env.pSceneMgr->GetShadowMapSize());

			MAT44 matTexBias(0.5f, 0.0f, 0.0f, 0.0f,
				0.0f, -0.5f, 0.0f, 0.0f,
				0.0f, 0.0f, 1.0f, 0.0f,
				fTexOffset, fTexOffset, 0.0f, 1.0f);

			m_matShadowTransform[i] = m_matLightProj[i] * matTexBias;
		}
	}
	//------------------------------------------------------------------------------------
	void ShadowMapPSSM::Render()
	{
		cBufferGlobal& cb = g_env.pRenderSystem->GetGlobalCB();

		// Render for each cascade
		for (int iCascade = 0; iCascade < CSM_CASCADE_NUM; ++iCascade)
		{
			cb.matView = MAT44::IDENTITY;
			cb.matProj = m_matLightProj[iCascade].Transpose();
			cb.matViewProj = cb.matProj * cb.matView;

			g_env.pRenderSystem->UpdateGlobalCBuffer();

			m_shadowMapCascades[iCascade]->BeforeRender(true, true, SColor::WHITE);
			g_env.pSceneMgr->GetCurScene()->RenderEntityList(m_shadowCasters[iCascade]);
			m_shadowMapCascades[iCascade]->AfterRender();

#if USE_VSM
			_VSMBlurPass(iCascade);
#endif

			m_shadowMapCascades[iCascade]->GenerateMips();
		}
	}
	//------------------------------------------------------------------------------------
	D3D11Texture* ShadowMapPSSM::GetShadowTexture(int i)
	{
#if USE_VSM
		return m_shadowMapCascades[i]->GetRenderTexture();
#else
		return m_shadowMapCascades[i]->GetDepthTexture();
#endif
	}
	//------------------------------------------------------------------------------------
	void ShadowMapPSSM::_AdjustCameraNearFar(Camera& cam)
	{
		auto& lstEntity = g_env.pSceneMgr->GetCurScene()->GetEntityList();

		// find the nearest and farthest points of given
		// scene objects in camera's view space
		//
		float fMaxZ = 0;
		float fMinZ = FLT_MAX;

		VEC3 vDir = cam.GetDirection();
		vDir.Normalize();

		// for each object
		for (uint32 i = 0; i < lstEntity.size(); i++)
		{
			VEC3 aabb_points[8];
			lstEntity[i]->GetWorldAABB().GetPoints(aabb_points);

			// for each point in AABB
			for (int j = 0; j < 8; j++)
			{
				// calculate z-coordinate distance to near plane of camera
				VEC3 vPointToCam = aabb_points[j] - cam.GetPos();
				float fZ = Common::DotProduct_Vec3_By_Vec3(vPointToCam, vDir);

				// find boundary values
				if (fZ > fMaxZ) fMaxZ = fZ;
				if (fZ < fMinZ) fMinZ = fZ;
			}
		}

		// Dont forget terrain
		if (g_env.pSceneMgr->GetTerrain())
		{
			VEC3 aabb_points[8];
			g_env.pSceneMgr->GetTerrain()->GetTerrainAABB().GetPoints(aabb_points);

			// for each point in AABB
			for (int j = 0; j < 8; j++)
			{
				// calculate z-coordinate distance to near plane of camera
				VEC3 vPointToCam = aabb_points[j] - cam.GetPos();
				float fZ = Common::DotProduct_Vec3_By_Vec3(vPointToCam, vDir);

				// find boundary values
				if (fZ > fMaxZ) fMaxZ = fZ;
				if (fZ < fMinZ) fMinZ = fZ;
			}
		}
		

		float fNewNear = Max(fMinZ, 1.0f);
		float fNewFar = Max(fMaxZ, fNewNear + 1.0f);
		
		cam.SetNearClip(fNewNear);
		cam.SetFarClip(fNewFar);
	}
	//------------------------------------------------------------------------------------
	void ShadowMapPSSM::_CalculateSplitPositions(Camera& cam, float* pDists)
	{
		const float fNear = cam.GetNearClip();
		const float fFar = cam.GetFarClip();

		// Practical split scheme:
		//
		// CLi = n*(f/n)^(i/numsplits)
		// CUi = n + (f-n)*(i/numsplits)
		// Ci = CLi*(lambda) + CUi*(1-lambda)
		//
		// lambda scales between logarithmic and uniform
		//

		for (int i = 0; i < CSM_CASCADE_NUM; i++)
		{
			float fIDM = i / (float)CSM_CASCADE_NUM;
			float fLog = fNear * powf(fFar / fNear, fIDM);
			float fUniform = fNear + (fFar - fNear) * fIDM;
			pDists[i] = fLog * m_fSplitSchemeWeight + fUniform * (1 - m_fSplitSchemeWeight);
		}

		// make sure border values are accurate
		pDists[0] = fNear;
		pDists[CSM_CASCADE_NUM] = fFar;
	}
	//------------------------------------------------------------------------------------
	AABB ShadowMapPSSM::_CalculateSplitFrustumAABB(Camera& cam, float fNear, float fFar, VEC3* oFrusumPoints)
	{
		VEC3 vZ = cam.GetDirection();
		vZ.Normalize();
		VEC3 vX = Common::CrossProduct_Vec3_By_Vec3(VEC3::UNIT_Y, vZ);
		vX.Normalize();
		VEC3 vY = Common::CrossProduct_Vec3_By_Vec3(vZ, vX);
		vY.Normalize();

		const float fAspect = cam.GetAspectRatio();
		const float fFov = cam.GetFov();
		const VEC3 vEyePt = cam.GetPos();

		float fNearPlaneHalfHeight = tanf(fFov * 0.5f) * fNear;
		float fNearPlaneHalfWidth = fNearPlaneHalfHeight * fAspect;

		float fFarPlaneHalfHeight = tanf(fFov * 0.5f) * fFar;
		float fFarPlaneHalfWidth = fFarPlaneHalfHeight * fAspect;

		VEC3 vNearPlaneCenter = vEyePt + vZ * fNear;
		VEC3 vFarPlaneCenter = vEyePt + vZ * fFar;

		VEC3 vFrustumPoints[8];
		vFrustumPoints[0] = vNearPlaneCenter - vX*fNearPlaneHalfWidth - vY*fNearPlaneHalfHeight;
		vFrustumPoints[1] = vNearPlaneCenter - vX*fNearPlaneHalfWidth + vY*fNearPlaneHalfHeight;
		vFrustumPoints[2] = vNearPlaneCenter + vX*fNearPlaneHalfWidth + vY*fNearPlaneHalfHeight;
		vFrustumPoints[3] = vNearPlaneCenter + vX*fNearPlaneHalfWidth - vY*fNearPlaneHalfHeight;

		vFrustumPoints[4] = vFarPlaneCenter - vX*fFarPlaneHalfWidth - vY*fFarPlaneHalfHeight;
		vFrustumPoints[5] = vFarPlaneCenter - vX*fFarPlaneHalfWidth + vY*fFarPlaneHalfHeight;
		vFrustumPoints[6] = vFarPlaneCenter + vX*fFarPlaneHalfWidth + vY*fFarPlaneHalfHeight;
		vFrustumPoints[7] = vFarPlaneCenter + vX*fFarPlaneHalfWidth - vY*fFarPlaneHalfHeight;

		if (oFrusumPoints)
		{
			memcpy(oFrusumPoints, vFrustumPoints, sizeof(VEC3) * 8);
		}

		AABB aabb;
		aabb.Merge(vFrustumPoints, 8);

		return aabb;
	}
	//------------------------------------------------------------------------------------
	std::vector<Entity*> ShadowMapPSSM::_FindCasters(Camera& cam, const AABB& frustumAABB, const VEC3& vSweepDir)
	{
		std::vector<Entity*> casters;
		auto& lstEntity = g_env.pSceneMgr->GetCurScene()->GetEntityList();
		casters.reserve(lstEntity.size());

		for (uint32 i = 0; i < lstEntity.size(); i++)
		{
			Entity *pObject = lstEntity[i];
			if (!pObject->GetCastShadow()) 
				continue;

			// do intersection test
			if (!SweepIntersectionTest(pObject->GetWorldAABB(), frustumAABB, vSweepDir))
				continue;

			casters.push_back(pObject);
		}
		return casters;
	}
	//------------------------------------------------------------------------------------
	// helper function for computing AABB in clip space
	static AABB CreateClipSpaceAABB(const AABB &bb, const MAT44 &mViewProj)
	{
		VEC3 vTransformed[8];
		bb.GetPoints(vTransformed);

		// for each point
		for (int i = 0; i < 8; i++)
		{
			// transform to projection space
			VEC4 tmp = Common::Transform_Vec3_By_Mat44(vTransformed[i], mViewProj, true);

			// compute clip-space coordinates
			vTransformed[i].x = tmp.x / tmp.w;
			vTransformed[i].y = tmp.y / tmp.w;
			vTransformed[i].z = tmp.z / tmp.w;
		}

		AABB result;
		result.Merge(vTransformed, 8);

		return result;
	}
	//------------------------------------------------------------------------------------
	// build a matrix for cropping light's projection
	// given vectors are in light's clip space
	static MAT44 BuildCropMatrix(const VEC3 &vMin, const VEC3 &vMax)
	{
		float fScaleX, fScaleY, fScaleZ;
		float fOffsetX, fOffsetY, fOffsetZ;

		fScaleX = 2.0f / (vMax.x - vMin.x);
		fScaleY = 2.0f / (vMax.y - vMin.y);

		fOffsetX = -0.5f * (vMax.x + vMin.x) * fScaleX;
		fOffsetY = -0.5f * (vMax.y + vMin.y) * fScaleY;

		fScaleZ = 1.0f / (vMax.z - vMin.z);
		fOffsetZ = -vMin.z * fScaleZ;

		// crop volume matrix
		return MAT44(fScaleX, 0.0f, 0.0f, 0.0f,
			0.0f, fScaleY, 0.0f, 0.0f,
			0.0f, 0.0f, fScaleZ, 0.0f,
			fOffsetX, fOffsetY, fOffsetZ, 1.0f);
	}
	//------------------------------------------------------------------------------------
	MAT44 ShadowMapPSSM::_CalculateCropMatrix(Camera& cam, const EntityList& receivers, const EntityList& castersInSplit, const AABB& frustumAABB, const MAT44& matLightViewProj)
	{
		// bounding box limits
		AABB receiversBB, splitBB, castersBB;

		// for each caster
		// find boundaries in light clip space
		for (unsigned int i = 0; i < castersInSplit.size(); i++)
			castersBB.Merge(CreateClipSpaceAABB(castersInSplit[i]->GetWorldAABB(), matLightViewProj));

		// for each receiver
		// find boundaries in light clip space
		for (unsigned int i = 0; i < receivers.size(); i++)
		{
			receiversBB.Merge(CreateClipSpaceAABB(receivers[i]->GetWorldAABB(), matLightViewProj));
		}

		if (g_env.pSceneMgr->GetTerrain())
		{
			receiversBB.Merge(g_env.pSceneMgr->GetTerrain()->GetTerrainAABB());
		}

		// find frustum boundaries in light clip space
		splitBB = CreateClipSpaceAABB(frustumAABB, matLightViewProj);

		// next we will merge the bounding boxes
		//
		AABB cropBB;
		cropBB.m_minCorner.x = Max(Max(castersBB.m_minCorner.x, receiversBB.m_minCorner.x), splitBB.m_minCorner.x);
		cropBB.m_maxCorner.x = Min(Min(castersBB.m_maxCorner.x, receiversBB.m_maxCorner.x), splitBB.m_maxCorner.x);
		cropBB.m_minCorner.y = Max(Max(castersBB.m_minCorner.y, receiversBB.m_minCorner.y), splitBB.m_minCorner.y);
		cropBB.m_maxCorner.y = Min(Min(castersBB.m_maxCorner.y, receiversBB.m_maxCorner.y), splitBB.m_maxCorner.y);
		cropBB.m_minCorner.z = castersBB.m_minCorner.z;
		cropBB.m_maxCorner.z = Min(receiversBB.m_maxCorner.z, splitBB.m_maxCorner.z);

		// when there are no casters, the merged
		// bounding box will be infinitely small
		if (castersInSplit.empty())
		{
			// it will cause artifacts when rendering receivers,
			// so just use the frustum bounding box instead
			cropBB.m_minCorner = splitBB.m_minCorner;
			cropBB.m_maxCorner = splitBB.m_maxCorner;
		}

		// finally, create matrix
		return BuildCropMatrix(cropBB.m_minCorner, cropBB.m_maxCorner);
	}
	//------------------------------------------------------------------------------------
	std::vector<Entity*> ShadowMapPSSM::_FindCasters2(Camera& cam, float fNear, float fFar)
	{
		std::vector<Entity*> casters;
		auto& lstEntity = g_env.pSceneMgr->GetCurScene()->GetEntityList();
		casters.reserve(lstEntity.size());

		for (uint32 i = 0; i < lstEntity.size(); i++)
		{
			Entity *pObject = lstEntity[i];
			if (!pObject->GetCastShadow())
				continue;

			// do intersection test
			if (!_IsAabbInsideFrustum(cam, fNear, fFar, pObject->GetWorldAABB()))
				continue;

			casters.push_back(pObject);
		}
		return casters;
	}
	//------------------------------------------------------------------------------------
	bool ShadowMapPSSM::_IsAabbInsideFrustum(Camera& cam, float fNear, float fFar, const AABB& aabb)
	{
		//物体坐标转换到相机空间进行裁减
		VEC4 pos(aabb.GetCenter(), 1.0f);
		Common::Transform_Vec4_By_Mat44(pos, pos, cam.GetViewMatrix());

		float half_h = tanf(cam.GetFov() * 0.5f) * fNear;
		float half_w = half_h * cam.GetAspectRatio();

		//检测前后面
		if (pos.z + aabb.m_boundingRadius <= fNear || pos.z - aabb.m_boundingRadius >= fFar)
			return false;

		//检测左右面
		float planeX = half_w * pos.z / fNear;
		if (pos.x - planeX >= aabb.m_boundingRadius ||
			pos.x + aabb.m_boundingRadius <= -planeX)
			return false;

		//检测上下面
		float planeY = half_h * pos.z / fNear;
		if (pos.y - planeY >= aabb.m_boundingRadius ||
			pos.y + aabb.m_boundingRadius <= -planeY)
			return false;

		return true;
	}
	//------------------------------------------------------------------------------------
	void ShadowMapPSSM::_VSMBlurPass(int iCascade)
	{
		static bool bInit = false;
		static Material* pMtlBlurX = nullptr;
		static Material* pMtlBlurY = nullptr;
		if (!bInit)
		{
			pMtlBlurX = MaterialManager::GetSingleton().NewMaterial("Mtl_VSM_BlurX");
			pMtlBlurY = MaterialManager::GetSingleton().NewMaterial("Mtl_VSM_BlurY");
			pMtlBlurX->AddRef();
			pMtlBlurY->AddRef();

			D3D11_SAMPLER_DESC samDesc = pMtlBlurX->GetSamplerStateDesc(0);
			samDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_POINT;
			samDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;
			samDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;
			pMtlBlurX->SetSamplerStateDesc(0, samDesc);
			pMtlBlurY->SetSamplerStateDesc(0, samDesc);

			pMtlBlurX->InitShader(GetResPath("GaussianBlur.hlsl"), eShader_PostProcess, 0, nullptr, "VS", "PS_BlurX");
			pMtlBlurY->InitShader(GetResPath("GaussianBlur.hlsl"), eShader_PostProcess, 0, nullptr, "VS", "PS_BlurY");

			bInit = true;
		}

		// BlurH
		pMtlBlurX->SetTexture(0, m_shadowMapCascades[iCascade]->GetRenderTexture());

		m_pRT_VSM_Blur->RenderScreenQuad(pMtlBlurX, false, false);

		// BlurV
		pMtlBlurY->SetTexture(0, m_pRT_VSM_Blur->GetRenderTexture());
	
		m_shadowMapCascades[iCascade]->RenderScreenQuad(pMtlBlurY, false, false);
	}

}