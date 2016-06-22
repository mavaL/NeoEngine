#include "stdafx.h"
#include "MeshLoader.h"
#include "Mesh.h"


using namespace std;

namespace Neo
{
	Mesh* MeshLoader::LoadMesh( const STRING& filename )
	{
		TiXmlDocument doc;
		if(!doc.LoadFile(filename.c_str()))
		{
			throw std::logic_error("Failed to load mesh file!");
			return nullptr;
		}

		Mesh* pMesh = new Mesh;

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

				pSubMesh->InitIndexData(&vecIndex[0], vecIndex.size(), true);
			}

			//读取顶点数据
			{
				TiXmlElement* geometryNode = submeshNode->FirstChildElement("geometry");
				int nVert = 0;
				geometryNode->Attribute("vertexcount", &nVert);

				TiXmlElement* vertNode = geometryNode->FirstChildElement("vertexbuffer")->FirstChildElement("vertex");

				const char* szVertType = submeshNode->Attribute("vertextype");

				_LoadVertex_General(vertNode, nVert, pSubMesh);
			}

			submeshNode = submeshNode->NextSiblingElement("submesh");
		}
		
		return pMesh;
	}
	//------------------------------------------------------------------------------------
	void MeshLoader::_LoadVertex_General( TiXmlElement* vertNode, int nVert, SubMesh* pSubMesh )
	{
		int idx = 0;
		std::vector<SVertex> vecVertex(nVert);

		while (vertNode)
		{
			//position
			TiXmlElement* posNode = vertNode->FirstChildElement("position");
			assert(posNode);

			double x, y, z;
			posNode->Attribute("x", &x);
			posNode->Attribute("y", &y);
			posNode->Attribute("z", &z);

			//normal
			TiXmlElement* normalNode = vertNode->FirstChildElement("normal");
			assert(normalNode);

			double nx, ny, nz;
			normalNode->Attribute("x", &nx);
			normalNode->Attribute("y", &ny);
			normalNode->Attribute("z", &nz);

			//uv
			TiXmlElement* uvNode = vertNode->FirstChildElement("texcoord");
			assert(uvNode);

			double texu, texv;
			if(uvNode)
			{
				uvNode->Attribute("u", &texu);
				uvNode->Attribute("v", &texv);
			}

			SVertex& vert = vecVertex[idx++];
			vert.pos.Set(x,y,z);
			vert.normal.Set(nx,ny,nz);
			vert.normal.Normalize();
			if(uvNode)
				vert.uv.Set(texu, texv);

			vertNode = vertNode->NextSiblingElement("vertex");
		}

		pSubMesh->InitVertData(eVertexType_General, &vecVertex[0], nVert, true);
	}
}

