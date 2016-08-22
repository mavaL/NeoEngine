/********************************************************************
	created:	2016/08/15 15:30
	filename	ShadowMapPSSM.h
	author:		maval

	purpose:	Parallel-Split Shadow Maps + 
				Variance Shadow Maps

	references:	http://www.punkuser.net/vsm/vsm_paper.pdf
*********************************************************************/
#ifndef ShadowMapPSSM_h__
#define ShadowMapPSSM_h__


#include "Prerequiestity.h"
#include "MathDef.h"

namespace Neo
{
	class ShadowMapPSSM
	{
	public:
		ShadowMapPSSM();
		~ShadowMapPSSM();

	public:
		void				Update(Camera& cam);
		void				Render();
		D3D11Texture*		GetShadowTexture(int i);
		const MAT44&		GetShadowTransform(int i) { return m_matShadowTransform[i]; }
		void				SetSplitSchemeWeight(float fWeight) { m_fSplitSchemeWeight = fWeight; }
		uint32				GetShadowCasterNum(uint32 iCascade) const { return m_shadowCasters[iCascade].size(); }

	private:
		void				_AdjustCameraNearFar(Camera& cam);
		void				_CalculateSplitPositions(Camera& cam, float* pDists);
		AABB				_CalculateSplitFrustumAABB(Camera& cam, float fNear, float fFar, VEC3* oFrusumPoints = nullptr);
		std::vector<Entity*>_FindCasters(Camera& cam, const AABB& frustumAABB, const VEC3& vSweepDir);

		// A testing version which find shadow casters only based on split view frustum.
		std::vector<Entity*>_FindCasters2(Camera& cam, float fNear, float fFar);

		bool				_IsAabbInsideFrustum(Camera& cam, float fNear, float fFar, const AABB& aabb);
		MAT44				_CalculateCropMatrix(Camera& cam, const EntityList& receivers, const EntityList& castersInSplit, const AABB& frustumAABB, const MAT44& matLightViewProj);
		void				_VSMBlurPass(int iCascade);

	private:
		MAT44				m_matLightProj[CSM_CASCADE_NUM];
		MAT44				m_matShadowTransform[CSM_CASCADE_NUM];
		D3D11RenderTarget*	m_shadowMapCascades[CSM_CASCADE_NUM];
		EntityList			m_shadowCasters[CSM_CASCADE_NUM];
		D3D11RenderTarget*	m_pRT_VSM_Blur;
		float				m_fSplitSchemeWeight;	// 0 = use fully uniform split, 1 = use fully log split
	};
}

#endif // ShadowMapPSSM_h__