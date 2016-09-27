/********************************************************************
	created:	2016/09/09 11:58
	filename	Renderer.h
	author:		maval

	purpose:	Renderer class.
*********************************************************************/
#ifndef Renderer_h__
#define Renderer_h__


#include "Prerequiestity.h"
#include "RenderState.h"
#include "Color.h"
#include "RenderSystem.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	struct SFrameStat
	{
		SFrameStat() :lastFPS(0) {}

		float lastFPS;
	};

	// Per-frame constant buffer: (b0)
	__declspec(align(16))
	struct cBufferGlobal
	{
		cBufferGlobal() : shadowDepthBias(0.01f) {}

		MAT44	matView;
		MAT44	matProj;
		MAT44	matViewProj;
		MAT44	matInvView;
		MAT44	matShadow[3];
		PLANE	clipPlane;							// Clipping plane, for water reflection rendering
		VEC4	frustumFarCorner[4];				// LT, RT, LB, RB
		SColor	ambientColor;
		SColor	lightColor;
		uint32	frameBufferSize[4];					// zw unuesd
		VEC3	lightDirection;
		float	padding;
		VEC3	camPos;
		float	time;
		float	nearZ, farZ;
		float	shadowMapTexelSize;
		float	shadowDepthBias;					// Improving shadow acne artifacts
		float	shadowSplitDists[4];
	};
	// Per-SubMaterial constant buffer: (b1)
	__declspec(align(16))
	struct cBufferMaterial
	{
		MAT44	matWorld;
		MAT44	matWorldIT;
		VEC4	specularGloss;
	};
	// Skined matrixs constant buffer: (b2)
	__declspec(align(16))
	struct cBufferSkin
	{
		MAT44	matSkin[100];
	};
	// Terrain constant buffer: (b3)
	__declspec(align(16))
	struct cBufferTerrain
	{
		PLANE	m_frustumPlane[4];

		// When distance is minimum, the tessellation is maximum
		// When distance is maximum, the tessellation is minimum
		float	minTessDist;
		float	maxTessDist;

		// Exponents for power of 2 tessellation.  The tessellation
		// range is [2^(gMinTess), 2^(gMaxTess)].  Since the maximum
		// tessellation is 64, this means gMaxTess can be at most 6
		// since 2^6 = 64.
		float	minTess;
		float	maxTess;

		VEC2	invTexSize;
		float	terrainCellSpace;
	};
	//------------------------------------------------------------------------------------
	class Renderer
	{
	public:
		Renderer();
		~Renderer();

	public:
		bool						Init(uint32 wndWidth, uint32 wndHeight, HWND hwnd);
		void						Update(float dt);
		void						ShutDown();
		uint32						GetWndWidth() const { return m_wndWidth; }
		uint32						GetWndHeight() const { return m_wndHeight; }
		RenderSystem*				GetRenderSys()		{ return m_pRenderSys; }

		void						DrawText(const STRING& text, const IPOINT& pos, const SColor& color);
		void						SetActiveTexture(int stage, Texture* pTexture);
		void						SetActiveSamplerState(int stage, SamplerState* sampler, bool bVS = false, bool bGS = false, bool bTessellation = false);
		void						UnbindTexture(Texture* tex);
		RenderTarget*				CreateRenderTarget(uint32 nWidth, uint32 nHeight, uint32 nDepth, ePixelFormat format, uint32 usage);

		SStateDepth&				GetCurDepthState()		{ return m_depthStates[m_iCurDepthState]; }
		SStateBlend&				GetCurBlendState()		{ return m_blendStates[m_iCurBlendState]; }
		SStateRaster&				GetCurRasterState()		{ return m_rasterStates[m_iCurRasterState]; }
		void						SetDepthState(SStateDepth* pState);
		void						SetBlendState(SStateBlend* pState);
		void						SetRasterState(SStateRaster* pState);
		void						SetViewport(const SViewport* vp);
		const SViewport&			GetViewport() const		{ return m_viewport; }
		void						RestoreViewport();

		// Enable/Disable clipping plane
		void						EnableClipPlane(bool bEnable, const PLANE* plane);
		bool						IsClipPlaneEnabled() const { return m_bClipPlaneEnabled; }

		cBufferMaterial&			GetMaterialCB()			{ return m_cBufferMaterial; }
		cBufferGlobal&				GetGlobalCB()			{ return m_cBufferGlobal; }
		cBufferSkin&				GetSkinCB()				{ return m_cBufferSkin; }
		cBufferTerrain&				GetTerrainCB()			{ return m_cBufferTerrain; }
		// Update constant buffer to device
		void						UpdateGlobalCBuffer(bool bTessellate = false, bool bCS = false, bool bGS = false);
		void						UpdateMaterialCBuffer(bool bTessellate = false, bool bCS = false, bool bGS = false);
		void						UpdateSkinCBuffer();
		void						UpdateTerrainCBuffer();

	private:
		RenderSystem*				m_pRenderSys;
		uint32						m_wndWidth, m_wndHeight;
		SViewport					m_viewport;
		Texture*					m_pTexture[MAX_TEXTURE_STAGE];

		cBufferGlobal				m_cBufferGlobal;
		cBufferMaterial				m_cBufferMaterial;
		cBufferSkin					m_cBufferSkin;
		cBufferTerrain				m_cBufferTerrain;
		ConstantBuffer*				m_pTerrainCB;
		ConstantBuffer*				m_pGlobalCBuf;
		ConstantBuffer*				m_pMaterialCB;
		ConstantBuffer*				m_pSkinCB;

		std::vector<SStateBlend>	m_blendStates;
		std::vector<SStateDepth>	m_depthStates;
		std::vector<SStateRaster>	m_rasterStates;
		uint32						m_iCurBlendState;
		uint32						m_iCurDepthState;
		uint32						m_iCurRasterState;

		Font*						m_pFont;
		bool						m_bClipPlaneEnabled;
	};
}

#endif // Renderer_h__