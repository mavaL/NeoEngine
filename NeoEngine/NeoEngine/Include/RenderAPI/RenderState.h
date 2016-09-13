/********************************************************************
	created:	2016/08/12 15:59
	filename	RenderState.h
	author:		maval

	purpose:	Use hash to manage render states.
*********************************************************************/
#ifndef RenderState_h__
#define RenderState_h__

#include "Prerequiestity.h"
#include "RenderDefine.h"

namespace Neo
{
	enum eBlendFactor
	{
		eBlend_ZERO				= 1,
		eBlend_ONE				= 2,
		eBlend_SRC_COLOR		= 3,
		eBlend_INV_SRC_COLOR	= 4,
		eBlend_SRC_ALPHA		= 5,
		eBlend_INV_SRC_ALPHA	= 6,
		eBlend_DEST_ALPHA		= 7,
		eBlend_INV_DEST_ALPHA	= 8,
		eBlend_DEST_COLOR		= 9,
		eBlend_INV_DEST_COLOR	= 10,
		eBlend_SRC_ALPHA_SAT	= 11,
		eBlend_BLEND_FACTOR		= 14,
		eBlend_INV_BLEND_FACTOR = 15,
		eBlend_SRC1_COLOR		= 16,
		eBlend_INV_SRC1_COLOR	= 17,
		eBlend_SRC1_ALPHA		= 18,
		eBlend_INV_SRC1_ALPHA	= 19
	};

	enum eBlendOp
	{
		eBlendOp_ADD			= 1,
		eBlendOp_SUBTRACT		= 2,
		eBlendOp_REV_SUBTRACT	= 3,
		eBlendOp_MIN			= 4,
		eBlendOp_MAX			= 5
	};

	enum eCompareFunc
	{
		eCompareFunc_NEVER		= 1,
		eCompareFunc_LESS		= 2,
		eCompareFunc_EQUAL		= 3,
		eCompareFunc_LESS_EQUAL = 4,
		eCompareFunc_GREATER	= 5,
		eCompareFunc_NOT_EQUAL	= 6,
		eCompareFunc_GREATER_EQUAL = 7,
		eCompareFunc_ALWAYS		= 8
	};

	enum eStencilOp
	{
		eStencilOp_KEEP			= 1,
		eStencilOp_ZERO			= 2,
		eStencilOp_REPLACE		= 3,
		eStencilOp_INCR_SAT		= 4,
		eStencilOp_DECR_SAT		= 5,
		eStencilOp_INVERT		= 6,
		eStencilOp_INCR			= 7,
		eStencilOp_DECR			= 8
	};

	enum eCullMode
	{
		eCull_NONE	= 1,
		eCull_FRONT = 2,
		eCull_BACK	= 3
	};

	enum eFillMode
	{
		eFill_Wireframe = 2,
		eFill_Solid		= 3,
	};

	enum eSamplerFilter
	{
		SF_MIN_MAG_MIP_POINT = 0,
		SF_MIN_MAG_POINT_MIP_LINEAR = 0x1,
		SF_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x4,
		SF_MIN_POINT_MAG_MIP_LINEAR = 0x5,
		SF_MIN_LINEAR_MAG_MIP_POINT = 0x10,
		SF_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x11,
		SF_MIN_MAG_LINEAR_MIP_POINT = 0x14,
		SF_MIN_MAG_MIP_LINEAR = 0x15,
		SF_ANISOTROPIC = 0x55,
		SF_COMPARISON_MIN_MAG_MIP_POINT = 0x80,
		SF_COMPARISON_MIN_MAG_POINT_MIP_LINEAR = 0x81,
		SF_COMPARISON_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x84,
		SF_COMPARISON_MIN_POINT_MAG_MIP_LINEAR = 0x85,
		SF_COMPARISON_MIN_LINEAR_MAG_MIP_POINT = 0x90,
		SF_COMPARISON_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x91,
		SF_COMPARISON_MIN_MAG_LINEAR_MIP_POINT = 0x94,
		SF_COMPARISON_MIN_MAG_MIP_LINEAR = 0x95,
		SF_COMPARISON_ANISOTROPIC = 0xd5
	};

	enum eTextureAddressMode
	{
		eTextureAddressMode_WRAP		= 1,
		eTextureAddressMode_MIRROR		= 2,
		eTextureAddressMode_CLAMP		= 3,
		eTextureAddressMode_BORDER		= 4,
		eTextureAddressMode_MIRROR_ONCE = 5
	};

