#include "stdafx.h"
#include "MeshLoader.h"
#include "Mesh.h"
#include "MaterialManager.h"
#include "Material.h"
#include "SkinModel.h"

using namespace std;

namespace Neo
{
	Mesh* MeshLoader::LoadMesh(const STRING& filename, bool bMaterial, SkeletonAnim** pSkelAnim)
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

				TiXmlElement* pBoneWeightsNode = submeshNode->FirstChildElement("boneassignments");
				if (pBoneWeightsNode)
				{
					_LoadVertex_BoneWeights(pBoneWeightsNode, pSubMesh);
				}

			}

			submeshNode = submeshNode->NextSiblingElement("submesh");
		}

		TiXmlElement* pSkelNode = doc.FirstChildElement("mesh")->FirstChildElement("skeletonlink");
		if (pSkelNode)
		{
			if (pSkelAnim)
			{
				*pSkelAnim = _LoadSkeleton(pSkelNode);
			}
		}

		if (bSaveMesh)
		{
			SaveMesh(pMesh, filename);
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
			_AST(posNode);

			double x, y, z;
			posNode->Attribute("x", &x);
			posNode->Attribute("y", &y);
			posNode->Attribute("z", &z);

			//normal
			TiXmlElement* normalNode = pNode->FirstChildElement("normal");
			_AST(normalNode);

			double nx, ny, nz;
			normalNode->Attribute("x", &nx);
			normalNode->Attribute("y", &ny);
			normalNode->Attribute("z", &nz);

			//uv
			TiXmlElement* uvNode = pNode->FirstChildElement("texcoord");
			double texu = 0.0f, texv = 0.0f;
			if (uvNode)
			{
				uvNode->Attribute("u", &texu);
				uvNode->Attribute("v", &texv);
			}

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

			SVertex& vert = vecVertex[idx++];
			vert.pos.Set(x, y, z);
			vert.normal.Set(nx, ny, nz);
			vert.normal.Normalize();
			vert.uv.Set(texu, texv);

			pNode = pNode->NextSiblingElement("vertex");
		}

		TiXmlElement* pUVNode = vertNode->Parent()->NextSiblingElement("vertexbuffer");
		if (pUVNode)
		{
			idx = 0;
			TiXmlElement* pNode = pUVNode->FirstChildElement("vertex");
			while (pNode)
			{
				//uv
				TiXmlElement* uvNode = pNode->FirstChildElement("texcoord");
				_AST(uvNode);

				double texu = 0.0f, texv = 0.0f;

				uvNode->Attribute("u", &texu);
				uvNode->Attribute("v", &texv);

				SVertex& vert = vecVertex[idx++];
				vert.uv.Set(texu, texv);

				pNode = pNode->NextSiblingElement("vertex");
			}
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
				pSubMesh->InitTangentData(&vecTangent[0], vecTangent.size());
			}
		}
		else
		{
			pSubMesh->InitVertData(eVertexType_General, &vecVertex[0], nVert, true);
			pSubMesh->InitIndexData(pIndexData, nIndex, true);
		}

		return bSaveMesh;
	}
	//------------------------------------------------------------------------------------
	bool MeshLoader::SaveMesh(Mesh* pMesh, const STRING& filename)
	{
		bool bOk = true;
		::DeleteFileA(filename.c_str());

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

		bOk = doc->SaveFile(filename.c_str());

		return bOk;
	}
	//------------------------------------------------------------------------------------
	SkeletonAnim* MeshLoader::_LoadSkeleton(TiXmlElement* pSkelNode)
	{
		const char* skelFilename = pSkelNode->Attribute("name");
		_AST(skelFilename);

		TiXmlDocument doc;
		if (!doc.LoadFile(GetResPath(skelFilename).c_str()))
		{
			throw std::logic_error("Failed to load skeleton file!");
			return nullptr;
		}

		SkeletonAnim* pSkeleton = new SkeletonAnim;

		// Bone local transformation
		std::unordered_map<STRING, uint32> mapNameToId;
		TiXmlElement* pBoneNode = doc.FirstChildElement("skeleton")->FirstChildElement("bones")->FirstChildElement("bone");
		while (pBoneNode)
		{
			Bone* pBone = new Bone;
			int id;
			double fRadian, posx, posy, posz, axisx, axisy, axisz;

			pBone->m_name = pBoneNode->Attribute("name");
			pBoneNode->Attribute("id", &id);

			mapNameToId[pBone->m_name] = id;
			pBone->m_id = id;

			{
				TiXmlElement* posNode = pBoneNode->FirstChildElement("position");
				posNode->Attribute("x", &posx);
				posNode->Attribute("y", &posy);
				posNode->Attribute("z", &posz);
			}
			
			{
				TiXmlElement* rotNode = pBoneNode->FirstChildElement("rotation");
				TiXmlElement* axisNode = rotNode->FirstChildElement("axis");
				rotNode->Attribute("angle", &fRadian);
				axisNode->Attribute("x", &axisx);
				axisNode->Attribute("y", &axisy);
				axisNode->Attribute("z", &axisz);
			}

			pBone->m_matBindPose.FromAxisAngle(VEC3(axisx, axisy, axisz), Common::Radian_To_Angle(fRadian));
			pBone->m_matBindPose.SetTranslation(VEC3(posx, posy, posz));
			pBone->m_matLocal = pBone->m_matBindPose;

			pSkeleton->m_vecBones.push_back(pBone);
			pBoneNode = pBoneNode->NextSiblingElement("bone");
		}

		// Bone hierarchy
		TiXmlElement* pRelationNode = doc.FirstChildElement("skeleton")->FirstChildElement("bonehierarchy")->FirstChildElement("boneparent");
		while (pRelationNode)
		{
			const char* szChildName = pRelationNode->Attribute("bone");
			const char* szParentName = pRelationNode->Attribute("parent");

			auto iterChild = mapNameToId.find(szChildName);
			auto iterParent = mapNameToId.find(szParentName);
			_AST(iterChild != mapNameToId.end() && iterParent != mapNameToId.end());

			// Child points to parent.
			Bone* pChildBone = pSkeleton->m_vecBones[iterChild->second];
			Bone* pParentBone = pSkeleton->m_vecBones[iterParent->second];

			_AST(pChildBone->m_pParent == nullptr && "This bone already has a parent!");

			pChildBone->m_pParent = pParentBone;
			pParentBone->m_vecChilds.push_back(pChildBone);

			pRelationNode = pRelationNode->NextSiblingElement("boneparent");
		}

		// Anim tracks
		TiXmlElement* pAnimNode = doc.FirstChildElement("skeleton")->FirstChildElement("animations")->FirstChildElement("animation");
		while (pAnimNode)
		{
			AnimClip* pAnimClip = new AnimClip;
			
			pAnimClip->m_name = pAnimNode->Attribute("name");
			double len;
			pAnimNode->Attribute("length", &len);
			pAnimClip->m_fLength = len;

			TiXmlElement* pTrackNode = pAnimNode->FirstChildElement("tracks")->FirstChildElement("track");
			while (pTrackNode)
			{
				AnimTrack* pTrack = new AnimTrack;

				auto iter = mapNameToId.find(pTrackNode->Attribute("bone"));
				_AST(iter != mapNameToId.end());
				pTrack->m_boneId = iter->second;

				TiXmlElement* pKfNode = pTrackNode->FirstChildElement("keyframes")->FirstChildElement("keyframe");
				while (pKfNode)
				{
					AnimKeyFrame kf;
					double fRadian, posx, posy, posz, axisx, axisy, axisz, time;

					pKfNode->Attribute("time", &time);
					kf.m_fTime = time;

					{
						TiXmlElement* posNode = pKfNode->FirstChildElement("translate");
						posNode->Attribute("x", &posx);
						posNode->Attribute("y", &posy);
						posNode->Attribute("z", &posz);
					}

					{
						TiXmlElement* rotNode = pKfNode->FirstChildElement("rotate");
						TiXmlElement* axisNode = rotNode->FirstChildElement("axis");
						rotNode->Attribute("angle", &fRadian);
						axisNode->Attribute("x", &axisx);
						axisNode->Attribute("y", &axisy);
						axisNode->Attribute("z", &axisz);
					}

					kf.rotate.FromAxisAngle(VEC3(axisx, axisy, axisz), Common::Radian_To_Angle(fRadian));
					kf.translate.Set(posx, posy, posz);

					pTrack->m_vecKeyFrames.push_back(kf);
					pKfNode = pKfNode->NextSiblingElement("keyframe");
				}

				pAnimClip->m_tracks.push_back(pTrack);
				pTrackNode = pTrackNode->NextSiblingElement("track");
			}

			pSkeleton->m_vecAnims.push_back(pAnimClip);
			pAnimNode = pAnimNode->NextSiblingElement("animation");
		}

		return pSkeleton;
	}
	//------------------------------------------------------------------------------------
	bool MeshLoader::_LoadVertex_BoneWeights(TiXmlElement* pNode, SubMesh* pSubMesh)
	{
		TiXmlElement* pVertBoneWeightNode = pNode->FirstChildElement("vertexboneassignment");
		uint32 idx = 0;
		std::vector<SVertexBoneWeight> vecBoneWeights(pSubMesh->GetVertData().GetVertCount());

		while (pVertBoneWeightNode)
		{
			int iVertIndex, iBoneIndex;
			double fWeight;

			pVertBoneWeightNode->Attribute("vertexindex", &iVertIndex);
			pVertBoneWeightNode->Attribute("boneindex", &iBoneIndex);
			pVertBoneWeightNode->Attribute("weight", &fWeight);

			SVertexBoneWeight& vert = vecBoneWeights[iVertIndex];
			for (int i = 0; i < 4; ++i)
			{
				// Find an empty slot.
				if (vert.boneIndices[i] == INVALID_BONE_INDEX)
				{
					vert.boneIndices[i] = (uint8)iBoneIndex;
					vert.boneWeight[i] = fWeight;
					break;
				}
			}

			pVertBoneWeightNode = pVertBoneWeightNode->NextSiblingElement("vertexboneassignment");
			++idx;
		}

		pSubMesh->InitBoneWeights(&vecBoneWeights[0], vecBoneWeights.size());

		return true;
	}

}

