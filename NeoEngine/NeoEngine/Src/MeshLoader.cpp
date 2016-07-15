#include "stdafx.h"
#include "MeshLoader.h"
#include "Mesh.h"
#include "MaterialManager.h"
#include "Material.h"

using namespace std;

namespace Neo
{
	Mesh* MeshLoader::LoadMesh(const STRING& filename, bool bMaterial)
	{
		TiXmlDocument doc;
		if(!doc.LoadFile(filename.c_str()))
		{
			throw std::logic_error("Failed to load mesh file!");
			return nullptr;
		}

		bool bSaveMesh = false;
		Mesh* pMesh = new Mesh(filename.c_str());

		// For each submesh
		TiXmlElement* submeshNode = doc.FirstChildElement("mesh")->FirstChildElement("submeshes")->FirstChildElement("submesh");

		while (submeshNode)
		{
			vector<DWORD> vecIndex;

			SubMesh* pSubMesh = new SubMesh;
			pMesh->AddSubMesh(pSubMesh);

			const char* szName = submeshNode->Attribute("name");
			if(szName) 
				pSubMesh->SetName(szName);

			bool bNormalMap = false;
			if (bMaterial)
			{
				const char* szMtlName = submeshNode->Attribute("material");
				_AST(szMtlName);

				Material* pMaterial = MaterialManager::GetSingleton().GetMaterial(szMtlName);
				pMesh->SetMaterial(pMaterial);

				if (pMaterial->GetVertexType() == eVertexType_NormalMap)
				{
					bNormalMap = true;
				}
			}

			//读取面信息
			{
				TiXmlElement* facesNode = submeshNode->FirstChildElement("faces");
				int nFace = 0;
				facesNode->Attribute("count", &nFace);

				vecIndex.resize(nFace*3);

				int idx = 0;
				TiXmlElement* faceNode = facesNode->FirstChildElement("face");
				while (faceNode)
				{
					int v1, v2, v3;
					faceNode->Attribute("v1", &v1);
					faceNode->Attribute("v2", &v2);
					faceNode->Attribute("v3", &v3);

					vecIndex[idx++] = v1;
					vecIndex[idx++] = v2;
					vecIndex[idx++] = v3;

					faceNode = faceNode->NextSiblingElement("face");
				}
			}

			//读取顶点数据
			{
				TiXmlElement* geometryNode = submeshNode->FirstChildElement("geometry");
				int nVert = 0;
				geometryNode->Attribute("vertexcount", &nVert);

				TiXmlElement* vertNode = geometryNode->FirstChildElement("vertexbuffer")->FirstChildElement("vertex");

				bSaveMesh = _LoadVertex_General(vertNode, nVert, pSubMesh, bNormalMap, &vecIndex[0], vecIndex.size());
			}

			submeshNode = submeshNode->NextSiblingElement("submesh");
		}

		if (bSaveMesh)
		{
			SaveMesh(pMesh);
		}
		
		return pMesh;
	}
	//------------------------------------------------------------------------------------
	bool MeshLoader::_LoadVertex_General(TiXmlElement* vertNode, int nVert, SubMesh* pSubMesh, bool bNormalMap, DWORD* pIndexData, uint32 nIndex)
	{
		int idx = 0;
		std::vector<SVertex> vecVertex(nVert);
		std::vector<STangentData> vecTangent;

		// Load tangent basis from mesh file.
		if (vertNode->FirstChildElement("tangent"))
		{
			vecTangent.resize(nVert);
		}

		TiXmlElement* pNode = vertNode;
		while (pNode)
		{
			//position
			TiXmlElement* posNode = pNode->FirstChildElement("position");
			assert(posNode);

			double x, y, z;
			posNode->Attribute("x", &x);
			posNode->Attribute("y", &y);
			posNode->Attribute("z", &z);

			//normal
			TiXmlElement* normalNode = pNode->FirstChildElement("normal");
			assert(normalNode);

			double nx, ny, nz;
			normalNode->Attribute("x", &nx);
			normalNode->Attribute("y", &ny);
			normalNode->Attribute("z", &nz);

			//uv
			TiXmlElement* uvNode = pNode->FirstChildElement("texcoord");
			assert(uvNode);

			// tangent, binormal
			TiXmlElement* tNode = pNode->FirstChildElement("tangent");
			TiXmlElement* bNode = pNode->FirstChildElement("binormal");

			double tx, ty, tz, tw, bx, by, bz;
			if (tNode && bNode)
			{
				tNode->Attribute("x", &tx);
				tNode->Attribute("y", &ty);
				tNode->Attribute("z", &tz);
				tNode->Attribute("w", &tw);

				bNode->Attribute("x", &bx);
				bNode->Attribute("y", &by);
				bNode->Attribute("z", &bz);

				vecTangent[idx].tangent.Set(tx, ty, tz, tw);
				vecTangent[idx].binormal.Set(bx, by, bz);
			}

			double texu, texv;
			if(uvNode)
			{
				uvNode->Attribute("u", &texu);
				uvNode->Attribute("v", &texv);
			}

			SVertex& vert = vecVertex[idx++];
			vert.pos.Set(x, y, z);
			vert.normal.Set(nx, ny, nz);
			vert.normal.Normalize();
			if (uvNode)
				vert.uv.Set(texu, texv);

			pNode = pNode->NextSiblingElement("vertex");
		}

		bool bSaveMesh = false;
		if (bNormalMap)
		{
			pSubMesh->InitVertData(eVertexType_NormalMap, &vecVertex[0], vecVertex.size(), true);
			pSubMesh->InitIndexData(pIndexData, nIndex, true);

			if (vecTangent.empty())
			{
				pSubMesh->BuildTangents();
				bSaveMesh = true;
			} 
			else
			{
				pSubMesh->InitTangentData(&vecTangent[0], vecTangent.size(), true);
			}
		}
		else
		{
			pSubMesh->InitVertData(eVertexType_General, &vecVertex[0], nVert, true);
			pSubMesh->InitIndexData(pIndexData, nIndex, true);
		}

		return bSaveMesh;
	}

