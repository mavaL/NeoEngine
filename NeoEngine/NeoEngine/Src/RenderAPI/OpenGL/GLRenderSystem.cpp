#include "stdafx.h"
#include "opengl/GLRenderSystem.h"
#include "opengl/GLAPI.h"
#include "opengl/GLTexture.h"
#include "opengl/GLBuffer.h"
#include "opengl/GLRenderTarget.h"
#include "opengl/GLShader.h"
#include "Renderer.h"

namespace Neo
{
	GLRenderSystem*		g_RenderSys = nullptr;

	//------------------------------------------------------------------------------------
	GLRenderSystem::GLRenderSystem()
		: m_pBackBuffer(nullptr)
		, m_deviceContext(nullptr)
		, m_renderContext(nullptr)
	{

	}
	//------------------------------------------------------------------------------------
	GLRenderSystem::~GLRenderSystem()
	{

	}
	//------------------------------------------------------------------------------------
	bool GLRenderSystem::Init(uint32 wndWidth, uint32 wndHeight, HWND hwnd)
	{
		g_RenderSys = this;

		typedef HGLRC(WINAPI *wglCreateContextFUNC)(HDC hdc);
		typedef BOOL(WINAPI *wglDeleteContextFUNC)(HGLRC hglrc);
		typedef BOOL(WINAPI *wglMakeCurrentFUNC)(HDC hdc, HGLRC hglrc);
		typedef BOOL(APIENTRY *PFNWGLSWAPINTERVALFARPROC)(int);

		HMODULE mod_opengl32_;
		wglCreateContextFUNC DynamicWglCreateContext_;
		wglMakeCurrentFUNC DynamicWglMakeCurrent_;

		mod_opengl32_ = ::LoadLibraryEx(TEXT("opengl32.dll"), nullptr, 0);
		DynamicWglCreateContext_ = (wglCreateContextFUNC)::GetProcAddress(mod_opengl32_, "wglCreateContext");
		DynamicWglMakeCurrent_ = (wglMakeCurrentFUNC)::GetProcAddress(mod_opengl32_, "wglMakeCurrent");

		m_deviceContext = ::GetDC(hwnd);
		m_renderContext = DynamicWglCreateContext_(m_deviceContext);
		DynamicWglMakeCurrent_(m_deviceContext, m_renderContext);

		glloader_init();

		if (!glloader_is_supported("GL_VERSION_4_3"))
		{
			MessageBoxA(nullptr, "Your video card is not supporting OpenGL 4.3!", "Error", MB_OK);
			return false;
		}

		// Turn off vsync
		wglSwapIntervalEXT(0);

		OpenGLAPI::FrontFace(GL_CW);

		m_pBackBuffer = new GLRenderTarget(wndWidth, wndHeight, ePF_A8R8G8B8, eRenderTargetUsage_OwnDepthTex);
		m_pBackBuffer->InitFBO(&m_pBackBuffer, 1, m_pBackBuffer->GetDepthTexture());
		m_pBackBuffer->InitFBO(&m_pBackBuffer, 1, nullptr);

		RenderTarget* pRT = m_pBackBuffer;
		SetRenderTarget(&pRT, m_pBackBuffer->GetDepthTexture(), 1);

		return true;
	}
	//------------------------------------------------------------------------------------
	GLenum GetGLBlendFactor(eBlendFactor Factor)
	{
		switch (Factor)
		{
		case eBlend_ZERO:
			return GL_ZERO;
			break;
		case eBlend_ONE:
			return GL_ONE;
			break;
		case eBlend_SRC_COLOR:
			return GL_SRC_COLOR;
			break;
		case eBlend_INV_SRC_COLOR:
			return GL_ONE_MINUS_SRC_COLOR;
			break;
		case eBlend_SRC_ALPHA:
			return GL_SRC_ALPHA;
			break;
		case eBlend_INV_SRC_ALPHA:
			return GL_ONE_MINUS_SRC_ALPHA;
			break;
		case eBlend_DEST_ALPHA:
			return GL_DST_ALPHA;
			break;
		case eBlend_INV_DEST_ALPHA:
			return GL_ONE_MINUS_DST_ALPHA;
			break;
		case eBlend_DEST_COLOR:
			return GL_DST_COLOR;
			break;
		case eBlend_INV_DEST_COLOR:
			return GL_ONE_MINUS_DST_COLOR;
			break;
		default:
			_AST(0);
			return 0;
			break;
		}
	}
	//------------------------------------------------------------------------------------
	GLenum	GetGLCompareFunc(eCompareFunc func)
	{
		GLenum glFunc = GL_LESS;

		switch (func)
		{
		case eCompareFunc_LESS:
			glFunc = GL_LESS;
			break;
		case eCompareFunc_LESS_EQUAL:
			glFunc = GL_LEQUAL;
			break;
		case eCompareFunc_GREATER:
			glFunc = GL_GREATER;
			break;
		case eCompareFunc_GREATER_EQUAL:
			glFunc = GL_GEQUAL;
			break;
		case eCompareFunc_EQUAL:
			glFunc = GL_EQUAL;
			break;
		case eCompareFunc_NOT_EQUAL:
			glFunc = GL_NOTEQUAL;
			break;
		case eCompareFunc_NEVER:
			glFunc = GL_NEVER;
			break;
		case eCompareFunc_ALWAYS:
			glFunc = GL_ALWAYS;
			break;
		default:
			_AST(0);
			break;
		}

		return glFunc;
	}
	//------------------------------------------------------------------------------------
	GLenum	GetGLTexAddressMode(eTextureAddressMode mode)
	{
		uint32 GLAddrMode = 0;
		switch (mode)
		{
		case eTextureAddressMode_WRAP:
			GLAddrMode = GL_REPEAT;
			break;
		case eTextureAddressMode_CLAMP:
			GLAddrMode = GL_CLAMP_TO_EDGE;
			break;
		case eTextureAddressMode_BORDER:
			GLAddrMode = GL_CLAMP_TO_BORDER;
			break;
		default:
			_AST(0);
			break;
		}
		return GLAddrMode;
	}
	//------------------------------------------------------------------------------------
	GLenum	GetGLFilterType(eSamplerFilter filter)
	{
		uint32 GLFilterMode = 0;
		switch (filter)
		{
		case SF_MIN_MAG_MIP_POINT:
		case SF_COMPARISON_MIN_MAG_MIP_POINT:
			GLFilterMode = GL_NEAREST;
			break;
		case SF_MIN_MAG_MIP_LINEAR:
			GLFilterMode = GL_LINEAR_MIPMAP_LINEAR;
			break;
		default:
			_AST(0);
			break;
		}
		return GLFilterMode;
	}
	//------------------------------------------------------------------------------------
	void GLRenderSystem::SetRenderTarget(RenderTarget** pRTs, Texture* pTexDepth, uint32 nRenderTarget, bool bClearColor /*= true*/, bool bClearZ /*= true*/, const SColor& clearClr /*= SColor::BLACK*/)
	{
		if (pRTs)
		{
			GLRenderTarget* pGlRTs = (GLRenderTarget*)pRTs[0];
			GLFBO* pFBO = pGlRTs->GetFBO(pTexDepth != nullptr);

			if (!pFBO)
			{
				pGlRTs->InitFBO((GLRenderTarget**)pRTs, nRenderTarget, pTexDepth);
			}
			OpenGLAPI::BindFramebuffer(GL_FRAMEBUFFER, pGlRTs->GetFBO(pTexDepth != nullptr)->m_id);
		} 
		else
		{
			OpenGLAPI::BindFramebuffer(GL_FRAMEBUFFER, m_pBackBuffer->GetFBO(pTexDepth != nullptr)->m_id);
		}

		GLbitfield glClearFlag = 0;
		if (bClearColor)
		{
			OpenGLAPI::ClearColor(clearClr.r, clearClr.g, clearClr.b, clearClr.a);
			glClearFlag |= GL_COLOR_BUFFER_BIT;
		}

		if (bClearZ)
		{
			OpenGLAPI::ClearDepth(1);
			glClearFlag |= GL_DEPTH_BUFFER_BIT;
		}

		if (glClearFlag != 0)
		{
			OpenGLAPI::Clear(glClearFlag);
		}
	}
	//------------------------------------------------------------------------------------
	RenderTarget* GLRenderSystem::CreateRenderTarget(uint32 nWidth, uint32 nHeight, uint32 nDepth, ePixelFormat format, uint32 usage)
	{
		return new GLRenderTarget(nWidth, nHeight, format, usage);
	}
	//------------------------------------------------------------------------------------
	Texture* GLRenderSystem::LoadTexture(const STRING& filename, eTextureType type /*= eTextureType_2D*/, uint32 usage /*= 0*/, bool bSRGB /*= false*/)
	{
		return new GLTexture(filename, type, usage, bSRGB);
	}
	//------------------------------------------------------------------------------------
	void GLRenderSystem::ApplyBlendState(SStateBlend* pState)
	{
		OpenGLAPI::EnableIf(GL_BLEND, pState->Desc.RenderTarget[0].BlendEnable);

		_AST(!pState->Desc.IndependentBlendEnable && "Not implemented..");

		OpenGLAPI::BlendFunc(GetGLBlendFactor(pState->Desc.RenderTarget[0].SrcBlend), GetGLBlendFactor(pState->Desc.RenderTarget[0].DestBlend));

		GLboolean r = pState->Desc.RenderTarget[0].RenderTargetWriteMask & 0x1;
		GLboolean g = pState->Desc.RenderTarget[0].RenderTargetWriteMask & 0x2;
		GLboolean b = pState->Desc.RenderTarget[0].RenderTargetWriteMask & 0x4;
		GLboolean a = pState->Desc.RenderTarget[0].RenderTargetWriteMask & 0x8;
		OpenGLAPI::ColorMask(r, g, b, a);
	}
	//------------------------------------------------------------------------------------
	void GLRenderSystem::ApplyRasterState(SStateRaster* pState)
	{
		if (pState->Desc.CullMode == eCull_NONE)
		{
			OpenGLAPI::Disable(GL_CULL_FACE);
		} 
		else
		{
			OpenGLAPI::Enable(GL_CULL_FACE);

			if (pState->Desc.CullMode == eCull_FRONT)
			{
				OpenGLAPI::CullMode(GL_FRONT);
			} 
			else
			{
				OpenGLAPI::CullMode(GL_BACK);
			}
		}
	}
	//------------------------------------------------------------------------------------
	void GLRenderSystem::ApplyDepthState(SStateDepth* pState)
	{
		OpenGLAPI::EnableIf(GL_DEPTH_TEST, pState->Desc.DepthEnable);
		
		OpenGLAPI::DepthMask(pState->Desc.DepthWriteMask);

		OpenGLAPI::DepthFunction(GetGLCompareFunc(pState->Desc.DepthFunc));
	}
	//------------------------------------------------------------------------------------
	void GLRenderSystem::SetViewport(const SViewport* vp)
	{
		OpenGLAPI::SetViewport((GLint)vp->TopLeftX, (GLint)vp->TopLeftY, (GLsizei)vp->Width, (GLsizei)vp->Height);
		OpenGLAPI::DepthRange(vp->MinDepth, vp->MaxDepth);
	}
	//------------------------------------------------------------------------------------
	void GLRenderSystem::SwapBuffer()
	{
		OpenGLAPI::BindFramebuffer(GL_READ_FRAMEBUFFER, m_pBackBuffer->GetFBO(false)->m_id);
		OpenGLAPI::BindFramebuffer(GL_DRAW_FRAMEBUFFER, 0);

		const uint32 nSrcW = m_pBackBuffer->GetRenderTexture()->GetWidth();
		const uint32 nSrcH = m_pBackBuffer->GetRenderTexture()->GetHeight();
		const uint32 nDestW = g_env.pRenderer->GetWndWidth();
		const uint32 nDestH = g_env.pRenderer->GetWndHeight();

		OpenGLAPI::BlitFramebuffer(0, 0, nSrcW, nSrcH, 0, 0, nDestW, nDestH, GL_COLOR_BUFFER_BIT, GL_LINEAR);

		GLCHECK(SwapBuffers(m_deviceContext));
	}
	//------------------------------------------------------------------------------------
	VertexBuffer* GLRenderSystem::CreateVertexBuffer(uint32 nSize, uint32 nStride, const void* pData, uint32 nUsage)
	{
		GLBuffer* pBuf = new GLBuffer(GL_ARRAY_BUFFER, nStride, nSize, nUsage, pData);

		return new GLVertexBuffer(pBuf, nSize, nUsage, pData);
	}
	//------------------------------------------------------------------------------------
	IndexBuffer* GLRenderSystem::CreateIndexBuffer(uint32 nSize, const void* pData, uint32 nUsage)
	{
		GLBuffer* pBuf = new GLBuffer(GL_ELEMENT_ARRAY_BUFFER, 0, nSize, nUsage, pData);

		return new GLIndexBuffer(pBuf, nSize, nUsage, pData);
	}
	//------------------------------------------------------------------------------------
	void GLRenderSystem::SetVertexBuffer(VertexBuffer* vertBuf, uint32 iStream, uint32 nOffset)
	{
		GLVertexBuffer* pVB = (GLVertexBuffer*)vertBuf;
		m_vecCurVBOs.push_back(pVB);
	}
	//------------------------------------------------------------------------------------
	void GLRenderSystem::DrawIndexed(ePrimitive type, IndexBuffer* indexBuf, uint32 nIndexCnt, uint32 nStartIndexLocation, uint32 nBaseIndexLocation)
	{
		GLBoundShaderState* pShaderState = _FindOrCreateBoundShaderState();

		m_vecCurVBOs[0]->GenVAO(m_vecCurVBOs, (GLIndexBuffer*)indexBuf);
		m_vecCurVBOs[0]->ActivateVAO();

		GLenum glPrimType = GL_TRIANGLES;
		switch (type)
		{
		case ePrimitive_TriangleList: glPrimType = GL_TRIANGLES; break;
		default: _AST(0);
		}

		OpenGLAPI::DrawElements(glPrimType, nIndexCnt, GL_UNSIGNED_INT, nullptr);

		m_vecCurVBOs.clear();
		m_curBoundShaderState.Reset();
	}
	//------------------------------------------------------------------------------------
	void GLRenderSystem::Draw(uint32 nVertCnt, uint32 nStartVertLocation)
	{
		GLBoundShaderState* pShaderState = _FindOrCreateBoundShaderState();

		m_vecCurVBOs[0]->GenVAO(m_vecCurVBOs, nullptr);
		m_vecCurVBOs[0]->ActivateVAO();

		OpenGLAPI::DrawArrays(GL_TRIANGLES, nStartVertLocation, nVertCnt);

		m_vecCurVBOs.clear();
		m_curBoundShaderState.Reset();
	}
	//------------------------------------------------------------------------------------
	void GLRenderSystem::SetTexture(uint32 iStage, Texture* pTexture, uint32 usage /*= 0*/)
	{
		OpenGLAPI::ActiveTexture(GL_TEXTURE0 + iStage);

		if (pTexture)
		{
			GLenum texType = GL_TEXTURE_2D;
			switch (pTexture->GetTextureType())
			{
			case eTextureType_2D: texType = GL_TEXTURE_2D; break;
			case eTextureType_CubeMap: texType = GL_TEXTURE_CUBE_MAP; break;
			default: _AST(0);
			}

			OpenGLAPI::BindTexture(texType, (GLuint)pTexture->GetSRV());
		} 
		else
		{
			// ?
			OpenGLAPI::BindTexture(GL_TEXTURE_2D, 0);
			OpenGLAPI::BindTexture(GL_TEXTURE_3D, 0);
			OpenGLAPI::BindTexture(GL_TEXTURE_CUBE_MAP, 0);
			OpenGLAPI::BindTexture(GL_TEXTURE_2D_ARRAY, 0);
		}
	}
	//------------------------------------------------------------------------------------
	SamplerState* GLRenderSystem::CreateSamplerState(const SSamplerDesc& desc)
	{
		return new GLSamplerState(desc);
	}
	//------------------------------------------------------------------------------------
	void GLRenderSystem::SetSamplerState(uint32 iStage, SamplerState* pSampler, bool bVS /*= false*/, bool bGS /*= false*/, bool bTessellation /*= false*/)
	{
		if (pSampler)
		{
			pSampler->Apply(iStage, bVS, bGS, bTessellation);
		} 
		else
		{
			OpenGLAPI::BindSampler(iStage, 0);
		}
	}
	//------------------------------------------------------------------------------------
	Shader* GLRenderSystem::CreateShader(eShaderType type, eRenderPhase phase, const STRING& strShader, uint32 flags, const STRING& strEntryFunc, eVertexType vertType, const std::vector<D3D_SHADER_MACRO>& vecMacros)
	{
		GLShader* pShader = nullptr;
		auto iter = m_mapShaderFiles.find(strShader);
		GLShaderXml* pShaderXml = nullptr;

		if (iter != m_mapShaderFiles.end())
		{
			pShaderXml = &(iter->second);
		} 
		else
		{
			_LoadShaderXml(strShader);
			pShaderXml = &m_mapShaderFiles[strShader];
		}

		auto itPhase = pShaderXml->m_mapItems.find(phase);
		if (itPhase == pShaderXml->m_mapItems.end())
		{
			return nullptr;
		}

		switch (type)
		{
		case eShaderType_VS: pShader = new GLVertexShader(itPhase->second.vs.c_str(), flags, vecMacros); break;
		case eShaderType_PS: pShader = new GLPixelShader(itPhase->second.ps.c_str(), flags, vecMacros); break;
		case eShaderType_GS: 
		case eShaderType_CS: 
		case eShaderType_HS: 
		case eShaderType_DS: 
		default: _AST(0);
		}

		return pShader;
	}
	//------------------------------------------------------------------------------------
	ConstantBuffer* GLRenderSystem::CreateConstantBuffer(uint32 nSize, uint32 nSlot)
	{
		GLBuffer* pBuf = new GLBuffer(GL_UNIFORM_BUFFER, 0, nSize, eBufferUsage_Dynamic);
		return new GLConstantBuffer(pBuf, nSlot);
	}
	//------------------------------------------------------------------------------------
	Texture* GLRenderSystem::CreateTextureArray(const StringVector& vecTexNames, bool bSRGB /*= false*/)
	{
		_AST(0);
		return nullptr;
	}
	//------------------------------------------------------------------------------------
	Texture* GLRenderSystem::CreateTextureManual(uint32 nWidth, uint32 nHeight, const char* pTexData, ePixelFormat format, uint32 usage, bool bMipMap)
	{
		_AST(0);
		return nullptr;
	}
	//------------------------------------------------------------------------------------
	Texture* GLRenderSystem::GetDepthBuffer()
	{
		return m_pBackBuffer->GetDepthTexture();
	}
	//------------------------------------------------------------------------------------
	void GLRenderSystem::_LoadShaderXml(const STRING& strShader)
	{
		GLShaderXml shaderXml;

		TiXmlDocument doc;
		_AST(doc.LoadFile(GetShaderPath(strShader + ".xml").c_str()));

		TiXmlElement* pNode = doc.FirstChildElement("shadowmap_gen");
		if (pNode)
		{
			GLShaderItem item;
			_LoadShaderFileItem(&item, pNode);
			shaderXml.m_mapItems.insert(std::make_pair(eRenderPhase_ShadowMap, std::move(item)));
		}

		pNode = doc.FirstChildElement("gbuffer");
		if (pNode)
		{
			GLShaderItem item;
			_LoadShaderFileItem(&item, pNode);
			shaderXml.m_mapItems.insert(std::make_pair(eRenderPhase_GBuffer, std::move(item)));
		}

		pNode = doc.FirstChildElement("forward");
		if (pNode)
		{
			GLShaderItem item;
			_LoadShaderFileItem(&item, pNode);
			shaderXml.m_mapItems.insert(std::make_pair(eRenderPhase_Forward, std::move(item)));
		}

		pNode = doc.FirstChildElement("geometryshader");
		if (pNode)
		{
			shaderXml.gs = pNode->Attribute("gs");
		}

		pNode = doc.FirstChildElement("computeshader");
		if (pNode)
		{
			shaderXml.cs = pNode->Attribute("cs");
		}

		pNode = doc.FirstChildElement("tessellation");
		if (pNode)
		{
			shaderXml.hs = pNode->Attribute("hs");
			shaderXml.ds = pNode->Attribute("ds");
		}

		m_mapShaderFiles.insert(std::make_pair(strShader, std::move(shaderXml)));
	}
	//------------------------------------------------------------------------------------
	void GLRenderSystem::_LoadShaderFileItem(GLShaderItem* pItem, TiXmlElement* pNode)
	{
		const char* szVS = pNode->Attribute("vs");
		if (szVS)
		{
			pItem->vs = szVS;
		}

		const char* szPS = pNode->Attribute("ps");
		if (szPS)
		{
			pItem->ps = szPS;
		}
	}
	//------------------------------------------------------------------------------------
	GLBoundShaderState* GLRenderSystem::_FindOrCreateBoundShaderState()
	{
		for (uint32 i = 0; i < m_vecBoundShaderStates.size(); i++)
		{
			// TODO: better use hash?
			GLBoundShaderState* pShaderState = m_vecBoundShaderStates[i];
			if (pShaderState->vs == m_curBoundShaderState.vs &&
				pShaderState->ps == m_curBoundShaderState.ps &&
				pShaderState->cs == m_curBoundShaderState.cs &&
				pShaderState->gs == m_curBoundShaderState.gs &&
				pShaderState->hs == m_curBoundShaderState.hs &&
				pShaderState->ds == m_curBoundShaderState.ds)
			{
				// Find it
				OpenGLAPI::UseProgram(pShaderState->m_programid);
				return pShaderState;
			}
		}

		// Not found, create a new one.
		GLBoundShaderState* pNewShaderState = new GLBoundShaderState;
		pNewShaderState->vs = m_curBoundShaderState.vs;
		pNewShaderState->ps = m_curBoundShaderState.ps;
		pNewShaderState->cs = m_curBoundShaderState.cs;
		pNewShaderState->gs = m_curBoundShaderState.gs;
		pNewShaderState->hs = m_curBoundShaderState.hs;
		pNewShaderState->ds = m_curBoundShaderState.ds;

		pNewShaderState->m_programid = OpenGLAPI::CreateProgram();

		if (pNewShaderState->vs)
		{
			OpenGLAPI::AttachShader(pNewShaderState->m_programid, pNewShaderState->vs->m_id);
		}
		if (pNewShaderState->ps)
		{
			OpenGLAPI::AttachShader(pNewShaderState->m_programid, pNewShaderState->ps->m_id);
		}
		if (pNewShaderState->gs)
		{
			OpenGLAPI::AttachShader(pNewShaderState->m_programid, pNewShaderState->gs->m_id);
		}
		if (pNewShaderState->cs)
		{
			OpenGLAPI::AttachShader(pNewShaderState->m_programid, pNewShaderState->cs->m_id);
		}
		if (pNewShaderState->hs)
		{
			OpenGLAPI::AttachShader(pNewShaderState->m_programid, pNewShaderState->hs->m_id);
		}
		if (pNewShaderState->ds)
		{
			OpenGLAPI::AttachShader(pNewShaderState->m_programid, pNewShaderState->ds->m_id);
		}

		OpenGLAPI::LinkProgram(pNewShaderState->m_programid);

		GLint result;
		OpenGLAPI::GetProgramIv(pNewShaderState->m_programid, GL_LINK_STATUS, &result);
		if (!result)
		{
			GLint MaxLength = 0;
			OpenGLAPI::GetProgramIv(pNewShaderState->m_programid, GL_INFO_LOG_LENGTH, &MaxLength);
			std::unique_ptr<char[]> pInfo(new char[MaxLength]);
			OpenGLAPI::GetProgramInfo(pNewShaderState->m_programid, MaxLength, nullptr, pInfo.get());
			OutputDebugStringA(pInfo.get());
			_AST(0);
		}

		OpenGLAPI::UseProgram(pNewShaderState->m_programid);

		// Global uniform blocks
		const GLuint nCbGlobal = OpenGLAPI::GetUniformBlockIndex(pNewShaderState->m_programid, "cbufferGlobal");
		const GLuint nCbMaterial = OpenGLAPI::GetUniformBlockIndex(pNewShaderState->m_programid, "cbufferMaterial");
		const GLuint nCbSkin = OpenGLAPI::GetUniformBlockIndex(pNewShaderState->m_programid, "cbufferSkin");

		OpenGLAPI::UniformBlockBinding(pNewShaderState->m_programid, nCbGlobal, cbBindingGlobal);
		OpenGLAPI::UniformBlockBinding(pNewShaderState->m_programid, nCbMaterial, cbBindingMaterial);
		OpenGLAPI::UniformBlockBinding(pNewShaderState->m_programid, nCbSkin, cbBindingSkin);

		// Custom uniform blocks
		const GLint nCustomCBLoc = OpenGLAPI::GetUniformLocation(pNewShaderState->m_programid, "cbufferCustom0");

		if (nCustomCBLoc != -1)
		{
			OpenGLAPI::UniformBlockBinding(pNewShaderState->m_programid, nCustomCBLoc, cbBindingCustom0);
		}

		// Bind textures
		for (int i = 0; i < MAX_TEXTURE_STAGE; ++i)
		{
			STRING str("tex");
			char szBuf[32];
			::itoa(i, szBuf, 10);
			str += szBuf;

			const GLint nTexLocation = OpenGLAPI::GetUniformLocation(pNewShaderState->m_programid, str.c_str());

			if (nTexLocation == -1)
			{
				break;
			} 
			else
			{
				OpenGLAPI::Uniform1i(nTexLocation, i);
			}
		}

		for (int i = 0; i <= MAX_TEXTURE_STAGE; ++i)
		{
			STRING str("texCube");
			char szBuf[32];
			::itoa(i, szBuf, 10);
			str += szBuf;

			const GLint nTexLocation = OpenGLAPI::GetUniformLocation(pNewShaderState->m_programid, str.c_str());

			if (nTexLocation == -1)
			{
				break;
			}
			else
			{
				OpenGLAPI::Uniform1i(nTexLocation, i + 10);
			}
		}
		
		m_vecBoundShaderStates.push_back(pNewShaderState);

		return pNewShaderState;
	}

}