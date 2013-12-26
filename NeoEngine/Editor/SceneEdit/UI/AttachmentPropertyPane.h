/********************************************************************
	created:	11:3:2013   1:52
	filename: 	AttachmentPropertyPane.h
	author:		maval
	
	purpose:	模型attachment属性基类
				attachment即对应M3模型在max中的attachment节点
*********************************************************************/

#ifndef AttachmentPropertyPane_h__
#define AttachmentPropertyPane_h__

#include "PropertiesPane.h"

class PropertyPaneAttachment : public CPropertiesPane
{
public:
	enum ePropertyID
	{
		////property range [propStart, propEnd)
		propStart = 0,
		////////These are Mutable items					
		propMutableItemStart = propStart,
		propLocator = propMutableItemStart,				//挂接点				
		propStartTime,									//特效相对动画开始的时间
		propLifeTime,									//特效时长
		propMutableItemEnd,
		propEnd = propMutableItemEnd,
	};

public:
	PropertyPaneAttachment():CPropertiesPane() {}
	~PropertyPaneAttachment() = 0;

protected:
	virtual	bool	_OnCreate();
	virtual	void	_SetProperty(int nID);
	virtual	void	_UpdateProperty(int nID);

	virtual int		_GetIDStart()			{ return propStart;				}
	virtual int		_GetIDEnd()				{ return propEnd;				}
	virtual int		_GetIDMutableStart()	{ return propMutableItemStart;	}
	virtual int		_GetIDMutableEnd()		{ return propMutableItemEnd;	}
};


#endif // AttachmentPropertyPane_h__














