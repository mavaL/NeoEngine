#include "CD3D11HLSLMaterialRenderer.h"
#include "IGPUProgrammingServices.h"
#include "IShaderConstantSetCallBack.h"
#include "IMaterialRendererServices.h"
#include "IVideoDriver.h"
#include "os.h"
#include "GrassSceneNode.h"
#include "CWaterSurfaceSceneNode.h"
#include "CSceneManager.h"

namespace irr
{
namespace video
{
//--------------------------------------------------------------------------
CD3D11HLSLMaterialRenderer::CD3D11HLSLMaterialRenderer(D3D11RenderSystem* driver,
		s32& materialID,
		const c8* vertexShaderProgram,
		const c8* vsEP,
		const c8* pixelShaderProgram,
		const c8* psEP,
		IShaderConstantSetCallBack* callback,
		video::IMaterialRenderer* baseMaterial,
		s32 userData)
	: m_driver(driver)
	, m_callBack(callback)
	, m_pVertexShader(nullptr)
	, m_pPixelShader(nullptr)
	, m_pMatrixCB(nullptr)
	, m_pInputLayout(nullptr)
{
	#ifdef _DEBUG
	setDebugName("CD3D11HLSLMaterialRenderer");
	#endif

	m_pd3dDevice = driver->getExposedVideoData().D3D11.pd3dDevice;
	m_pd3dContext = driver->getExposedVideoData().D3D11.pd3dContext; 

	if (m_callBack)
		m_callBack->grab();

	_init(vertexShaderProgram, vsEP, pixelShaderProgram, psEP);

	materialID = driver->addMaterialRenderer(this);
}

//--------------------------------------------------------------------------
CD3D11HLSLMaterialRenderer::~CD3D11HLSLMaterialRenderer()
{
	if (m_callBack)
		m_callBack->drop();

	SAFE_RELEASE(m_pVertexShader);
	SAFE_RELEASE(m_pPixelShader);
	SAFE_RELEASE(m_pMatrixCB);
	SAFE_RELEASE(m_pInputLayout);
}

//--------------------------------------------------------------------------
void CD3D11HLSLMaterialRenderer::_init(const c8* vertexShaderProgram, const c8* vsEP, const c8* pixelShaderProgram, const c8* psEP)
{
	HRESULT hr = S_OK;

	// Compile the vertex shader
	ID3DBlob* pVSBlob = NULL;
	bool bSucceed = _compileShaderFromFile( vertexShaderProgram, vsEP, "vs_4_0", &pVSBlob );
	_IRR_DEBUG_BREAK_IF(!bSucceed);

	// Create the vertex shader
	hr = m_pd3dDevice->CreateVertexShader( pVSBlob->GetBufferPointer(), pVSBlob->GetBufferSize(), NULL, &m_pVertexShader );
	if( FAILED( hr ) )
	{	
		_IRR_DEBUG_BREAK_IF("Create vertex shader failed!");
		pVSBlob->Release();
		return;
	}

	// Compile the pixel shader
	ID3DBlob* pPSBlob = NULL;
	bSucceed = _compileShaderFromFile( pixelShaderProgram, psEP, "ps_4_0", &pPSBlob );
	_IRR_DEBUG_BREAK_IF(!bSucceed);

	// Create the pixel shader
	hr = m_pd3dDevice->CreatePixelShader( pPSBlob->GetBufferPointer(), pPSBlob->GetBufferSize(), NULL, &m_pPixelShader );
	
	if( FAILED( hr ) )
	{
		_IRR_DEBUG_BREAK_IF("Create pixel shader failed!");
		pVSBlob->Release();
		pPSBlob->Release();
		return;
	}

	m_vsCode.resize(pVSBlob->GetBufferSize());

	memcpy_s(&m_vsCode[0], m_vsCode.size(), pVSBlob->GetBufferPointer(), pVSBlob->GetBufferSize());

	pVSBlob->Release();
	pPSBlob->Release();

	// Create the constant buffers
	D3D11_BUFFER_DESC bd;
	ZeroMemory( &bd, sizeof(bd) );
	bd.Usage = D3D11_USAGE_DEFAULT;
	bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
	bd.CPUAccessFlags = 0;
	bd.ByteWidth = sizeof(cBufferGlobal);
	hr = m_pd3dDevice->CreateBuffer( &bd, NULL, &m_pMatrixCB );

	m_vertexType = EVT_STANDARD;

	_IRR_DEBUG_BREAK_IF(FAILED(hr) && "Create ConstantBufMatrix failed!");
}

//--------------------------------------------------------------------------
bool CD3D11HLSLMaterialRenderer::_compileShaderFromFile( const c8* szFileName, const c8* szEntryPoint, const c8* szShaderModel, ID3DBlob** ppBlobOut )
{
	HRESULT hr = S_OK;

	DWORD dwShaderFlags = D3DCOMPILE_ENABLE_STRICTNESS;
#if defined( DEBUG ) || defined( _DEBUG )
	dwShaderFlags |= D3DCOMPILE_DEBUG;
#endif

	ID3DBlob* pErrorBlob;
	hr = D3DX11CompileFromFile( szFileName, NULL, NULL, szEntryPoint, szShaderModel, 
		dwShaderFlags, 0, NULL, ppBlobOut, &pErrorBlob, NULL );
	if( FAILED(hr) )
	{
		if( pErrorBlob != NULL )
			os::Printer::log((char*)pErrorBlob->GetBufferPointer(), ELL_ERROR);
		if( pErrorBlob ) pErrorBlob->Release();
		return false;
	}
	if( pErrorBlob ) pErrorBlob->Release();

	return true;
}
//----------------------------------------------------------------------------------------
// EVT_STANDARD
D3D11_INPUT_ELEMENT_DESC layout1[] =
{
	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	{ "NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	{ "COLOR", 0, DXGI_FORMAT_R8G8B8A8_UNORM, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
};
// EVT_2TCOORDS
D3D11_INPUT_ELEMENT_DESC layout2[] =
{
	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	{ "NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	{ "COLOR", 0, DXGI_FORMAT_R8G8B8A8_UNORM, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	{ "TEXCOORD", 1, DXGI_FORMAT_R32G32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 }
};
// EVT_TANGENTS
D3D11_INPUT_ELEMENT_DESC layout3[] =
{
	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	{ "NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	{ "COLOR", 0, DXGI_FORMAT_R8G8B8A8_UNORM, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	{ "TANGENT", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	{ "BINORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
};
// EVT_SKY
D3D11_INPUT_ELEMENT_DESC layout4[] =
{
	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	{ "TEXCOORD", 1, DXGI_FORMAT_R32G32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	{ "TEXCOORD", 2, DXGI_FORMAT_R32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },
};

void CD3D11HLSLMaterialRenderer::_createInputLayout()
{
	SAFE_RELEASE(m_pInputLayout);

	D3D11_INPUT_ELEMENT_DESC* layout[EVT_COUNT] = {0};
	UINT numElements[EVT_COUNT] = {0};
	
	layout[EVT_STANDARD] = layout1; 
	layout[EVT_2TCOORDS] = layout2; 
	layout[EVT_TANGENTS] = layout3;
	layout[EVT_SKY]		= layout4;
	numElements[EVT_STANDARD] = ARRAYSIZE(layout1); 
	numElements[EVT_2TCOORDS] = ARRAYSIZE(layout2);
	numElements[EVT_TANGENTS] = ARRAYSIZE(layout3);
	numElements[EVT_SKY]	= ARRAYSIZE(layout4);

	// Create the input layout
	HRESULT hr = m_pd3dDevice->CreateInputLayout( layout[m_vertexType], numElements[m_vertexType], &m_vsCode[0], 
		m_vsCode.size(), &m_pInputLayout );

	_IRR_DEBUG_BREAK_IF(FAILED( hr ) && "Create vertex input layout failed!");
}
//--------------------------------------------------------------------------
bool CD3D11HLSLMaterialRenderer::OnRender(IMaterialRendererServices* service, E_VERTEX_TYPE vtxtype)
{
	if (!m_pInputLayout || (m_vertexType!=vtxtype))
	{
		m_vertexType = vtxtype;
		_createInputLayout();
	}

	m_pd3dContext->VSSetShader( m_pVertexShader, NULL, 0 );
	m_pd3dContext->PSSetShader( m_pPixelShader, NULL, 0 );
	m_pd3dContext->IASetInputLayout( m_pInputLayout );

	// Fill global GPU params
	// TODO: This cbuffer is global, no need let every material renderer has one
	m_cBufferGlobal.matWorld = m_driver->getTransform(ETS_WORLD);
	m_cBufferGlobal.matView = m_driver->getTransform(ETS_VIEW);
	m_cBufferGlobal.matProj = m_driver->getTransform(ETS_PROJECTION);
	m_cBufferGlobal.matMVP = m_cBufferGlobal.matProj * m_cBufferGlobal.matView * m_cBufferGlobal.matWorld;
	m_cBufferGlobal.matWorld.getInverse(m_cBufferGlobal.matWorldIT);

	// D3D11 wants column major by default
	m_cBufferGlobal.matWorld = m_cBufferGlobal.matWorld.getTransposed();
	m_cBufferGlobal.matView = m_cBufferGlobal.matView.getTransposed();
	m_cBufferGlobal.matProj = m_cBufferGlobal.matProj.getTransposed();
	m_cBufferGlobal.matMVP = m_cBufferGlobal.matMVP.getTransposed();

	m_cBufferGlobal.time = os::Timer::getTime() / 1000.0f;
	m_cBufferGlobal.ambientColor = m_driver->getAmbientLight();

	m_pd3dContext->UpdateSubresource( m_pMatrixCB, 0, NULL, &m_cBufferGlobal, 0, 0 );
	m_pd3dContext->VSSetConstantBuffers( 0, 1, &m_pMatrixCB );
	m_pd3dContext->PSSetConstantBuffers( 0, 1, &m_pMatrixCB );

	// call callback to set shader constants
	if (m_callBack)
		m_callBack->OnSetConstants(this, 0);

	return true;
}

//--------------------------------------------------------------------------
void CD3D11HLSLMaterialRenderer::OnSetMaterial(const video::SMaterial& material,
				const video::SMaterial& lastMaterial,
				bool resetAllRenderstates,
				video::IMaterialRendererServices* services)
{
	//let callback know used material
	if (m_callBack)
		m_callBack->OnSetMaterial(material);

	for (u32 i=0; i<MATERIAL_MAX_TEXTURES; ++i)
		m_driver->setActiveTexture(i, material.getTexture(i));

	m_driver->setBasicRenderStates(material, lastMaterial, resetAllRenderstates);
}

//--------------------------------------------------------------------------
void CD3D11HLSLMaterialRenderer::OnUnsetMaterial()
{

}

//--------------------------------------------------------------------------
bool CD3D11HLSLMaterialRenderer::isTransparent() const
{
	return false;
}

//--------------------------------------------------------------------------
IVideoDriver* CD3D11HLSLMaterialRenderer::getVideoDriver()
{
	return m_driver;
}

//----------------------------------------------------------------------------------------
GrassShaderCallBack::GrassShaderCallBack( IVideoDriver* driver )
:m_pAlphaRefCB(nullptr)
,m_driver((D3D11RenderSystem*)driver)
{
	ID3D11Device* pd3dDevice = m_driver->getExposedVideoData().D3D11.pd3dDevice;
	m_pd3dContext = m_driver->getExposedVideoData().D3D11.pd3dContext;

	// Create the constant buffers
	D3D11_BUFFER_DESC bd;
	ZeroMemory( &bd, sizeof(bd) );
	bd.Usage = D3D11_USAGE_DEFAULT;
	bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
	bd.CPUAccessFlags = 0;
	bd.ByteWidth = sizeof(ConstantAlphaRef);
	HRESULT hr = pd3dDevice->CreateBuffer( &bd, NULL, &m_pAlphaRefCB );
	_IRR_DEBUG_BREAK_IF(FAILED(hr) && "Create ConstantAlphaRef failed!");
}

//----------------------------------------------------------------------------------------
GrassShaderCallBack::~GrassShaderCallBack()
{
	SAFE_RELEASE(m_pAlphaRefCB);
}

//----------------------------------------------------------------------------------------
void GrassShaderCallBack::OnSetMaterial( const SMaterial& material )
{
// 	if (material.MaterialType != lastMaterial.MaterialType ||
// 		material.MaterialTypeParam != lastMaterial.MaterialTypeParam ||
// 		material.MaterialTypeParam2 != lastMaterial.MaterialTypeParam2 ||
// 		resetAllRenderstates)
	{
		E_BLEND_FACTOR srcFact,dstFact;
		E_MODULATE_FUNC modulate;
		u32 alphaSource;
		unpack_textureBlendFunc ( srcFact, dstFact, modulate, alphaSource, material.MaterialTypeParam );

		if (srcFact == EBF_SRC_COLOR && dstFact == EBF_ZERO)
		{
			m_driver->_setBlendEnable(FALSE);
		}
		else
		{
			m_driver->_setBlendEnable(TRUE);
			m_driver->_setBlendFactor(true, srcFact);
			m_driver->_setBlendFactor(false, dstFact);
		}

		m_shaderParams.ref = material.MaterialTypeParam2;
	}
}
//--------------------------------------------------------------------------
void GrassShaderCallBack::OnSetConstants( IMaterialRendererServices* services, s32 userData )
{
	scene::GrassSceneNode* node = dynamic_cast<scene::GrassSceneNode*>(m_driver->getSceneManagerImpl()->_getBindRenderObject());

	m_shaderParams.offset = node->getWaveOffset();

	m_pd3dContext->UpdateSubresource( m_pAlphaRefCB, 0, NULL, &m_shaderParams, 0, 0 );
	m_pd3dContext->VSSetConstantBuffers( 1, 1, &m_pAlphaRefCB );
	m_pd3dContext->PSSetConstantBuffers( 1, 1, &m_pAlphaRefCB );
}

//----------------------------------------------------------------------------------------
SkyShaderCallBack::SkyShaderCallBack( IVideoDriver* driver )
:m_driver((D3D11RenderSystem*)driver)
,m_pShaderCB(nullptr)
{
	ID3D11Device* pd3dDevice = m_driver->getExposedVideoData().D3D11.pd3dDevice;
	m_pd3dContext = m_driver->getExposedVideoData().D3D11.pd3dContext;

	// Create the constant buffers
	D3D11_BUFFER_DESC bd;
	ZeroMemory( &bd, sizeof(bd) );
	bd.Usage = D3D11_USAGE_DEFAULT;
	bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
	bd.CPUAccessFlags = 0;
	bd.ByteWidth = sizeof(ConstantShaderParam);
	HRESULT hr = pd3dDevice->CreateBuffer( &bd, NULL, &m_pShaderCB );
	_IRR_DEBUG_BREAK_IF(FAILED(hr) && "Create ConstantShaderParam failed!");
}

//----------------------------------------------------------------------------------------
SkyShaderCallBack::~SkyShaderCallBack()
{
	SAFE_RELEASE(m_pShaderCB);
}

//----------------------------------------------------------------------------------------
void SkyShaderCallBack::OnSetMaterial( const SMaterial& material )
{
}

//----------------------------------------------------------------------------------------
void SkyShaderCallBack::OnSetConstants( IMaterialRendererServices* services, s32 userData )
{
	ConstantShaderParam cb;
	cb.uLightDir	=	core::vector4d(0, 0, 1, 0);
	cb.uCameraPos	=	core::vector4d(0, 1.0001f, 0, 0);
	cb.uInvWaveLength =	core::vector4d(9.473284438f, 11.76047764f, 26.6802131f, 0);
	cb.uInnerRadius =	1;
	cb.uScale		=	4;
	cb.uScaleDepth	=	0.125f;
	cb.uScaleOverScaleDepth = 32;
	cb.uNumberOfSamples = 6;
	cb.uSamples		=	6;

	m_pd3dContext->UpdateSubresource( m_pShaderCB, 0, NULL, &cb, 0, 0 );
	m_pd3dContext->VSSetConstantBuffers( 1, 1, &m_pShaderCB );
	m_pd3dContext->PSSetConstantBuffers( 1, 1, &m_pShaderCB );
}
//----------------------------------------------------------------------------------------
WaterShaderCallBack_Final::WaterShaderCallBack_Final( IVideoDriver* driver, scene::ISceneManager* sceneMgr )
:m_driver((D3D11RenderSystem*)driver)
,m_sceneMgr(sceneMgr)
{
	ID3D11Device* pd3dDevice = m_driver->getExposedVideoData().D3D11.pd3dDevice;
	m_pd3dContext = m_driver->getExposedVideoData().D3D11.pd3dContext;

	// Create the constant buffers
	D3D11_BUFFER_DESC bd;
	ZeroMemory( &bd, sizeof(bd) );
	bd.Usage = D3D11_USAGE_DEFAULT;
	bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
	bd.CPUAccessFlags = 0;
	bd.ByteWidth = sizeof(ConstantVS);
	HRESULT hr = pd3dDevice->CreateBuffer( &bd, NULL, &m_pCB_VS );
	_IRR_DEBUG_BREAK_IF(FAILED(hr) && "Create ConstantVS failed!");

	m_constantBufVS.texScale	=	core::vector2df(25, 26);
	m_constantBufVS.bumpSpeed	=	core::vector2df(0.015f, 0.005f);
	m_constantBufVS.BumpScale	=	0.2f;
	m_constantBufVS.waveFreq	=	0.028f;
	m_constantBufVS.waveAmp		=	1.8f;

	bd.ByteWidth = sizeof(ConstantPS);
	hr = pd3dDevice->CreateBuffer( &bd, NULL, &m_pCB_PS );
	_IRR_DEBUG_BREAK_IF(FAILED(hr) && "Create ConstantPS failed!");

	m_constantBufPS.deepColor	=	core::vector4d(0.0f, 0.3f, 0.5f, 1.0f);
	m_constantBufPS.shallowColor =	core::vector4d(0.0f, 1.0f, 1.0f, 1.0f);
	m_constantBufPS.reflectionColor = core::vector4d(0.95f, 1.0f, 1.0f, 1.0f);
	m_constantBufPS.reflectionAmount =	1.0f;
	m_constantBufPS.reflectionBlur	=	0.0f;
	m_constantBufPS.waterAmount		=	0.3f;
	m_constantBufPS.fresnelPower	=	5.0f;
	m_constantBufPS.fresnelBias		=	0.328f;
	m_constantBufPS.refractionAmount =	0.075f;
}
//----------------------------------------------------------------------------------------
WaterShaderCallBack_Final::~WaterShaderCallBack_Final()
{
	SAFE_RELEASE(m_pCB_VS);
	SAFE_RELEASE(m_pCB_PS);
}
//----------------------------------------------------------------------------------------
void WaterShaderCallBack_Final::OnSetConstants( IMaterialRendererServices* services, s32 userData )
{
	// Camera pos in object space
	m_constantBufVS.viewPt = m_sceneMgr->getActiveCamera()->getAbsolutePosition();
	core::matrix4 invMatWorld;
	m_driver->getTransform(ETS_WORLD).getInverse(invMatWorld);
	invMatWorld.transformVect(m_constantBufVS.viewPt);

	m_pd3dContext->UpdateSubresource( m_pCB_VS, 0, NULL, &m_constantBufVS, 0, 0 );
	m_pd3dContext->VSSetConstantBuffers( 1, 1, &m_pCB_VS );

	m_pd3dContext->UpdateSubresource( m_pCB_PS, 0, NULL, &m_constantBufPS, 0, 0 );
	m_pd3dContext->PSSetConstantBuffers( 2, 1, &m_pCB_PS );
}

//----------------------------------------------------------------------------------------
WaterShaderCallBack_Depth::WaterShaderCallBack_Depth( IVideoDriver* driver, scene::CWaterSurfaceSceneNode* node )
:m_driver((D3D11RenderSystem*)driver)
,m_waterNode(node)
{
	ID3D11Device* pd3dDevice = m_driver->getExposedVideoData().D3D11.pd3dDevice;
	m_pd3dContext = m_driver->getExposedVideoData().D3D11.pd3dContext;

	// Create the constant buffers
	D3D11_BUFFER_DESC bd;
	ZeroMemory( &bd, sizeof(bd) );
	bd.Usage = D3D11_USAGE_DEFAULT;
	bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
	bd.CPUAccessFlags = 0;
	bd.ByteWidth = sizeof(cBuffer);
	HRESULT hr = pd3dDevice->CreateBuffer( &bd, NULL, &m_pCB );
	_IRR_DEBUG_BREAK_IF(FAILED(hr) && "Create cBuffer failed!");
}
//----------------------------------------------------------------------------------------
WaterShaderCallBack_Depth::~WaterShaderCallBack_Depth()
{
	SAFE_RELEASE(m_pCB);
}
//----------------------------------------------------------------------------------------
void WaterShaderCallBack_Depth::OnSetConstants( IMaterialRendererServices* services, s32 userData )
{
	cBuffer cb;
	cb.waterPlaneHeight = m_waterNode->getAbsolutePosition().Y;
	cb.depthLimit = 1.0f / 90;

	m_pd3dContext->UpdateSubresource( m_pCB, 0, NULL, &cb, 0, 0 );
	m_pd3dContext->VSSetConstantBuffers( 1, 1, &m_pCB );
	m_pd3dContext->PSSetConstantBuffers( 1, 1, &m_pCB );
}

//----------------------------------------------------------------------------------------
WaterShaderCallBack_RefractiveMask::WaterShaderCallBack_RefractiveMask( IVideoDriver* driver )
:m_driver((D3D11RenderSystem*)driver)
{
	ID3D11Device* pd3dDevice = m_driver->getExposedVideoData().D3D11.pd3dDevice;
	m_pd3dContext = m_driver->getExposedVideoData().D3D11.pd3dContext;

	// Create the constant buffers
	D3D11_BUFFER_DESC bd;
	ZeroMemory( &bd, sizeof(bd) );
	bd.Usage = D3D11_USAGE_DEFAULT;
	bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
	bd.CPUAccessFlags = 0;
	bd.ByteWidth = sizeof(cBuffer);
	HRESULT hr = pd3dDevice->CreateBuffer( &bd, NULL, &m_pCB );
	_IRR_DEBUG_BREAK_IF(FAILED(hr) && "Create cBuffer failed!");
}
//----------------------------------------------------------------------------------------
WaterShaderCallBack_RefractiveMask::~WaterShaderCallBack_RefractiveMask()
{
	SAFE_RELEASE(m_pCB);
}
//----------------------------------------------------------------------------------------
void WaterShaderCallBack_RefractiveMask::OnSetConstants( IMaterialRendererServices* services, s32 userData )
{
	cBuffer cb;
	scene::ISceneNode* renderable = m_driver->getSceneManagerImpl()->_getBindRenderObject();
	cb.refractionMask = 0;

	m_pd3dContext->UpdateSubresource( m_pCB, 0, NULL, &cb, 0, 0 );
	m_pd3dContext->PSSetConstantBuffers( 1, 1, &m_pCB );
}

} // end namespace video
} // end namespace irr

