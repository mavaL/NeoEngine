/********************************************************************
	created:	27:12:2012   0:04
	filename: 	F:\MiniCraft\Editor\SceneEdit\UI\TerrainPropertyPane.h
	author:		maval
	
	purpose:	地形属性面板
*********************************************************************/

#ifndef TerrainPropertyPane_h__
#define TerrainPropertyPane_h__


#include "PropertiesPane.h"


class PropertyPaneTerrain : public CPropertiesPane
{
public:
	enum ePropertyID
	{
		////property range [propStart, propEnd)
		propStart = 0,
		////These are ReadOnly items
		propWorldSize = 0,
		propMapSize,
		propMinBatchSize,
		propMaxBatchSize,
		propSkirtSize,
		propLayerNormalMap0,
		propLayerNormalMap1,
		propLayerNormalMap2,
		propLayerNormalMap3,
		propLayerNormalMap4,
		////////These are Mutable items
		propMutableItemStart,
		propMaxPixelError = propMutableItemStart,
		propCompMapDist,

// 		propLayerWorldSize0,
// 		propLayerWorldSize1,
// 		propLayerWorldSize2,
// 		propLayerWorldSize3,
// 		propLayerWorldSize4,
// 		propLayerDiffuseMap0,
// 		propLayerDiffuseMap1,
// 		propLayerDiffuseMap2,
// 		propLayerDiffuseMap3,
// 		propLayerDiffuseMap4,
		propMutableItemEnd,
		propEnd = propMutableItemEnd
	};

public:
	PropertyPaneTerrain():CPropertiesPane() {}
	~PropertyPaneTerrain() {}

protected:
	virtual	bool	_OnCreate();
	virtual	void	_SetProperty(int nID);
	virtual	void	_UpdateProperty(int nID);

	virtual int		_GetIDStart()			{ return propStart;				}
	virtual int		_GetIDEnd()				{ return propEnd;				}
	virtual int		_GetIDMutableStart()	{ return propMutableItemStart;	}
	virtual int		_GetIDMutableEnd()		{ return propMutableItemEnd;	}

	//创建layer纹理下拉列表
	void			_CreateLayerTexList(int itemID);
};


#endif // TerrainPropertyPane_h__














