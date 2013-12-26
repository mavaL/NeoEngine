/********************************************************************
	created:	5:3:2013   1:36
	filename: 	EffectPropertyPane.h
	author:		maval
	
	purpose:	图形效果属性面板
*********************************************************************/

#ifndef EffectPropertyPane_h__
#define EffectPropertyPane_h__


#include "PropertiesPane.h"

class PropertyPaneEffect : public CPropertiesPane
{
public:
	enum ePropertyID
	{
		////property range [propStart, propEnd)
		propStart = 0,
		////////These are Mutable items
		propMutableItemStart = propStart,
		propShadowFarDist = propMutableItemStart,
		propShadowSplitPadding,
		propShadowOptimalAdjustFactor,
		propShadowUseSimpleOptimalAdjust,
		propShadowCameraLightDirectionThreshold,
		propShadowMapSize,
		propShadowSelfShadow,
		propShadowCasterRenderBackFaces,
		propShadowLambda,
		propShadowDirectionalLightExtrusionDistance,
		propSSAOSampleLength,
		propSSAOOffsetScale,
		propSSAOEdgeHighlight,
		propSSAODefaultAccessibility,
		propMutableItemEnd,
		propEnd = propMutableItemEnd,

		//Sub Item
		propOptimalAdjustFactor0, propOptimalAdjustFactor1, propOptimalAdjustFactor2,
		propShadowMapSize0, propShadowMapSize1, propShadowMapSize2,
	};

public:
	PropertyPaneEffect():CPropertiesPane() {}
	~PropertyPaneEffect() {}

protected:
	virtual	bool	_OnCreate();
	virtual	void	_SetProperty(int nID);
	virtual	void	_UpdateProperty(int nID);

	virtual int		_GetIDStart()			{ return propStart;				}
	virtual int		_GetIDEnd()				{ return propEnd;				}
	virtual int		_GetIDMutableStart()	{ return propMutableItemStart;	}
	virtual int		_GetIDMutableEnd()		{ return propMutableItemEnd;	}
};


#endif // EffectPropertyPane_h__














