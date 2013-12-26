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
	eTextureUsage_ReadWrite		= 1 << 1,
	eTextureUsage_RenderTarget	= 1 << 2,
	eTextureUsage_DomainShader	= 1 << 3		// Bind to domain shader
};

// Use for render target to control which part to render
enum eRenderPhase
{
	eRenderPhase_Sky		= 1 << 0,
	eRenderPhase_Terrain	= 1 << 1,
	eRenderPhase_SSAO		= 1 << 2,
	eRenderPhase_Solid		= 1 << 3,
	eRenderPhase_Water		= 1 << 4,
	eRenderPhase_UI			= 1 << 5,

	eRenderPhase_Geometry	= eRenderPhase_Sky | eRenderPhase_Terrain | eRenderPhase_Solid | eRenderPhase_Water,

	eRenderPhase_All = eRenderPhase_Geometry | eRenderPhase_UI | eRenderPhase_SSAO
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

enum eDebugRT
{
	eDebugRT_None,
	eDebugRT_SSAO
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
}

typedef std::string			STRING;
typedef std::vector<STRING>	StringVector;
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

namespace Neo
{
	class	D3D11RenderSystem;
	class	PixelBox;
	struct	SColor;
	struct	SVertex;
	struct	SFrameStat;
	struct	SDirectionLight;
	class	Material;
	class	RenderObject;
	class	D3D11Texture;
	class	D3D11RenderTarget;
	class	Terrain;
	class	Water;
	class	Sky;
	class	SceneManager;
	class	Font;
	class	MeshLoader;
	class	SSAO;
}

class Scene;
class Camera;


struct SGlobalEnv 
{
	HWND					hwnd;			// Main window handle
	Neo::D3D11RenderSystem*	pRenderSystem;	// Render system
	Neo::SceneManager*		pSceneMgr;		// Scene manager
	Neo::SFrameStat*		pFrameStat;		// Frame statics info
};
extern SGlobalEnv	g_env;



inline STRING	GetResPath(const STRING& filename)
{
	STRING filepath("../../../Res/");
	filepath += filename;
	return std::move(filepath);
}


template<class T>
inline void Swap(T& t1, T& t2)
{
	T tmp = t1;
	t1 = t2;
	t2 = tmp;
}

template<class T>
inline T Clamp(const T& val, const T& left, const T& right)
{
	if(val < left)
		return left;
	else if(val > right)
		return right;
	else
		return val;
}

__forceinline int Ceil32_Fast(float x)
{
	const float h = 0.5f;
	int t;

	_asm
	{
		fld	x
			fadd	h
			fistp	t
	}

	return t;
}

__forceinline int Floor32_Fast(float x)
{
	const float h = 0.5f;
	int t;

	_asm
	{
		fld	x
			fsub	h
			fistp	t
	}

	return t;
}

__forceinline int Ftoi32_Fast(float x)
{
	int t;
	_asm
	{
		fld	x
			fistp	t
	}

	return t;

	// SSE?
	//return _mm_cvtt_ss2si(_mm_load_ss(&x)); 
}


#ifndef SAFE_DELETE
#define SAFE_DELETE(p) if(p) { delete p; p=nullptr; }
#endif

#ifndef SAFE_RELEASE
#define SAFE_RELEASE(p) if(p) { p->Release(); p=nullptr; }
#endif

#ifndef SAFE_DELETE_ARRAY
#define SAFE_DELETE_ARRAY(p) if(p) { delete []p; p=nullptr; }
#endif

#if defined(DEBUG) || defined(_DEBUG)
#ifndef V
#define V(x)           { hr = (x); assert(SUCCEEDED(hr)); }
#endif
#ifndef V_RETURN
#define V_RETURN(x)    { hr = (x); if( FAILED(hr) ) { assert(0); return false; } }
#endif
#else
#ifndef V
#define V(x)           { hr = (x); }
#endif
#ifndef V_RETURN
#define V_RETURN(x)    { hr = (x); assert(SUCCEEDED(hr)); }
#endif
#endif

#endif // Prerequiestity_h__