	//------------------------------------------------------------------------------------
	union RenderStateHash
	{
		uint64	SortVal;
		struct
		{
			uint32 Low;
			uint32 High;
		}i;
	};
	//------------------------------------------------------------------------------------
	struct SRenderTargetBlendDesc 
	{
		bool			BlendEnable;
		eBlendFactor	SrcBlend;
		eBlendFactor	DestBlend;
		eBlendOp		BlendOp;
		eBlendFactor	SrcBlendAlpha;
		eBlendFactor	DestBlendAlpha;
		eBlendOp		BlendOpAlpha;
		uint8			RenderTargetWriteMask;
	};
	//------------------------------------------------------------------------------------
	struct SStateStencilDesc 
	{
		eStencilOp		StencilFailOp;
		eStencilOp		StencilDepthFailOp;
		eStencilOp		StencilPassOp;
		eCompareFunc	StencilFunc;
	};
	//------------------------------------------------------------------------------------
	struct SStateDepthDesc 
	{
		bool			DepthEnable;
		bool			DepthWriteMask;
		eCompareFunc	DepthFunc;
		bool			StencilEnable;
		uint8			StencilReadMask;
		uint8			StencilWriteMask;
		SStateStencilDesc FrontFace;
		SStateStencilDesc BackFace;
	};
	//------------------------------------------------------------------------------------
	struct SStateBlendDesc 
	{
		bool					AlphaToCoverageEnable;
		bool					IndependentBlendEnable;
		SRenderTargetBlendDesc	RenderTarget[MAX_MRT_COUNT];
	};
	//------------------------------------------------------------------------------------
	struct SStateRasterDesc 
	{
		eFillMode		FillMode;
		eCullMode		CullMode;
		bool			FrontCounterClockwise;
		int				DepthBias;
		float			DepthBiasClamp;
		float			SlopeScaledDepthBias;
		bool			DepthClipEnable;
		bool			ScissorEnable;
		bool			MultisampleEnable;
		bool			AntialiasedLineEnable;
	};
	//------------------------------------------------------------------------------------
	struct SStateBlend
	{
		RenderStateHash nHashVal;
		SStateBlendDesc Desc;
		void*			pDeviceState;

		SStateBlend() { memset(this, 0, sizeof(*this)); }

		static uint64 GetHash(const SStateBlendDesc& InDesc)
		{
			RenderStateHash nHash;
			nHash.i.Low = (int)InDesc.AlphaToCoverageEnable |
				((int)InDesc.RenderTarget[0].BlendEnable << 1) | ((int)InDesc.RenderTarget[1].BlendEnable << 2) | ((int)InDesc.RenderTarget[2].BlendEnable << 3) | ((int)InDesc.RenderTarget[3].BlendEnable << 4) |
				(InDesc.RenderTarget[0].SrcBlend << 5) | (InDesc.RenderTarget[0].DestBlend << 10) |
				(InDesc.RenderTarget[0].SrcBlendAlpha << 15) | (InDesc.RenderTarget[0].DestBlendAlpha << 20) |
				(InDesc.RenderTarget[0].BlendOp << 25) | (InDesc.RenderTarget[0].BlendOpAlpha << 28);
			nHash.i.High = InDesc.RenderTarget[0].RenderTargetWriteMask |
				(InDesc.RenderTarget[1].RenderTargetWriteMask << 4) |
				(InDesc.RenderTarget[2].RenderTargetWriteMask << 8) |
				(InDesc.RenderTarget[3].RenderTargetWriteMask << 12) |
				(int)InDesc.IndependentBlendEnable << 16;

			return nHash.SortVal;
		}
	};
	//------------------------------------------------------------------------------------
	struct SStateRaster
	{
		uint64 nValuesHash;
		uint32 nHashVal;
		void* pDeviceState;
		SStateRasterDesc Desc;

		SStateRaster() {
			memset(this, 0, sizeof(*this));
			Desc.DepthClipEnable = true;
			Desc.FillMode = eFill_Solid;
			Desc.FrontCounterClockwise = false;
		}

