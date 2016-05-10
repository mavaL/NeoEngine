/********************************************************************
	created:	3:5:2014   21:57
	filename	ShadowMap.h
	author:		maval

	purpose:	Shadow map implement
*********************************************************************/
#ifndef ShadowMap_h__
#define ShadowMap_h__

#include "Prerequiestity.h"
#include "MathDef.h"

namespace Neo
{
	class PointListBody;

	class ShadowMap
	{
	public:
		ShadowMap();
		~ShadowMap();

		static const int	SHADOW_MAP_SIZE = 2048;

	public:
		void			Update();
		void			Render();
		D3D11Texture*	GetShadowTexture();
		const MAT44&	GetShadowTransform() const { return m_matShadowTransform; }
		void			SetDepthBias(int bias);

	private:
		VEC3			_GetLightSpaceViewDir(const MAT44& matLS, const PointListBody& bodyLVS);
		VEC3			_GetNearestCameraPoint_ws(const MAT44& matView, const PointListBody& bodyLVS);
		MAT44			_CalcLispPSMProjMatrix(const PointListBody& bodyB, const PointListBody& bodyLVS, const MAT44& matLS);
		MAT44			_BuildFrustumProjection(float left, float right, float top, float bottom, float fNear, float fFar);
		MAT44			_TransformToUnitCube(const MAT44& matLS, const PointListBody& bodyB);
		float			_CalcNOpt(const AABB& bodyB_ls, const PointListBody& bodyLVS, const MAT44& matLS);
		VEC3			_CalculateZ0_ls(const MAT44& matLS, const VEC3& e, float bodyB_zMax_ls);

	private:
		D3D11RenderTarget*	m_pRT_ShadowMap;
		MAT44				m_matLightView;
		MAT44				m_matLightProj;
		MAT44				m_matShadowTransform;
		D3D11_RASTERIZER_DESC	m_depthBiasRasterDesc;
	};
}

#endif // ShadowMap_h__
