#include "stdafx.h"
#include "ManipulatorOperation.h"
#include "Operation/Operation.h"

ManipulatorOperation::ManipulatorOperation()
:m_snapshot(0)
{

}

ManipulatorOperation::~ManipulatorOperation()
{
	std::for_each(m_lstUndo.begin(), m_lstUndo.end(), std::default_delete<Operation>());
	std::for_each(m_lstRedo.begin(), m_lstRedo.end(), std::default_delete<Operation>());
}

void ManipulatorOperation::Undo()
{
	if (!m_lstUndo.empty())
	{
		Operation* op = m_lstUndo.back();
		op->Undo();
		m_lstUndo.pop_back();
		m_lstRedo.push_back(op);
		++m_snapshot;
	}
}

void ManipulatorOperation::Redo()
{
	if (!m_lstRedo.empty())
	{
		Operation* op = m_lstRedo.back();
		op->Redo();
		m_lstRedo.pop_back();
		m_lstUndo.push_back(op);
		++m_snapshot;
	}
}

void ManipulatorOperation::Commit( Operation* newOp )
{
	m_lstRedo.clear();
	m_lstUndo.push_back(newOp);
	++m_snapshot;
}

// void ManipulatorOperation::RebindEntity( Ogre::Entity* pOld, Ogre::Entity* pNew )
// {
// 	for(auto iter=m_lstUndo.begin(); iter!=m_lstUndo.end(); ++iter)
// 		(*iter)->RebindEntity(pOld, pNew);
// 	for(auto iter=m_lstRedo.begin(); iter!=m_lstRedo.end(); ++iter)
// 		(*iter)->RebindEntity(pOld, pNew);
// }

int ManipulatorOperation::SnapshotMake()
{
	return m_snapshot;
}

bool ManipulatorOperation::SnapshotCheck( int snapshot )
{
	return m_snapshot == snapshot;
}