	bool MeshLoader::SaveMesh(Mesh* pMesh)
	{
		const char* filename = pMesh->GetFileName().c_str();
		bool bOk = ::DeleteFileA(filename);

		TiXmlDocument* doc = new TiXmlDocument;
		TiXmlElement* pMeshNode = new TiXmlElement("mesh");
		TiXmlElement* pSubMeshesNode = new TiXmlElement("submeshes");

		doc->LinkEndChild(pMeshNode);
		pMeshNode->LinkEndChild(pSubMeshesNode);

		const STRING& matName = pMesh->GetMaterial()->GetName();

		for (uint32 iSubMesh = 0; iSubMesh < pMesh->GetSubMeshCount(); ++iSubMesh)
		{
			SubMesh* pSubMesh = pMesh->GetSubMesh(iSubMesh);
			TiXmlElement* pSubMeshNode = new TiXmlElement("submesh");

			pSubMeshNode->SetAttribute("material", matName.c_str());

			// Save index data
			const DWORD nIndex = pSubMesh->GetIndexCount();
			const DWORD* pIndex = pSubMesh->GetIndexData();

			TiXmlElement* pFacesNode = new TiXmlElement("faces");
			pFacesNode->SetAttribute("count", nIndex / 3);
			pSubMeshNode->LinkEndChild(pFacesNode);

			for (uint32 iFace = 0; iFace < nIndex / 3; ++iFace)
			{
				TiXmlElement* pFaceNode = new TiXmlElement("face");
				pFaceNode->SetAttribute("v1", pIndex[iFace * 3 + 0]);
				pFaceNode->SetAttribute("v2", pIndex[iFace * 3 + 1]);
				pFaceNode->SetAttribute("v3", pIndex[iFace * 3 + 2]);
				pFacesNode->LinkEndChild(pFaceNode);
			}

			// Save vertex data
			const uint32 nVertex = pSubMesh->GetVertData().GetVertCount();
			const SVertex* pVertex = pSubMesh->GetVertData().GetVertex();
			const STangentData* pTangent = pSubMesh->GetVertData().GetTangent();

			TiXmlElement* pGeomNode = new TiXmlElement("geometry");
			TiXmlElement* pVertBufNode = new TiXmlElement("vertexbuffer");
			pGeomNode->SetAttribute("vertexcount", nVertex);
			pSubMeshNode->LinkEndChild(pGeomNode);
			pGeomNode->LinkEndChild(pVertBufNode);

			for (uint32 iVert = 0; iVert < nVertex; ++iVert)
			{
				TiXmlElement* pVertNode = new TiXmlElement("vertex");
				TiXmlElement* pPosNode = new TiXmlElement("position");
				TiXmlElement* pNormalNode = new TiXmlElement("normal");
				TiXmlElement* pUvNode = new TiXmlElement("texcoord");
				TiXmlElement* pTNode = new TiXmlElement("tangent");
				TiXmlElement* pBNode = new TiXmlElement("binormal");

				pPosNode->SetDoubleAttribute("x", pVertex[iVert].pos.x);
				pPosNode->SetDoubleAttribute("y", pVertex[iVert].pos.y);
				pPosNode->SetDoubleAttribute("z", pVertex[iVert].pos.z);

				pNormalNode->SetDoubleAttribute("x", pVertex[iVert].normal.x);
				pNormalNode->SetDoubleAttribute("y", pVertex[iVert].normal.y);
				pNormalNode->SetDoubleAttribute("z", pVertex[iVert].normal.z);

				pUvNode->SetDoubleAttribute("u", pVertex[iVert].uv.x);
				pUvNode->SetDoubleAttribute("v", pVertex[iVert].uv.y);

				pTNode->SetDoubleAttribute("x", pTangent[iVert].tangent.x);
				pTNode->SetDoubleAttribute("y", pTangent[iVert].tangent.y);
				pTNode->SetDoubleAttribute("z", pTangent[iVert].tangent.z);
				pTNode->SetDoubleAttribute("w", pTangent[iVert].tangent.w);

				pBNode->SetDoubleAttribute("x", pTangent[iVert].binormal.x);
				pBNode->SetDoubleAttribute("y", pTangent[iVert].binormal.y);
				pBNode->SetDoubleAttribute("z", pTangent[iVert].binormal.z);

				pVertNode->LinkEndChild(pPosNode);
				pVertNode->LinkEndChild(pNormalNode);
				pVertNode->LinkEndChild(pUvNode);
				pVertNode->LinkEndChild(pTNode);
				pVertNode->LinkEndChild(pBNode);
				pVertBufNode->LinkEndChild(pVertNode);
			}

			pSubMeshesNode->LinkEndChild(pSubMeshNode);

		}

		bOk = doc->SaveFile(filename);

		return bOk;
	}

}

