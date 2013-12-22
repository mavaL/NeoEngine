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
		static RenderObject*	LoadMesh(const STRING& filename);
	};
}

#endif // ColladaLoader_h__