/********************************************************************
	created:	2016/09/07 16:07
	filename	GLRenderSystem.h
	author:		maval

	purpose:	OpenGL render system.
*********************************************************************/
#ifndef GLRenderSystem_h__
#define GLRenderSystem_h__


#include "Prerequiestity.h"
#include "RenderSystem.h"


namespace Neo
{
	//----------------------------------------------------------------------------------------
	class GLRenderSystem : public RenderSystem
	{
	public:
		GLRenderSystem();
		~GLRenderSystem() {}

	public:
		virtual	void			SetRenderTarget(RenderTarget** pRTs, Texture* pTexDepth, uint32 nRenderTarget, bool bClearColor = true, bool bClearZ = true, const SColor& clearClr = SColor::BLACK);
		virtual void			SetViewport(const SViewport* vp);
		virtual void			SwapBuffer();

		virtual ConstantBuffer*	CreateConstantBuffer(uint32 nSize);
		virtual void			SetTexture(uint32 iStage, Texture* pTexture, uint32 usage);

		virtual void*			CreateBlendState(const SStateBlendDesc& desc);
		virtual void*			CreateRasterState(const SStateRasterDesc& desc);
		virtual void*			CreateDepthState(const SStateDepthDesc& desc);
		virtual	void			SetBlendState(SStateBlend* pState);
		virtual	void			SetRasterState(SStateRaster* pState);
		virtual	void			SetDepthState(SStateDepth* pState);
	};
}

#endif // GLRenderSystem_h__