/********************************************************************
	created:	2016/09/07 11:43
	filename	IRenderSystem.h
	author:		maval

	purpose:	Graphics api related.
*********************************************************************/
#ifndef RenderSystem_h__
#define RenderSystem_h__


#include "Prerequiestity.h"
#include "RenderState.h"
#include "Color.h"
#include "Buffer.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	class RenderSystem
	{
	public:
		virtual ~RenderSystem() {}

	public:
		virtual	void			SetRenderTarget(RenderTarget** pRTs, Texture* pTexDepth, uint32 nRenderTarget, bool bClearColor = true, bool bClearZ = true, const SColor& clearClr = SColor::BLACK) = 0;
		virtual void			SetViewport(const SViewport* vp) = 0;
		virtual void			SwapBuffer() = 0;
		virtual Texture*		GetDepthBuffer() = 0;

		virtual ConstantBuffer*	CreateConstantBuffer(uint32 nSize, uint32 nSlot) = 0;
		virtual VertexBuffer*	CreateVertexBuffer(uint32 nSize, uint32 nStride, const void* pData, uint32 nUsage) = 0;
		virtual IndexBuffer*	CreateIndexBuffer(uint32 nSize, const void* pData, uint32 nUsage) = 0;
		virtual void			SetTexture(uint32 iStage, Texture* pTexture, uint32 usage = 0) = 0;
		virtual SamplerState*	CreateSamplerState(const SSamplerDesc& desc) = 0;
		virtual void			SetSamplerState(uint32 iStage, SamplerState* pSampler, bool bVS = false, bool bGS = false, bool bTessellation = false) = 0;
		virtual Shader*			CreateShader(eShaderType type, eRenderPhase phase, const STRING& filename, uint32 flags, const STRING& strEntryFunc, eVertexType vertType, const std::vector<D3D_SHADER_MACRO>& vecMacros) = 0;
		virtual RenderTarget*	CreateRenderTarget(uint32 nWidth, uint32 nHeight, uint32 nDepth, ePixelFormat format, uint32 usage) = 0;
		virtual void			DrawIndexed(ePrimitive type, IndexBuffer* indexBuf, uint32 nIndexCnt, uint32 nStartIndexLocation, uint32 nBaseIndexLocation, uint32 nInstanced = 0) = 0;
		virtual void			Draw(uint32 nVertCnt, uint32 nStartVertLocation) = 0;
		virtual void			SetVertexBuffer(VertexBuffer* vertBuf, uint32 iStream, uint32 nOffset) = 0;

		virtual Texture*		LoadTexture(const STRING& filename, eTextureType type = eTextureType_2D, uint32 usage = 0, bool bSRGB = false) = 0;
		virtual Texture*		CreateTextureArray(const StringVector& vecTexNames, bool bSRGB = false) = 0;
		virtual Texture*		CreateTextureManual(uint32 nWidth, uint32 nHeight, const char* pTexData, ePixelFormat format, uint32 usage, bool bMipMap) = 0;

		virtual void*			CreateBlendState(const SStateBlendDesc& desc) = 0;
		virtual void*			CreateRasterState(const SStateRasterDesc& desc) = 0;
		virtual void*			CreateDepthState(const SStateDepthDesc& desc) = 0;
		virtual	void			ApplyBlendState(SStateBlend* pState) = 0;
		virtual	void			ApplyRasterState(SStateRaster* pState) = 0;
		virtual	void			ApplyDepthState(SStateDepth* pState) = 0;
	};
}

#endif // RenderSystem_h__
