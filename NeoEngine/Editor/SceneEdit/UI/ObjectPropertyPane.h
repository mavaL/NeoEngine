/********************************************************************
	created:	8:1:2013   0:54
	filename: 	ObjectPropertyPane.h
	author:		maval
	
	purpose:	物体属性面板
*********************************************************************/

#ifndef ObjectPropertyPane_h__
#define ObjectPropertyPane_h__


#include "PropertiesPane.h"


class PropertyPaneObject : public CPropertiesPane
{
public:
	enum ePropertyID
	{
		////property range [propStart, propEnd)
		propStart = 0,
		////These are ReadOnly items
		propMeshName = propStart,
		////////These are Mutable items
		propMutableItemStart,
		propPosition = propMutableItemStart,
		propOrientation,
		propScale,
		propMutableItemEnd,
		propEnd = propMutableItemEnd,

		//SubItem
		propPosX, propPosY, propPosZ,
		propOrientX, propOrientY, propOrientZ, propOrientW,
		propScaleX, propScaleY, propScaleZ,
	};

public:
	PropertyPaneObject():CPropertiesPane() {}
	~PropertyPaneObject() {}

protected:
	virtual	bool	_OnCreate();
	virtual	void	_SetProperty(int nID);
	virtual	void	_UpdateProperty(int nID);
	virtual void	_EnableMutableProperty(BOOL bEnable);

	virtual int		_GetIDStart()			{ return propStart;				}
	virtual int		_GetIDEnd()				{ return propEnd;				}
	virtual int		_GetIDMutableStart()	{ return propMutableItemStart;	}
	virtual int		_GetIDMutableEnd()		{ return propMutableItemEnd;	}
};


#endif // ObjectPropertyPane_h__














