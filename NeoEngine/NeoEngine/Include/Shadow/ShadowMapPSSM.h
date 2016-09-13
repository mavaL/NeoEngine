/********************************************************************
	created:	2016/08/15 15:30
	filename	ShadowMapPSSM.h
	author:		maval

	purpose:	Parallel-Split Shadow Maps with soft shadow

	references:	1. http://www.punkuser.net/vsm/vsm_paper.pdf
				2. "Summed-Area Variance Shadow Maps"
				3. SIGGRAPH 2009 - Lighting Research at Bungie
				4. "Exponential Shadow Maps"
				5. http://developer.download.nvidia.com/presentations/2008/GDC/GDC08_SoftShadowMapping.pdf

	history:	1. 2016/8/22 vsm added. Works well on scene4, VERY BAD on scene3...
				2. 2016/8/23 Shit vsm requires rendering shadows receivers.. Let's change to Exponential Shadow Maps..
*********************************************************************/
#ifndef ShadowMapPSSM_h__
#define ShadowMapPSSM_h__


#include "Prerequiestity.h"
#include "MathDef.h"
#include "RenderDefine.h"

namespace Neo
{
	class ShadowMapPSSM
	{
	public:
		ShadowMapPSSM();
		~ShadowMapPSSM();

	public:
		void				SetShadowMapSize(uint32 nSize);
		void				Update(Camera& cam);
		void				Render();
		Texture*			GetShadowTexture(int i);
		const MAT44&		GetShadowTransform(int i) { return m_matShadowTransform[i]; }
		const MAT44&		GetLightViewMatrix() { return m_matLightView; }
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
		MAT44				m_matLightView;
		MAT44				m_matLightProj[CSM_CASCADE_NUM];
		MAT44				m_matShadowTransform[CSM_CASCADE_NUM];
		RenderTarget*		m_shadowMapCascades[CSM_CASCADE_NUM];
		EntityList			m_shadowCasters[CSM_CASCADE_NUM];
		RenderTarget*		m_pRT_ESM_Blur;
		float				m_fSplitSchemeWeight;	// 0 = use fully uniform split, 1 = use fully log split
	};
}

#endif // ShadowMapPSSM_h__