		static uint32 GetHash(const SStateRasterDesc& InDesc)
		{
			uint32 nHash;
			nHash = InDesc.FillMode | (InDesc.CullMode << 2) |
				(InDesc.DepthClipEnable << 4) | (InDesc.FrontCounterClockwise << 5) |
				(InDesc.ScissorEnable << 6) | (InDesc.MultisampleEnable << 7) | (InDesc.AntialiasedLineEnable << 8) |
				(InDesc.DepthBias << 9);
			return nHash;
		}

		static uint64 GetValuesHash(const SStateRasterDesc& InDesc)
		{
			uint64 nHash;
			//avoid breaking strict alising rules
			union f32_u
			{
				float floatVal;
				unsigned int uintVal;
			};
			f32_u uDepthBiasClamp; uDepthBiasClamp.floatVal = InDesc.DepthBiasClamp;
			f32_u uSlopeScaledDepthBias; uSlopeScaledDepthBias.floatVal = InDesc.SlopeScaledDepthBias;
			nHash = (((uint64)uDepthBiasClamp.uintVal) |
				((uint64)uSlopeScaledDepthBias.uintVal) << 32);
			return nHash;
		}

	};
	//------------------------------------------------------------------------------------
	_inline uint32 sStencilState(const SStateStencilDesc& Desc)
	{
		uint32 nST = (Desc.StencilFailOp << 0) |
			(Desc.StencilDepthFailOp << 4) |
			(Desc.StencilPassOp << 8) |
			(Desc.StencilFunc << 12);
		return nST;
	}
	struct SStateDepth
	{
		uint64 nHashVal;
		SStateDepthDesc Desc;
		void* pDeviceState;
		SStateDepth() : nHashVal(), pDeviceState(nullptr)
		{
			Desc.DepthEnable = true;
			Desc.DepthWriteMask = true;
			Desc.DepthFunc = eCompareFunc_LESS;
			Desc.StencilEnable = false;
			Desc.StencilReadMask = 0xff;
			Desc.StencilWriteMask = 0xff;

			Desc.FrontFace.StencilFailOp = eStencilOp_KEEP;
			Desc.FrontFace.StencilDepthFailOp = eStencilOp_KEEP;
			Desc.FrontFace.StencilPassOp = eStencilOp_KEEP;
			Desc.FrontFace.StencilFunc = eCompareFunc_ALWAYS;

			Desc.BackFace = Desc.FrontFace;
		}

		static uint64 GetHash(const SStateDepthDesc& InDesc)
		{
			uint64 nHash;
			nHash = (InDesc.DepthEnable << 0) |
				(InDesc.DepthWriteMask << 1) |
				(InDesc.DepthFunc << 2) |
				(InDesc.StencilEnable << 6) |
				(InDesc.StencilReadMask << 7) |
				(InDesc.StencilWriteMask << 15) |
				(((uint64)sStencilState(InDesc.FrontFace)) << 23) |
				(((uint64)sStencilState(InDesc.BackFace)) << 39);
			return nHash;
		}
	};
	//------------------------------------------------------------------------------------
	struct SSamplerDesc
	{
		SSamplerDesc()
		{
			Filter = SF_MIN_MAG_MIP_LINEAR;
			AddressU = eTextureAddressMode_WRAP;
			AddressV = eTextureAddressMode_WRAP;
			AddressW = eTextureAddressMode_WRAP;
			MipLODBias = 0;
			MaxAnisotropy = 1;
			ComparisonFunc = eCompareFunc_NEVER;
			BorderColor[0] = 1.0f;
			BorderColor[1] = 1.0f;
			BorderColor[2] = 1.0f;
			BorderColor[3] = 1.0f;
			MinLOD = -3.402823466e+38F; // -FLT_MAX
			MaxLOD = 3.402823466e+38F; // FLT_MAX
		}

		eSamplerFilter		Filter;
		eTextureAddressMode AddressU;
		eTextureAddressMode AddressV;
		eTextureAddressMode AddressW;
		float				MipLODBias;
		uint32				MaxAnisotropy;
		eCompareFunc		ComparisonFunc;
		float				BorderColor[4];
		float				MinLOD;
		float				MaxLOD;
	};

	class SamplerState
	{
	public:
		virtual ~SamplerState() {}

		virtual	void	Apply(uint32 iStage, bool bVS, bool bGS, bool bTessellation) = 0;

		SSamplerDesc	m_desc;
	};
}


#endif // RenderState_h__