/********************************************************************
	created:	2016/07/22 18:26
	filename	SkinModel.h
	author:		maval

	purpose:	Skined model.
*********************************************************************/
#ifndef SkinModel_h__
#define SkinModel_h__

#include "Prerequiestity.h"
#include "Entity.h"

namespace Neo
{
	class SkinModel : public Entity
	{
	public:
		SkinModel(Mesh* pMesh, SkeletonAnim* pSkel);
		~SkinModel();

	public:

	private:

	};
}


#endif // SkinModel_h__