#include "stdafx.h"
#include "MaterialManager.h"
#include "Material.h"
#include "Texture.h"
#include "Renderer.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	MaterialManager::MaterialManager()
	{
		Material* pMaterial = NewMaterial("Mtl_DefaultWhite");
		pMaterial->SetTexture(0, g_env.pRenderer->GetRenderSys()->LoadTexture(GetResPath("White1x1.dds")));
		pMaterial->InitShader(("Opaque"), eShader_Opaque);
	}
	//------------------------------------------------------------------------------------
	MaterialManager::~MaterialManager()
	{
		for (auto iter = m_Mtls.begin(); iter != m_Mtls.end(); ++iter)
		{
			SAFE_RELEASE(iter->second);
		}
		m_Mtls.clear();
	}
	//------------------------------------------------------------------------------------
	Material* MaterialManager::NewMaterial(const STRING& name, eVertexType type, uint32 nSubMtl /*= 1*/)
	{
		auto iter = m_Mtls.find(name);
		_AST(iter == m_Mtls.end());

		Material* pMtl = new Material(name, type, nSubMtl);

		m_Mtls.insert(std::make_pair(name, pMtl));

		return pMtl;
	}
	//------------------------------------------------------------------------------------
	Material* MaterialManager::GetMaterial(const STRING& name)
	{
		auto iter = m_Mtls.find(name);
		_AST(iter != m_Mtls.end());

		return iter->second;
	}
	//------------------------------------------------------------------------------------
	void MaterialManager::RemoveMaterial(const STRING& name)
	{
		auto iter = m_Mtls.find(name);
		_AST(iter != m_Mtls.end());

		m_Mtls.erase(iter);
	}
}

