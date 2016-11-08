/********************************************************************
	created:	2013/07/23
	created:	23:7:2013   10:23
	filename: 	Prerequiestity.h
	author:		maval
	
	purpose:	项目前提文件
*********************************************************************/
#ifndef Prerequiestity_h__
#define Prerequiestity_h__



#define		USE_OPENGL				1			// Desktop OpenGL
#define		USE_SIMD				0			// SIMD
#define		USE_LISPPSM				0			// Light space perspective shadow mapping
#define		USE_PSSM				1			// Parallel-Split Shadow Maps
#define		USE_ESM					1			// Exponential Shadow Maps
#define		BIG_ENDIAN				0			// MacOS is big endian


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
	class iRect;
}

namespace Neo
{
	class	Camera;
	class	PixelBox;
	struct	SColor;
	struct	SVertex;
	struct	STangentData;
	struct	SVertexBoneWeight;
	struct	SFrameStat;
	struct	SDirectionLight;
	class	VertexData;
	class	Material;
	class	Terrain;
	class	TerrainQuadTreeNode;
	class	TerrainGlobalOptions;
	class	TerrainGroup;
	class	TerrainLodManager;
	class	TerrainLayerBlendMap;
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
	class	RenderSystem;
	class	RenderTarget;
	class	Texture;
	class	D3D11RenderSystem;
	class	D3D11RenderTarget;
	class	D3D11Texture;
	class	GLRenderSystem;
	class	GLRenderTarget;
	class	GLTexture;
	class	Buffer;
	class	ConstantBuffer;
	class	Renderer;
	struct	SViewport;
	class	Shader;
	class	SamplerState;
	class	VertexBuffer;
	class	IndexBuffer;
	class	GLRenderTarget;
	class	GLVertexBuffer;
	class	Octree;
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
typedef Common::iRect			Rect;
typedef std::vector<Neo::Entity*>	EntityList;



struct SGlobalEnv 
{
	HWND					hwnd;			// Main window handle
	Neo::Renderer*			pRenderer;		// Renderer
	Neo::CInputManager*		pInputSystem;	// Input system
	Neo::SceneManager*		pSceneMgr;		// Scene manager
	Neo::SFrameStat*		pFrameStat;		// Frame statics info
};
extern SGlobalEnv	g_env;


#endif // Prerequiestity_h__