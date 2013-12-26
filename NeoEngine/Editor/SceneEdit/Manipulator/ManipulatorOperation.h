/********************************************************************
	created:	17:3:2013   11:34
	filename	ManipulatorOperation.h
	author:		maval

	purpose:	Undo/Redo管理器
*********************************************************************/
#ifndef ManipulatorOperation_h__
#define ManipulatorOperation_h__

class Operation;
//----------------------------------------------------------------------------------------
class ManipulatorOperation
{
public:
	ManipulatorOperation();
	~ManipulatorOperation();

public:
	template<class T>
	T*				NewOperation();
	//一个操作发生了,同时保存它的正反操作
	void			Commit(Operation* newOp);
	void			Undo();
	void			Redo();
	//有的Operation直接保存了物体指针,显然物体被删除再回退,就已失效了,这里重新做绑定
//	void			RebindEntity(Ogre::Entity* pOld, Ogre::Entity* pNew);
	int				SnapshotMake();
	bool			SnapshotCheck(int snapshot);

private:
	int				m_snapshot;		//根据快照确定是否提示用户需要保存场景
	typedef std::list<Operation*>	OperationStack;
	OperationStack	m_lstUndo;
	OperationStack	m_lstRedo;
};

template<class T>
T* ManipulatorOperation::NewOperation()
{
	return new T;
}

#endif // ManipulatorOperation_h__





