#include "stdafx.h"
#include "AmbientCube.h"
#include "D3D11Texture.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	AmbientCube::AmbientCube()
		: m_pTexIrradiance(nullptr)
		, m_pTexRadiance(nullptr)
	{
	}
	//------------------------------------------------------------------------------------
	AmbientCube::~AmbientCube()
	{
	}
	//------------------------------------------------------------------------------------
	bool AmbientCube::GenerateHDRCubeMap(const VEC3& pos, const STRING& filename)
	{
		return true;
	}
	//------------------------------------------------------------------------------------
	void AmbientCube::SetupCubeMap(D3D11Texture* pIEM, D3D11Texture* pREM)
	{
		m_pTexIrradiance = pIEM;
		m_pTexRadiance = pREM;

		pIEM->AddRef();
		pREM->AddRef();
	}
}

