#include "stdafx.h"
#include "MeshLoader.h"
#include "RenderObject.h"

using namespace std;

namespace Neo
{
	RenderObject* MeshLoader::LoadMesh( const STRING& filename )
	{
		TiXmlDocument doc;
		if(!doc.LoadFile(filename.c_str()))
		{
			throw std::logic_error("Failed to load mesh file!");
			return nullptr;
		}

		vector<SVertex> vecVertex;
		vector<DWORD> vecIndex;
		RenderObject* obj = new RenderObject;

		TiXmlElement* submeshNode = doc.FirstChildElement("mesh")->FirstChildElement("submeshes")->FirstChildElement("submesh");

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

			vecVertex.resize(nVert);

			TiXmlElement* vbNode = geometryNode->FirstChildElement("vertexbuffer");
			//check what we have..
			if(vbNode->Attribute("positions") != STRING("true"))
			{
				throw std::logic_error("Error, the .mesh file doesn't even have vertex position info!");
				return false;
			}
			if(vbNode->Attribute("normals") != STRING("true"))
			{
				throw std::logic_error("Error, the .mesh file doesn't even have vertex normal info!");
				return false;
			}

			int idx = 0;
			TiXmlElement* vertNode = vbNode->FirstChildElement("vertex");
			while (vertNode)
			{
				//position
				TiXmlElement* posNode = vertNode->FirstChildElement("position");
				double x, y, z;
				posNode->Attribute("x", &x);
				posNode->Attribute("y", &y);
				posNode->Attribute("z", &z);

				//normal
				TiXmlElement* normalNode = vertNode->FirstChildElement("normal");
				double nx, ny, nz;
				normalNode->Attribute("x", &nx);
				normalNode->Attribute("y", &ny);
				normalNode->Attribute("z", &nz);

				//uv
				TiXmlElement* uvNode = vertNode->FirstChildElement("texcoord");
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
		}

		obj->CreateVertexBuffer(&vecVertex[0], vecVertex.size(), true);
		obj->CreateIndexBuffer(&vecIndex[0], vecIndex.size(), true);
		
		return obj;
	}
}

