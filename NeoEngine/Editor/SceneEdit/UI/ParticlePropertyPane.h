/********************************************************************
	created:	23:3:2013   17:40
	filename	ParticlePropertyPane.h
	author:		maval

	purpose:	粒子挂接特效属性
*********************************************************************/

#ifndef ParticlePropertyPane_h__
#define ParticlePropertyPane_h__

#include "AttachmentPropertyPane.h"

class PropertyPaneParticle : public PropertyPaneAttachment
{
public:
	enum ePropertyID
	{
		propDerivedStart = PropertyPaneAttachment::propMutableItemEnd,
		propParticle = propDerivedStart,									//挂接粒子
		propDerivedEnd,
	};

public:
	PropertyPaneParticle():PropertyPaneAttachment() {}
	~PropertyPaneParticle() {}

protected:
	virtual	bool	_OnCreate();
	virtual	void	_SetProperty(int nID);
	virtual	void	_UpdateProperty(int nID);

	virtual int		_GetIDEnd()				{ return propDerivedEnd;	}
	virtual int		_GetIDMutableEnd()		{ return propDerivedEnd;	}
};


#endif // ParticlePropertyPane_h__














