#include "stdafx.h"
#include "Tree.h"
#include "SceneManager.h"
#include "D3D11Texture.h"
#include "Mesh.h"

namespace Neo
{
	Material* Tree::s_pLeafMaterial		=	nullptr;
	Material* Tree::s_pFrondMaterial	=	nullptr;
	Material* Tree::s_pBranchMaterial	=	nullptr;

	//------------------------------------------------------------------------------------
	Tree::Tree(Mesh* pMesh)
		:Entity(pMesh)
	{
		static bool bInitMaterial = false;
		if (!bInitMaterial)
		{
			s_pBranchMaterial = new Material;
			s_pFrondMaterial = new Material;
			s_pLeafMaterial = new Material(eVertexType_TreeLeaf);

			s_pBranchMaterial->SetTexture(0, new D3D11Texture(GetResPath("Tree\\FanPalmBark.dds")));
			s_pBranchMaterial->InitShader(GetResPath("Tree\\Branch.hlsl"), GetResPath("Tree\\Branch.hlsl"), eShader_Opaque);

			s_pFrondMaterial->SetTexture(0, new D3D11Texture(GetResPath("Tree\\CompositeMap_Diffuse.dds")));
			s_pFrondMaterial->InitShader(GetResPath("Tree\\Frond.hlsl"), GetResPath("Tree\\Frond.hlsl"), eShader_Opaque);
			s_pFrondMaterial->SetCullMode(D3D11_CULL_NONE);

			s_pLeafMaterial->SetTexture(0, new D3D11Texture(GetResPath("Tree\\CompositeMap_Diffuse.dds")));
			s_pLeafMaterial->InitShader(GetResPath("Tree\\Leaf.hlsl"), GetResPath("Tree\\Leaf.hlsl"), eShader_Opaque);
			s_pLeafMaterial->SetCullMode(D3D11_CULL_NONE);

			bInitMaterial = true;
		}

		_InitMaterial();

		SetCastShadow(false);
		SetReceiveShadow(false);
	}
	//------------------------------------------------------------------------------------
	Tree::~Tree()
	{
	}
	//------------------------------------------------------------------------------------
	void Tree::_InitMaterial()
	{
		//for (uint32 i=0; i<m_pMesh->GetSubMeshCount(); ++i)
		//{
		//	const STRING& name = m_pMesh->GetSubMesh(i)->GetName();
		//	if (name == "branch")
		//		SetMaterial(i, s_pBranchMaterial);
		//	else if (name == "frond")
		//		SetMaterial(i, s_pFrondMaterial);
		//	else if (name == "leaf")
		//		SetMaterial(i, s_pLeafMaterial);
		//	else
		//		{ assert(0); }

		//}
	}
	//------------------------------------------------------------------------------------
	void Tree::Update()
	{
		Entity::Update();
	}
	//------------------------------------------------------------------------------------
	void Tree::Render()
	{
		Entity::Render();
	}
}

