/********************************************************************
	created:	30:4:2013   13:04
	filename	EntityEffectPropertyPane.h
	author:		maval

	purpose:	挂接带动画模型
*********************************************************************/

#ifndef EntityEffectPropertyPane_h__
#define EntityEffectPropertyPane_h__

#include "AttachmentPropertyPane.h"

class PropertyPaneEntityEffect : public PropertyPaneAttachment
{
public:
	enum ePropertyID
	{
		propDerivedStart = PropertyPaneAttachment::propMutableItemEnd,
		propMeshName = propDerivedStart,			
		propAnimName,						
		propDerivedEnd
	};

public:
	PropertyPaneEntityEffect():PropertyPaneAttachment() {}
	~PropertyPaneEntityEffect() {}

protected:
	virtual	bool	_OnCreate();
	virtual	void	_SetProperty(int nID);
	virtual	void	_UpdateProperty(int nID);

	virtual int		_GetIDEnd()				{ return propDerivedEnd;	}
	virtual int		_GetIDMutableEnd()		{ return propDerivedEnd;	}
};


#endif // EntityEffectPropertyPane_h__














