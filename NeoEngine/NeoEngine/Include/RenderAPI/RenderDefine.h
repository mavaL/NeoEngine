/********************************************************************
	created:	2016/09/09 14:48
	filename	RenderDefine.h
	author:		maval

	purpose:	Common definition for render-api related.
*********************************************************************/
#ifndef RenderDefine_h__
#define RenderDefine_h__

namespace Neo
{
	const int	MAX_TEXTURE_STAGE = 16;
	const int	CSM_CASCADE_NUM = 3;
	const int	FUR_SHELL_LAYER = 15;
	const int	MAX_MRT_COUNT = 8;
	const int	OCTREE_MAX_DEPTH = 4;



	enum eRenderAPI
	{
		eRenderAPI_D3D11,
		eRenderAPI_OpenGL,
	};

	enum eTextureType
	{
		eTextureType_2D,
		eTextureType_3D,
		eTextureType_CubeMap,
		eTextureType_TextureArray
	};

	enum eTextureUsage
	{
		eTextureUsage_WriteOnly				= 1 << 0,
		eTextureUsage_ReadWrite				= 1 << 1,		// If load from file, create a staging texture; if create manual, along with a staging buffer.
		eTextureUsage_RenderTarget			= 1 << 2,
		eTextureUsage_DomainShader			= 1 << 3,		// Bind to domain shader
		eTextureUsage_HullShader			= 1 << 4,		// Bind to hull shader
		eTextureUsage_VertexShader			= 1 << 5,		// Bind to vertex shader
		eTextureUsage_GeometryShader		= 1 << 6,		// Bind to vertex shader
		eTextureUsage_RecreateOnWndResized	= 1 << 7,
		eTextureUsage_Depth					= 1 << 8,
		eTextureUsage_AutoGenMips			= 1 << 9,
	};

	enum eLockMode
	{
		eLockMode_ReadOnly,
		eLockMode_WriteOnly,
		eLockMode_ReadWrite,
		eLockMode_NoOverWrite,
	};

	enum eRenderTargetUsage
	{
		eRenderTargetUsage_OwnDepthTex				=	1 << 0,
		eRenderTargetUsage_GenMips					=	1 << 1,
		eRenderTargetUsage_NoColorTex				=	1 << 2,
		eRenderTargetUsage_AutoUpdateRatioAspect	=	1 << 3,
	};

	enum eEntity
	{
		eEntity_StaticModel,
		eEntity_SkinModel,
	};

	enum eVertexType
	{
		eVertexType_General,
		eVertexType_NormalMap,
		eVertexType_SkinModel,
		eVertexType_Terrain,
	};

	// Use for render target to control which part to render
	enum eRenderPhase
	{
		eRenderPhase_ShadowMap = 1 << 0,
		eRenderPhase_GBuffer = 1 << 1,
		eRenderPhase_TiledCS = 1 << 2,
		eRenderPhase_SSAO = 1 << 3,
		eRenderPhase_Compose = 1 << 4,
		eRenderPhase_Forward = 1 << 5,
		eRenderPhase_Transparent = 1 << 6,
		eRenderPhase_FinalScene = 1 << 7,
		eRenderPhase_UI = 1 << 8,
		eRenderPhase_None = 1 << 9,

		eRenderPhase_All = eRenderPhase_GBuffer | eRenderPhase_UI | eRenderPhase_SSAO
	};

	enum eShader
	{
		eShader_Opaque,
		eShader_Terrain,
		eShader_Decal,
		eShader_Transparent,
		eShader_Forward,
		eShader_Fur,
		eShader_PostProcess,
		eShader_UI,
	};

	enum eShaderType
	{
		eShaderType_VS,
		eShaderType_PS,
		eShaderType_GS,
		eShaderType_CS,
		eShaderType_HS,
		eShaderType_DS,
	};

	enum eShaderFlag
	{
		eShaderFlag_EnableClipPlane = 1 << 0,		// Clip plane support for water reflection
		eShaderFlag_EnableSSAO = 1 << 1,
		eShaderFlag_EnableShadowReceive = 1 << 2,
	};

	enum ePixelFormat
	{
		ePF_R8G8B8 = 0,
		ePF_A8R8G8B8,
		ePF_R16F,
		ePF_G16R16F,
		ePF_A16R16G16B16F,
		ePF_R32F,
		ePF_G32R32F,
		ePF_A32R32G32B32F,
		ePF_L8,
		ePF_L16,
		ePF_DXT1,
		ePF_DXT2,
		ePF_DXT3,
		ePF_DXT4,
		ePF_DXT5,
		ePF_Depth32,
		ePF_Num,
		ePF_Unknown
	};

	enum eTransform
	{
		eTransform_World,
		eTransform_View,
		eTransform_Proj,
		eTransform_ViewProj,
		eTransform_WorldIT,
		eTransform_InvView,
		eTransform_Shadow,		// World space -> sun light NDC space -> texture space
		eTransform_Shadow2,
		eTransform_Shadow3,
		eTransform_Count
	};

	enum eDebugRT
	{
		eDebugRT_None,
		eDebugRT_SSAO,
		eDebugRT_ShadowMap
	};

	enum eBufferUsage
	{
		eBufferUsage_ConstantBuf	=	1 << 0,
		eBufferUsage_Dynamic		=	1 << 1,
		eBufferUsage_VertexBuf		=	1 << 2,
		eBufferUsage_IndexBuf		=	1 << 3,
	};

	enum ePrimitive
	{
		ePrimitive_TriangleList,
		ePrimitive_TriangleStrip,
		ePrimitive_4_Control_Point_PatchList,
		ePrimitive_LineList_Adj,
	};


	struct SViewport
	{
		float	TopLeftX;
		float	TopLeftY;
		float	Width;
		float	Height;
		float	MinDepth;
		float	MaxDepth;
	};



#if defined(DEBUG) || defined(_DEBUG)
#ifndef V
#define V(x)           { hr = (x); _AST(SUCCEEDED(hr)); }
#endif
#ifndef V_RETURN
#define V_RETURN(x)    { hr = (x); if( FAILED(hr) ) { _AST(0); return false; } }
#endif
#else
#ifndef V
#define V(x)           { hr = (x); }
#endif
#ifndef V_RETURN
#define V_RETURN(x)    { hr = (x); }
#endif
#endif
}


#endif // RenderDefine_h__