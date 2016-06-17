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

		//.obj��ʽÿ�������f��������Ȼ�Ǵ�ǰ�������������ۼӵ�.
		//ܳ,��Щ����������ȥ�ۼӲ���,̫�鷳��
		DWORD nTotalPosCount, nTotalUvCount, nTotalNormalCount;
		nTotalPosCount = nTotalUvCount = nTotalNormalCount = 0;

		//each object
		for (;;)
		{
			if(file.eof())
				break;

			//��ȡ������,���ⷴ������洢�ռ�
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

			//��ʽ��ȡ����
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
						//������һ������
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

						//.obj�����Ǵ�1��ʼ��
						idxPos[i] -= 1; idxUv[i] -= 1; idxNormal[i] -= 1;
						//����ǰ����˵,��ȥ�ۼӵĲ���
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

				//����һ��
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
		//��¼�µ�ǰλ��,���ص�ʱ����˵���λ��
		streamoff pos = file.tellg();

		bool bFlush = false;
		STRING command;
		while (1)
		{
			if(file.eof())
			{
				//NB: ����ĩβ����Ҫ���״̬�ٻ���
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

			//����һ��
			file.ignore(1000, '\n');
		}
	}

	void ObjMeshLoader::_DefineVertex(const SVertex& vert, const SVertCompare& comp, std::vector<SVertex>& vecVtx, DWORD& retIdx)
	{
		//.obj������Ķ��岻��ֱ�Ӹ���������,���Ǹ��ɷֶ����������.���Թ���m_vertsҪ�鷳Щ.
		//1. �ڵ�ǰ�����б��в���,�Ƿ�����ͬ����
		auto iter = std::find(m_vecComp.begin(), m_vecComp.end(), comp);

		if(iter != m_vecComp.end())
		{
			//2. �����,����ظ�����
			retIdx = std::distance(m_vecComp.begin(), iter);
		}
		else
		{
			//3. ���û��,������¶��㵽ĩβ
			vecVtx.push_back(vert);
			m_vecComp.push_back(comp);
			retIdx = vecVtx.size() - 1;
		}
	}
}