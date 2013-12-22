/********************************************************************
	created:	5:12:2013   9:22
	filename: 	SceneManager.h
	author:		maval
	
	purpose:	≥°æ∞π‹¿Ì∆˜
*********************************************************************/
#ifndef SceneManager_h__
#define SceneManager_h__

#include "Prerequiestity.h"
#include "RenderObject.h"

namespace Neo
{
	class SceneManager
	{
	public:
		SceneManager();
		~SceneManager();

	public:
		void		CreateSky();
		void		CreateTerrain();
		void		CreateWater(float waterHeight = 0.0f);
		void		SetSolidRenderList(const RenderList& lst) { m_renderList_Solid = lst; }
		void		Update();
		void		ClearScene();
		void		RenderPipline(uint32 phaseFlag = eRenderPhase_All, Material* pMaterial = nullptr);
		RenderObject* LoadMesh(const STRING& filename);

		D3D11Texture* GetSSAOMap()	{ return m_pTexSsao; }
		void		EnableDebugRT(eDebugRT type);

	private:
		Terrain*		m_pTerrain;
		Water*			m_pWater;
		Sky*			m_pSky;
		RenderList		m_renderList_Solid;
		MeshLoader*		m_pMeshLoader;

		D3D11RenderSystem* m_pRenderSystem;
		D3D11RenderTarget* m_pRT_NormalDepth;	// View space scene n&z, use for SSAO
		D3D11Texture*	m_pTexNormalDepth;		
		Material*		m_pNormalDepthMaterial;

		D3D11RenderTarget* m_pRT_ssao;
		D3D11Texture*	m_pTexSsao;
		Material*		m_pSsaoMaterial;

		eDebugRT		m_debugRT;
		RenderObject*	m_pDebugRTMesh;
		Material*		m_pDebugRTMaterial;
	};
}

#endif // SceneManager_h__