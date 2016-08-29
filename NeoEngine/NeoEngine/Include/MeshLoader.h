/********************************************************************
	created:	21:12:2013   10:06
	filename	MeshLoader.h
	author:		maval

	purpose:	Collada mesh loader
*********************************************************************/
#ifndef ColladaLoader_h__
#define ColladaLoader_h__

#include "Prerequiestity.h"

namespace Neo
{
	class MeshLoader
	{
	public:
		static Mesh*	LoadMesh(const STRING& filename, bool bMaterial = false, SkeletonAnim** pSkelAnim = nullptr);
		static bool		SaveMesh(Mesh* pMesh, const STRING& filename);

	private:
		static bool		_LoadVertex_General(TiXmlElement* vertNode, int nVert, SubMesh* pSubMesh, bool bNormalMap, DWORD* pIndexData, uint32 nIndex);
		static bool		_LoadVertex_BoneWeights(TiXmlElement* pNode, SubMesh* pSubMesh);
		static SkeletonAnim*		_LoadSkeleton(TiXmlElement* pSkelNode);
	};
}

#endif // ColladaLoader_h__