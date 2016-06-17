#include "stdafx.h"
#include "ObjMeshLoader.h"
#include "Mesh.h"

using namespace std;

namespace Neo
{
	std::vector<ObjMeshLoader::SVertCompare> ObjMeshLoader::m_vecComp;


	Mesh* ObjMeshLoader::LoadMesh(const STRING& filename, bool bFlipYZ)
	{
		std::ifstream file(filename.c_str());
		if(file.fail())
			return nullptr;

		Mesh* pMesh = new Mesh;

		//.obj格式每个物体的f各索引竟然是从前面所有物体来累加的.
		//艹,这些变量用来减去累加部分,太麻烦了
		DWORD nTotalPosCount, nTotalUvCount, nTotalNormalCount;
		nTotalPosCount = nTotalUvCount = nTotalNormalCount = 0;

		//each object
		for (;;)
		{
			if(file.eof())
				break;

			//获取数据量,避免反复分配存储空间
			DWORD nPos, nUv, nNormal, nFace;
			nPos = nUv = nNormal = nFace = 0;
			_PreReadObject(file, nPos, nUv, nNormal, nFace);

			vector<VEC3> vecPos(nPos);
			vector<VEC2> vecUv(nUv);
			vector<VEC3> vecNormal(nNormal);

			vector<SVertex> vecVertex;
			vector<DWORD> vecIndex(nFace * 3);
			vecVertex.reserve(nFace * 3);

			SubMesh* pSubMesh = new SubMesh;
			pMesh->AddSubMesh(pSubMesh);

			m_vecComp.clear();
			m_vecComp.reserve(nFace*3);

			//正式读取数据
			DWORD curVert, curUv, curNormal, curFace;
			curVert = curUv = curNormal = curFace = 0;
			STRING command;
			bool bFlush = false;

			//each command
			for(;;)
			{
				if(file.eof())
					break;

				file >> command;

				if (strcmp(command.c_str(), "v") == 0)
				{
					if(bFlush)
					{
						//解析下一个物体
						file.seekg(-1, ios_base::cur);
						break;
					}

					VEC3& pos = vecPos[curVert++];
					file >> pos.x >> pos.y >> pos.z;

					if (bFlipYZ)
					{
						Swap(pos.y, pos.z);
						pos.z = -pos.z;
					}
				}
				else if (strcmp(command.c_str(), "vt") == 0)
				{
					VEC2& uv = vecUv[curUv++];
					file >> uv.x >> uv.y;

					uv.y = 1 - uv.y;
				}
				else if (strcmp(command.c_str(), "vn") == 0)
				{
					VEC3& normal = vecNormal[curNormal++];
					file >> normal.x >> normal.y >> normal.z;

					if (bFlipYZ)
					{
						Swap(normal.y, normal.z);
						normal.z = -normal.z;
					}
				}
				else if (strcmp(command.c_str(), "f") == 0)
				{
					DWORD idxPos[3] = {0};
					DWORD idxUv[3] = {0};
					DWORD idxNormal[3] = {0};

					for (int i=0; i<3; ++i)
					{
						file >> idxPos[i];
						file.ignore(10, '/');
						file >> idxUv[i];
						file.ignore(10, '/');
						file >> idxNormal[i];

						//.obj索引是从1开始的
						idxPos[i] -= 1; idxUv[i] -= 1; idxNormal[i] -= 1;
						//正如前面所说,减去累加的部分
						idxPos[i] -= nTotalPosCount;
						idxUv[i] -= nTotalUvCount;
						idxNormal[i] -= nTotalNormalCount;

						SVertex vertex;
						vertex.pos		= vecPos[idxPos[i]];
						vertex.uv		= vecUv[idxUv[i]];
						vertex.normal	= vecNormal[idxNormal[i]];

						SVertCompare comp = { idxPos[i], idxUv[i], idxNormal[i] };

						DWORD idxVert;
						_DefineVertex(vertex, comp, vecVertex, idxVert);
						vecIndex.push_back(idxVert);
					}
				}
				else if (strcmp(command.c_str(), "g") == 0)
				{
					bFlush = true;
				}

				//读下一行
				file.ignore(1000, '\n');
			}

			pSubMesh->InitVertData(eVertexType_General, &vecVertex[0], vecVertex.size(), true);
			pSubMesh->InitIndexData(&vecIndex[0], vecIndex.size(), true);
			pSubMesh->BuildTangentVectors();

			nTotalPosCount += nPos;
			nTotalUvCount += nUv;
			nTotalNormalCount += nNormal;
		}
				
		return pMesh;
	}

	void ObjMeshLoader::_PreReadObject( std::ifstream& file, DWORD& nPos, DWORD& nUv, DWORD& nNormal, DWORD& nFace )
	{
		//记录下当前位置,返回的时候回退到该位置
		streamoff pos = file.tellg();

		bool bFlush = false;
		STRING command;
		while (1)
		{
			if(file.eof())
			{
				//NB: 到达末尾后需要清除状态再回退
				file.clear();
				file.seekg(pos, ios_base::beg);
				return;
			}

			file >> command;

			if (strcmp(command.c_str(), "v") == 0)
			{
				if(bFlush)
				{
					file.seekg(pos, ios_base::beg);
					return;
				}
				++nPos;
			}
			else if (strcmp(command.c_str(), "vt") == 0)
			{
				++nUv;
			}
			else if (strcmp(command.c_str(), "vn") == 0)
			{
				++nNormal;
			}
			else if (strcmp(command.c_str(), "f") == 0)
			{
				++nFace;
			}
			else if (strcmp(command.c_str(), "g") == 0)
			{
				bFlush = true;
			}

			//读下一行
			file.ignore(1000, '\n');
		}
	}

	void ObjMeshLoader::_DefineVertex(const SVertex& vert, const SVertCompare& comp, std::vector<SVertex>& vecVtx, DWORD& retIdx)
	{
		//.obj这种面的定义不是直接给顶点索引,而是各成分都可自由组合.所以构建m_verts要麻烦些.
		//1. 在当前顶点列表中查找,是否有相同顶点
		auto iter = std::find(m_vecComp.begin(), m_vecComp.end(), comp);

		if(iter != m_vecComp.end())
		{
			//2. 如果有,则可重复利用
			retIdx = std::distance(m_vecComp.begin(), iter);
		}
		else
		{
			//3. 如果没有,则插入新顶点到末尾
			vecVtx.push_back(vert);
			m_vecComp.push_back(comp);
			retIdx = vecVtx.size() - 1;
		}
	}
}
