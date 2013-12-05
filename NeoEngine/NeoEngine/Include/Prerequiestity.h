/********************************************************************
	created:	2013/07/23
	created:	23:7:2013   10:23
	filename: 	Prerequiestity.h
	author:		maval
	
	purpose:	项目前提文件
*********************************************************************/
#ifndef Prerequiestity_h__
#define Prerequiestity_h__

const int	SCREEN_WIDTH		=	800;
const int	SCREEN_HEIGHT		=	600;
const int	MAX_TEXTURE_STAGE	=	8;


#define USE_SIMD				0			//是否使用SIMD

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) if(p) { delete p; p=nullptr; }
#endif

#ifndef SAFE_RELEASE
#define SAFE_RELEASE(p) if(p) { p->Release(); p=nullptr; }
#endif

#ifndef SAFE_DELETE_ARRAY
#define SAFE_DELETE_ARRAY(p) if(p) { delete []p; p=nullptr; }
#endif

typedef std::string		STRING;
typedef unsigned int	uint32;
typedef unsigned short	uint16;

enum eTextureType
{
	eTextureType_2D,
	eTextureType_3D,
	eTextureType_CubeMap
};

enum eTextureUsage
{
	eTextureUsage_WriteOnly		= 1 << 0,
	eTextureUsage_ReadWrite		= 1 << 1,
	eTextureUsage_RenderTarget	= 1 << 2
};

// Use for render target to control which part to render
enum eRenderPhase
{
	eRenderPhase_Sky		= 1 << 0,
	eRenderPhase_Terrain	= 1 << 1,
	eRenderPhase_Solid		= 1 << 2,
	eRenderPhase_Water		= 1 << 3,

	eRenderPhase_All = eRenderPhase_Sky | eRenderPhase_Terrain | eRenderPhase_Solid | eRenderPhase_Water
};

enum ePixelFormat
{
	ePF_R8G8B8 = 0,
	ePF_A8R8G8B8,
	ePF_A8B8G8R8,
	ePF_R16F,
	ePF_G16R16F,
	ePF_A16B16G16R16F,
	ePF_R32F,
	ePF_G32R32F,
	ePF_A32B32G32R32F,
	ePF_L8,
	ePF_L16,
	ePF_DXT1,
	ePF_DXT2,
	ePF_DXT3,
	ePF_DXT4,
	ePF_DXT5,
	ePF_Unknown
};

enum eTransform
{
	eTransform_World,
	eTransform_View,
	eTransform_Proj,
	eTransform_WVP,
	eTransform_WorldIT,
	eTransform_Count
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
}

typedef Common::Vector2			VEC2;
typedef Common::Vector3			VEC3;
typedef Common::Vector4			VEC4;
typedef Common::Matrix44		MAT44;
typedef Common::AxisAlignBBox	AABB;

namespace Neo
{
	class	D3D11RenderSystem;
	class	PixelBox;
	struct	SVertex;
	class	Material;
	class	RenderObject;
	class	D3D11Texture;
	class	D3D11RenderTarget;
	class	Terrain;
	class	Water;
	class	Sky;
	class	SceneManager;
}

class Application;
class Scene;
class Camera;


struct SGlobalEnv 
{
	HWND					hwnd;			// Main window handle
	Application*			pApp;			// App object
	Neo::D3D11RenderSystem*	pRenderSystem;	// Render system
	Neo::SceneManager*		pSceneMg;		// Scene manager
};
extern SGlobalEnv	g_env;



inline STRING	GetResPath(const STRING& filename)
{
	STRING filepath("../../../Res/");
	filepath += filename;
	return std::move(filepath);
}

#endif // Prerequiestity_h__