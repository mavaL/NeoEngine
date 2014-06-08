/********************************************************************
	created:	5:6:2014   23:52
	filename	Tree.h
	author:		maval

	purpose:	Tree rendering learn from SpeedTree.
*********************************************************************/
#ifndef Tree_h__
#define Tree_h__

#include "Prerequiestity.h"
#include "Entity.h"

namespace Neo
{
	class Tree : public Entity
	{
	public:
		Tree(Mesh* pMesh);
		virtual ~Tree();

	public:
		virtual void	Update();
		virtual void	Render(Material* pMaterial = nullptr);

	private:
		void			_InitMaterial();

		static Material*	s_pBranchMaterial;
		static Material*	s_pFrondMaterial;
		static Material*	s_pLeafMaterial;
	};
}

#endif // Tree_h__

