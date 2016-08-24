/********************************************************************
	created:	2013/07/23
	created:	23:7:2013   10:23
	filename: 	Prerequiestity.h
	author:		maval
	
	purpose:	项目前提文件
*********************************************************************/
#ifndef Prerequiestity_h__
#define Prerequiestity_h__

#include "Utility.h"


const int	MAX_TEXTURE_STAGE	=	16;



#define USE_SIMD				0			//是否使用SIMD
#define USE_LISPPSM				0			// Light space perspective shadow mapping
#define USE_PSSM				1			// Parallel-Split Shadow Maps
#define	CSM_CASCADE_NUM			3			// Cascade level
#define USE_ESM					0			// Exponential Shadow Maps


enum eTextureType
{
	eTextureType_2D,
	eTextureType_3D,
	eTextureType_CubeMap,
	eTextureType_TextureArray
};

enum eTextureUsage
{
	eTextureUsage_WriteOnly		= 1 << 0,
	eTextureUsage_ReadWrite		= 1 << 1,		// Staging
	eTextureUsage_RenderTarget	= 1 << 2,
	eTextureUsage_DomainShader	= 1 << 3,		// Bind to domain shader
	eTextureUsage_HullShader	= 1 << 4,		// Bind to hull shader
	eTextureUsage_RecreateOnWndResized = 1 << 5,
	eTextureUsage_Depth			= 1 << 6,
	eTextureUsage_AutoGenMips	= 1 << 7,
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
};

// Use for render target to control which part to render
enum eRenderPhase
{
	eRenderPhase_ShadowMap	= 1 << 0,
	eRenderPhase_GBuffer	= 1 << 1,
	eRenderPhase_TiledCS	= 1	<< 2,
	eRenderPhase_SSAO		= 1 << 3,
	eRenderPhase_Compose	= 1 << 4,
	eRenderPhase_Forward	= 1 << 5,
	eRenderPhase_Water		= 1 << 6,
	eRenderPhase_FinalScene	= 1 << 7,
	eRenderPhase_UI			= 1 << 8,
	eRenderPhase_None		= 1 << 9,

	eRenderPhase_All = eRenderPhase_GBuffer | eRenderPhase_Water | eRenderPhase_UI | eRenderPhase_SSAO
};

enum eShader
{
	eShader_Opaque,
	eShader_Transparent,
	eShader_PostProcess,
	eShader_UI,
};

enum eShaderFlag
{
	eShaderFlag_EnableClipPlane			= 1<<0,		// Clip plane support for water reflection
	eShaderFlag_EnableSSAO				= 1<<1,
	eShaderFlag_EnableShadowReceive		= 1<<2,
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

/// Forward declaration
namespace Common
{
	class Vector2;
	class Vector3;
	class Vector4;
	class Matrix44;
	class Plane;
	class AxisAlignBBox;
	class iPoint;
	class Quaternion;
	class Ray;
}

namespace Neo
{
	class	Camera;
	class	D3D11RenderSystem;
	class	PixelBox;
	struct	SColor;
	struct	SVertex;
	struct	STangentData;
	struct	SVertexBoneWeight;
	struct	SFrameStat;
	struct	SDirectionLight;
	class	VertexData;
	class	Material;
	class	D3D11Texture;
	class	D3D11RenderTarget;
	class	Terrain;
	class	Water;
	class	Sky;
	class	Scene;
	class	SceneManager;
	class	Font;
	class	MeshLoader;
	class	SSAO;
	class	ShadowMap;
	class	Entity;
	class	SubMesh;
	class	Mesh;
	class	ConvexBody;
	class	TileBasedDeferredRenderer;
	template<typename t>class	StructuredBuffer;
	struct	SPointLight;
	typedef std::vector<SPointLight>	PointLightVector;
	class	AmbientCube;
	class	MaterialManager;
	class	SkeletonAnim;
	class	SkinModel;
	class	AnimClip;
	class	SkeletonDebugger;
	class	ThirdPersonCharacter;
	class	StateMachine;
	class	BaseState;
	class	CInputManager;
	class	ShadowMapPSSM;
}


typedef std::string			STRING;
typedef std::vector<STRING>	StringVector;
typedef unsigned long long	uint64;
typedef unsigned int		uint32;
typedef unsigned short		uint16;
typedef unsigned char		uint8;
typedef Common::Vector2			VEC2;
typedef Common::Vector3			VEC3;
typedef Common::Vector4			VEC4;
typedef Common::Matrix44		MAT44;
typedef Common::AxisAlignBBox	AABB;
typedef Common::Plane			PLANE;
typedef Common::iPoint			IPOINT;
typedef Common::Quaternion		QUATERNION;
typedef Common::Ray				RAY;
typedef std::vector<Neo::Entity*>	EntityList;



struct SGlobalEnv 
{
	HWND					hwnd;			// Main window handle
	Neo::D3D11RenderSystem*	pRenderSystem;	// Render system
	Neo::CInputManager*		pInputSystem;	// Input system
	Neo::SceneManager*		pSceneMgr;		// Scene manager
	Neo::SFrameStat*		pFrameStat;		// Frame statics info
};
extern SGlobalEnv	g_env;


#endif // Prerequiestity_h__