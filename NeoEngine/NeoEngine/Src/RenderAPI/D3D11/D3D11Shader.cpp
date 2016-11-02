#include "stdafx.h"
#include "D3D11/D3D11Shader.h"
#include <D3Dcompiler.h>
#include "D3D11/D3D11RenderSystem.h"


namespace Neo
{
	//------------------------------------------------------------------------------------
	bool D3D11Shader::Init(const char* filename, uint32 flags, const char* strEntryFunc, const char* strShaderProfile, const std::vector<D3D_SHADER_MACRO>& vecMacro, ID3DBlob** pBlob)
	{
		// Compile
		HRESULT hr = S_OK;

		const D3D_SHADER_MACRO* pMacro = vecMacro.size() == 1 ? nullptr : &vecMacro[0];

		DWORD dwShaderFlags = D3DCOMPILE_ENABLE_STRICTNESS;
#if defined( DEBUG ) || defined( _DEBUG )
		dwShaderFlags |= D3DCOMPILE_DEBUG;
#endif

		ID3DBlob* pErrorBlob;
		hr = D3DX11CompileFromFile(filename, pMacro, NULL, strEntryFunc, strShaderProfile,
			dwShaderFlags, 0, NULL, pBlob, &pErrorBlob, NULL);
		if (FAILED(hr))
		{
			if (pErrorBlob != NULL)
			{
				MessageBoxA(nullptr, (char*)pErrorBlob->GetBufferPointer(), "Error", MB_OK | MB_ICONERROR);
			}
			if (pErrorBlob) pErrorBlob->Release();
			return false;
		}
		if (pErrorBlob) pErrorBlob->Release();

		return true;
	}
	//------------------------------------------------------------------------------------
	D3D11VertexShader::D3D11VertexShader(const char* filename, uint32 flags, const char* strEntryFunc, eVertexType vertType, const std::vector<D3D_SHADER_MACRO>& vecMacros)
		: m_pInputLayout(nullptr)
	{
		HRESULT hr = S_OK;
		ID3DBlob* pBlob = nullptr;
		_AST(Init(filename, flags, strEntryFunc, "vs_4_0", vecMacros, &pBlob));

		V(g_pRenderSys->GetDevice()->CreateVertexShader(pBlob->GetBufferPointer(), pBlob->GetBufferSize(), NULL, &m_pShader));

		m_vsCode.resize(pBlob->GetBufferSize());
		memcpy_s(&m_vsCode[0], m_vsCode.size(), pBlob->GetBufferPointer(), pBlob->GetBufferSize());

		pBlob->Release();

		_CreateVertexLayout(vertType);
	}
	//------------------------------------------------------------------------------------
	D3D11VertexShader::~D3D11VertexShader()
	{
		SAFE_RELEASE(m_pInputLayout);
		SAFE_RELEASE(m_pShader);
	}
	//-------------------------------------------------------------------------------
	void D3D11VertexShader::_CreateVertexLayout(eVertexType vertType)
	{
		HRESULT hr = S_OK;

		switch (vertType)
		{
		case eVertexType_General:
		{
			D3D11_INPUT_ELEMENT_DESC layout[] =
			{
				{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
				{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
				{ "NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
				{ "COLOR", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
			};

			SAFE_RELEASE(m_pInputLayout);

			V(g_pRenderSys->GetDevice()->CreateInputLayout(layout, ARRAYSIZE(layout), &m_vsCode[0], m_vsCode.size(), &m_pInputLayout));
		}
		break;

		case eVertexType_NormalMap:
		{
			D3D11_INPUT_ELEMENT_DESC layout[] =
			{
				// Stream 0
				{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
				{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
				{ "NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
				// Stream 1
				{ "TANGENT", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 1, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
				{ "BINORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 1, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
			};

			SAFE_RELEASE(m_pInputLayout);

			V(g_pRenderSys->GetDevice()->CreateInputLayout(layout, ARRAYSIZE(layout), &m_vsCode[0], m_vsCode.size(), &m_pInputLayout));
		}
		break;

		case eVertexType_SkinModel:
		{
			D3D11_INPUT_ELEMENT_DESC layout[] =
			{
				// Stream 0
				{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
				{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
				{ "NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
				// Stream 2
				{ "BLENDINDICES", 0, DXGI_FORMAT_R8G8B8A8_UNORM, 2, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
				{ "BLENDWEIGHT", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 2, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
			};

			SAFE_RELEASE(m_pInputLayout);

			V(g_pRenderSys->GetDevice()->CreateInputLayout(layout, ARRAYSIZE(layout), &m_vsCode[0], m_vsCode.size(), &m_pInputLayout));
		}
		break;

		case eVertexType_Terrain:
		{
			D3D11_INPUT_ELEMENT_DESC layout[] =
			{
				// Stream 0
				{ "POSITION", 0, DXGI_FORMAT_R16G16_SINT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
				{ "TEXCOORD", 0, DXGI_FORMAT_R32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
				// Stream 1
				{ "TEXCOORD", 1, DXGI_FORMAT_R32G32_FLOAT, 1, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
			};

			SAFE_RELEASE(m_pInputLayout);

			V(g_pRenderSys->GetDevice()->CreateInputLayout(layout, ARRAYSIZE(layout), &m_vsCode[0], m_vsCode.size(), &m_pInputLayout));
		}
		break;

		default: _AST(0); break;
		}
	}
	//------------------------------------------------------------------------------------
	void D3D11VertexShader::Activate()
	{
		g_pRenderSys->GetDeviceContext()->VSSetShader(m_pShader, NULL, 0);

		g_pRenderSys->GetDeviceContext()->IASetInputLayout(m_pInputLayout);
	}
	//------------------------------------------------------------------------------------
	void D3D11VertexShader::DeActivate()
	{
		g_pRenderSys->GetDeviceContext()->VSSetShader(NULL, NULL, 0);
	}
	//------------------------------------------------------------------------------------
	D3D11PixelShader::D3D11PixelShader(const char* filename, uint32 flags, const char* strEntryFunc, const std::vector<D3D_SHADER_MACRO>& vecMacros)
	{
		HRESULT hr = S_OK;
		ID3DBlob* pBlob = nullptr;
		_AST(Init(filename, flags, strEntryFunc, "ps_4_0", vecMacros, &pBlob));

		V(g_pRenderSys->GetDevice()->CreatePixelShader(pBlob->GetBufferPointer(), pBlob->GetBufferSize(), NULL, &m_pShader));

		pBlob->Release();
	}
	//------------------------------------------------------------------------------------
	D3D11PixelShader::~D3D11PixelShader()
	{
		SAFE_RELEASE(m_pShader);
	}
	//------------------------------------------------------------------------------------
	void D3D11PixelShader::Activate()
	{
		g_pRenderSys->GetDeviceContext()->PSSetShader(m_pShader, NULL, 0);
	}
	//------------------------------------------------------------------------------------
	void D3D11PixelShader::DeActivate()
	{
		g_pRenderSys->GetDeviceContext()->PSSetShader(NULL, NULL, 0);
	}
	//------------------------------------------------------------------------------------
	D3D11GeometryShader::D3D11GeometryShader(const char* filename, uint32 flags, const char* strEntryFunc, const std::vector<D3D_SHADER_MACRO>& vecMacros)
	{
		HRESULT hr = S_OK;
		ID3DBlob* pBlob = nullptr;
		_AST(Init(filename, flags, strEntryFunc, "gs_5_0", vecMacros, &pBlob));

		V(g_pRenderSys->GetDevice()->CreateGeometryShader(pBlob->GetBufferPointer(), pBlob->GetBufferSize(), NULL, &m_pShader));

		pBlob->Release();
	}
	//------------------------------------------------------------------------------------
	D3D11GeometryShader::~D3D11GeometryShader()
	{
		SAFE_RELEASE(m_pShader);
	}
	//------------------------------------------------------------------------------------
	void D3D11GeometryShader::Activate()
	{
		g_pRenderSys->GetDeviceContext()->GSSetShader(m_pShader, NULL, 0);
	}
	//------------------------------------------------------------------------------------
	void D3D11GeometryShader::DeActivate()
	{
		g_pRenderSys->GetDeviceContext()->GSSetShader(NULL, NULL, 0);
	}
	//------------------------------------------------------------------------------------
	D3D11ComputeShader::D3D11ComputeShader(const char* filename, uint32 flags, const char* strEntryFunc, const std::vector<D3D_SHADER_MACRO>& vecMacros)
	{
		HRESULT hr = S_OK;
		ID3DBlob* pBlob = nullptr;
		_AST(Init(filename, flags, strEntryFunc, "cs_5_0", vecMacros, &pBlob));

		V(g_pRenderSys->GetDevice()->CreateComputeShader(pBlob->GetBufferPointer(), pBlob->GetBufferSize(), NULL, &m_pShader));

		pBlob->Release();
	}
	//------------------------------------------------------------------------------------
	D3D11ComputeShader::~D3D11ComputeShader()
	{
		SAFE_RELEASE(m_pShader);
	}
	//------------------------------------------------------------------------------------
	void D3D11ComputeShader::Activate()
	{
		g_pRenderSys->GetDeviceContext()->CSSetShader(m_pShader, NULL, 0);
	}
	//------------------------------------------------------------------------------------
	void D3D11ComputeShader::DeActivate()
	{
		g_pRenderSys->GetDeviceContext()->CSSetShader(NULL, NULL, 0);
	}
	//------------------------------------------------------------------------------------
	D3D11HullShader::D3D11HullShader(const char* filename, uint32 flags, const char* strEntryFunc, const std::vector<D3D_SHADER_MACRO>& vecMacros)
	{
		HRESULT hr = S_OK;
		ID3DBlob* pBlob = nullptr;
		_AST(Init(filename, flags, strEntryFunc, "hs_5_0", vecMacros, &pBlob));

		V(g_pRenderSys->GetDevice()->CreateHullShader(pBlob->GetBufferPointer(), pBlob->GetBufferSize(), NULL, &m_pShader));

		pBlob->Release();
	}
	//------------------------------------------------------------------------------------
	D3D11HullShader::~D3D11HullShader()
	{
		SAFE_RELEASE(m_pShader);
	}
	//------------------------------------------------------------------------------------
	void D3D11HullShader::Activate()
	{
		g_pRenderSys->GetDeviceContext()->HSSetShader(m_pShader, NULL, 0);
	}
	//------------------------------------------------------------------------------------
	void D3D11HullShader::DeActivate()
	{
		g_pRenderSys->GetDeviceContext()->HSSetShader(NULL, NULL, 0);
	}
	//------------------------------------------------------------------------------------
	D3D11DomainShader::D3D11DomainShader(const char* filename, uint32 flags, const char* strEntryFunc, const std::vector<D3D_SHADER_MACRO>& vecMacros)
	{
		HRESULT hr = S_OK;
		ID3DBlob* pBlob = nullptr;
		_AST(Init(filename, flags, strEntryFunc, "ds_5_0", vecMacros, &pBlob));

		V(g_pRenderSys->GetDevice()->CreateDomainShader(pBlob->GetBufferPointer(), pBlob->GetBufferSize(), NULL, &m_pShader));

		pBlob->Release();
	}
	//------------------------------------------------------------------------------------
	D3D11DomainShader::~D3D11DomainShader()
	{
		SAFE_RELEASE(m_pShader);
	}
	//------------------------------------------------------------------------------------
	void D3D11DomainShader::Activate()
	{
		g_pRenderSys->GetDeviceContext()->DSSetShader(m_pShader, NULL, 0);
	}
	//------------------------------------------------------------------------------------
	void D3D11DomainShader::DeActivate()
	{
		g_pRenderSys->GetDeviceContext()->DSSetShader(NULL, NULL, 0);
	}
}