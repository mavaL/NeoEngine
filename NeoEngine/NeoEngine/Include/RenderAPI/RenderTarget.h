/********************************************************************
	created:	2016/09/07 11:56
	filename	IRenderTarget.h
	author:		maval

	purpose:	Render target abstract class.
*********************************************************************/
#ifndef RenderTarget_h__
#define RenderTarget_h__


#include "Prerequiestity.h"
#include "IRefCount.h"
#include "Color.h"
#include "RenderDefine.h"

namespace Neo
{
	class RenderTarget : public IRefCount
	{
	public:
		RenderTarget();
		virtual ~RenderTarget();

		static Entity*		m_pQuadEntity;
		static Mesh*		m_pQuadMesh;

	public:
		void				BeforeRender(bool bClearColor, bool bClearZ, const SColor& clearColor = SColor::BLACK, float fz = 1.0f);
		void				AfterRender();
		void				SetActiveSlice(uint32 i);
		void*				GetRTV();
		Texture*			GetRenderTexture()	{ return m_pRenderTexture; }
		Texture*			GetDepthTexture()	{ return m_pDepthStencil; }
		void				RenderScreenQuad(Material* pMaterial, bool bClearColor, bool bClearZ, const SColor& clearColor = SColor::BLACK, float fz = 1.0f);

	protected:
		RenderSystem*		m_pRenderSystem;
		Texture*			m_pRenderTexture;
		Texture*			m_pDepthStencil;
		SViewport			m_viewport;
		uint32				m_nUsage;
		uint32				m_iActiveSlice;
	};
}

#endif // RenderTarget_h__
