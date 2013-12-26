/********************************************************************
	created:	17:3:2013   11:37
	filename	Operation.h
	author:		maval

	purpose:	编辑器Action产生的都是可撤销的操作,
				操作具有transaction性质,可包含多个原子操作
*********************************************************************/

#ifndef Operation_h__
#define Operation_h__

#include "Manipulator/ManipulatorObject.h"

///操作基类
class Operation
{
public:
	Operation() {}
	virtual ~Operation() {}

public:
	void	Undo() { _ApplyUndoRedo(true); }
	void	Redo() { _ApplyUndoRedo(false); }
	//virtual void RebindEntity(Ogre::Entity* pOld, Ogre::Entity* pNew) {} 

protected:
	virtual void	_ApplyUndoRedo(bool bReverse) = 0;
};

///物体创建删除
class opObjectAddRemove : public Operation
{
public:
	opObjectAddRemove() {}
	~opObjectAddRemove() {}

	struct SOpItem
	{
		bool bAddOrRemove;
		//Ogre::Entity* ent;
		SObjectInfo	objInfo;
	};

	void			AddOp(const SOpItem& item) { m_ops.push_back(item); }

protected:
	virtual void	_ApplyUndoRedo(bool bReverse);

private:
	typedef std::vector<SOpItem>	OpList;
	OpList			m_ops;
};

///物体编辑
class opObjectEdit : public Operation
{
public:
	opObjectEdit() {}
	~opObjectEdit() {}

	struct SOpItem 
	{
//		Ogre::Entity* pEntity;
		ManipulatorObject::eEditMode type;
// 		Ogre::Any oldValue;
// 		Ogre::Any newValue;
	};

	void			AddOp(const SOpItem& item) { m_ops.push_back(item); }
	//virtual void	RebindEntity(Ogre::Entity* pOld, Ogre::Entity* pNew);

protected:
	virtual void	_ApplyUndoRedo(bool bReverse);

private:
	typedef std::vector<SOpItem>	OpList;
	OpList			m_ops;
};

#endif // Operation_h__