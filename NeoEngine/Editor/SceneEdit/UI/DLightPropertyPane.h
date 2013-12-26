/********************************************************************
	created:	23:3:2013   17:52
	filename	DLightPropertyPane.h
	author:		maval

	purpose:	挂接延迟光源
*********************************************************************/

#ifndef DLightPropertyPane_h__
#define DLightPropertyPane_h__

#include "AttachmentPropertyPane.h"

class PropertyPaneDLight : public PropertyPaneAttachment
{
public:
	enum ePropertyID
	{
		propDerivedStart = PropertyPaneAttachment::propMutableItemEnd,
		propLightType = propDerivedStart,			//光源类型
		propPointLightRadius,						//点光外径
		propPointLightAttenparam,					//点光衰减参数
		propDerivedEnd,

		//sub item
		propAttenConstant, propAttenLinear, propAttenQuadric
	};

public:
	PropertyPaneDLight():PropertyPaneAttachment() {}
	~PropertyPaneDLight() {}

protected:
	virtual	bool	_OnCreate();
	virtual	void	_SetProperty(int nID);
	virtual	void	_UpdateProperty(int nID);

	virtual int		_GetIDEnd()				{ return propDerivedEnd;	}
	virtual int		_GetIDMutableEnd()		{ return propDerivedEnd;	}
};


#endif // DLightPropertyPane_h__














