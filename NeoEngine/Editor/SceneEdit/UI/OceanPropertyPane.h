/********************************************************************
	created:	2013/10/22
	created:	22:10:2013   11:13
	filename: 	OceanPropertyPane.h
	author:		maval
	
	purpose:	Property pane for ocean params
*********************************************************************/
#ifndef OceanPropertyPane_h__
#define OceanPropertyPane_h__

#include "PropertiesPane.h"


class PropertyPaneOcean : public CPropertiesPane
{
public:
	enum ePropertyID
	{
		////property range [propStart, propEnd)
		propStart = 0,
		////These are ReadOnly items
		////////These are Mutable items
		propMutableItemStart = propStart,
		propTexScale = propMutableItemStart,
		propBumpSpeed,
		propBumpScale,
		propWaveFreq,
		propWaveAmp,
		propDeepColor,
		propShallowColor,
		propReflectionColor,
		propReflectionAmount,
		propReflectionBlur,
		propWaterAmount, 
		propFresnelPower,
		propFresnelBias,
		propMutableItemEnd = propFresnelBias,
		propEnd = propMutableItemEnd
	};

public:
	PropertyPaneOcean():CPropertiesPane() {}
	~PropertyPaneOcean() {}

protected:
	virtual	bool	_OnCreate();
	virtual	void	_SetProperty(int nID);
	virtual	void	_UpdateProperty(int nID);

	virtual int		_GetIDStart()			{ return propStart;				}
	virtual int		_GetIDEnd()				{ return propEnd;				}
	virtual int		_GetIDMutableStart()	{ return propMutableItemStart;	}
	virtual int		_GetIDMutableEnd()		{ return propMutableItemEnd;	}
};


#endif // OceanPropertyPane_h__















