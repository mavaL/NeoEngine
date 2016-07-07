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
		static Mesh*	LoadMesh(const STRING& filename, bool bMaterial = false);

	private:
		static void		_LoadVertex_General(TiXmlElement* vertNode, int nVert, SubMesh* pSubMesh);
	};
}

#endif // ColladaLoader_h__