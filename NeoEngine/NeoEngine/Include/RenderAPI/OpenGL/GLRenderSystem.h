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
#include "opengl/GLShader.h"


namespace Neo
{
	GLenum	GetGLBlendFactor(eBlendFactor Factor);
	GLenum	GetGLCompareFunc(eCompareFunc func);
	GLenum	GetGLTexAddressMode(eTextureAddressMode mode);
	GLenum	GetGLFilterType(eSamplerFilter filter);

	//----------------------------------------------------------------------------------------
	class GLRenderSystem : public RenderSystem
	{
	public:
		GLRenderSystem();
		~GLRenderSystem();

	public:
		bool					Init(uint32 wndWidth, uint32 wndHeight, HWND hwnd);
		GLBoundShaderState&		GetCurBoundShaderState()	{ return m_curBoundShaderState; }

	public:
		virtual	void			SetRenderTarget(RenderTarget** pRTs, Texture* pTexDepth, uint32 nRenderTarget, bool bClearColor = true, bool bClearZ = true, const SColor& clearClr = SColor::BLACK);
		virtual void*			CreateBlendState(const SStateBlendDesc& desc)	{ return nullptr; }
		virtual void*			CreateRasterState(const SStateRasterDesc& desc)	{ return nullptr; }
		virtual void*			CreateDepthState(const SStateDepthDesc& desc)	{ return nullptr; }
		virtual	void			ApplyBlendState(SStateBlend* pState);
		virtual	void			ApplyRasterState(SStateRaster* pState);
		virtual	void			ApplyDepthState(SStateDepth* pState);
		virtual void			SetViewport(const SViewport* vp);
		virtual void			SwapBuffer();
		virtual ConstantBuffer*	CreateConstantBuffer(uint32 nSize, uint32 nSlot);
		virtual void			SetTexture(uint32 iStage, Texture* pTexture, uint32 usage = 0);
		virtual SamplerState*	CreateSamplerState(const SSamplerDesc& desc);
		virtual void			SetSamplerState(uint32 iStage, SamplerState* pSampler, bool bVS = false, bool bGS = false, bool bTessellation = false);
		virtual Shader*			CreateShader(eShaderType type, eRenderPhase phase, const STRING& filename, uint32 flags, const STRING& strEntryFunc, eVertexType vertType, const std::vector<D3D_SHADER_MACRO>& vecMacros);
		virtual Texture*		LoadTexture(const STRING& filename, eTextureType type = eTextureType_2D, uint32 usage = 0, bool bSRGB = false);
		virtual RenderTarget*	CreateRenderTarget(uint32 nWidth, uint32 nHeight, uint32 nDepth, ePixelFormat format, uint32 usage);
		virtual Texture*		GetDepthBuffer();
		virtual Texture*		CreateTextureArray(const StringVector& vecTexNames, bool bSRGB = false);
		virtual Texture*		CreateTextureManual(uint32 nWidth, uint32 nHeight, const char* pTexData, ePixelFormat format, uint32 usage, bool bMipMap);
		virtual void			DrawIndexed(ePrimitive type, IndexBuffer* indexBuf, uint32 nIndexCnt, uint32 nStartIndexLocation, uint32 nBaseIndexLocation, uint32 nInstanced = 0);
		virtual void			Draw(uint32 nVertCnt, uint32 nStartVertLocation);
		virtual void			SetVertexBuffer(VertexBuffer* vertBuf, uint32 iStream, uint32 nOffset);
		virtual VertexBuffer*	CreateVertexBuffer(uint32 nSize, uint32 nStride, const void* pData, uint32 nUsage);
		virtual IndexBuffer*	CreateIndexBuffer(uint32 nSize, const void* pData, uint32 nUsage);

	private:
		void					_LoadShaderXml(const STRING& strShader);
		void					_LoadShaderFileItem(GLShaderItem* pItem, TiXmlElement* pNode);
		GLBoundShaderState*		_FindOrCreateBoundShaderState();

	private:
		GLRenderTarget*									m_pBackBuffer;
		HDC										m_deviceContext;
		HGLRC									m_renderContext;
		std::vector<GLVertexBuffer*>			m_vecCurVBOs;
		std::unordered_map<STRING, GLShaderXml> m_mapShaderFiles;
		GLBoundShaderState						m_curBoundShaderState;
		std::vector<GLBoundShaderState*>		m_vecBoundShaderStates;
	};

	extern GLRenderSystem*		g_RenderSys;
}

#endif // GLRenderSystem_h__