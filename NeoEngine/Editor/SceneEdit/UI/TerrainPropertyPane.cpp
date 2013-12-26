#include "stdafx.h"
#include "Utility.h"
#include "TerrainPropertyPane.h"
#include "Manipulator/ManipulatorScene.h"
#include "EditorDefine.h"
#include "Scene.h"

bool PropertyPaneTerrain::_OnCreate()
{
	CXTPPropertyGridItem* pCategory = m_wndPropertyGrid.AddCategory(L"Terrain Info");
	PROPERTY_REG(pCategory, Double, L"World Size"			, 0, propWorldSize		);
	PROPERTY_REG(pCategory, Number, L"Map Size"				, 0, propMapSize		);
	PROPERTY_REG(pCategory, Number, L"Min Batch Size"		, 0, propMinBatchSize	);
	PROPERTY_REG(pCategory, Number, L"Max Batch Size"		, 0, propMaxBatchSize	);
	PROPERTY_REG(pCategory, Number, L"Skirt Size"			, 0, propSkirtSize		);
	pCategory->Expand();

	pCategory = m_wndPropertyGrid.AddCategory(L"Terrain Config");
	PROPERTY_REG(pCategory, Number, L"Max Pixel Error"		, 0, propMaxPixelError	);
	PROPERTY_REG(pCategory, Double, L"CompositeMap Distance", 0, propCompMapDist	);
	pCategory->Expand();

// 	size_t maxLayer = ManipulatorSystem.GetScene()->GetTerrainMaxLayer();
// 	for(size_t iLayer=0; iLayer<maxLayer; ++iLayer)
// 	{
// 		std::string strLayer("Layer");
// 		strLayer += Ogre::StringConverter::toString(iLayer);
// 		std::wstring wcsLayer = Utility::EngineToUnicode(strLayer);
// 
// 		pCategory = m_wndPropertyGrid.AddCategory(wcsLayer.c_str());
// 		PROPERTY_REG(pCategory, Double, L"World Size"			, 0, propLayerWorldSize0 + iLayer);
// 		PROPERTY_REG(pCategory,		, L"Diffuse Map"			, L"",propLayerDiffuseMap0 + iLayer);
// 		PROPERTY_REG(pCategory,		, L"Normal Map"				, L"",propLayerNormalMap0 + iLayer);
// 		pCategory->Expand();
// 
// 		_CreateLayerTexList(propLayerDiffuseMap0 + iLayer);
// 		_CreateLayerTexList(propLayerNormalMap0 + iLayer);
// 	}

	return true;
}

void PropertyPaneTerrain::_SetProperty( int id )
{
// 	ManipulatorTerrain& manTerrain = ManipulatorSystem.GetTerrain();
// 	CXTPPropertyGridItem* pItem = m_mapItem[id];
// 
// 	switch (id)
// 	{
// 	case propMaxPixelError: 
// 		{
// 			CXTPPropertyGridItemNumber* pNumItem = dynamic_cast<CXTPPropertyGridItemNumber*>(pItem);
// 			manTerrain.SetMaxPixelError((float)pNumItem->GetNumber());
// 		}
// 		break;
// 
// 	case propCompMapDist:
// 		{
// 			CXTPPropertyGridItemDouble* pDoubleItem = dynamic_cast<CXTPPropertyGridItemDouble*>(pItem);
// 			manTerrain.SetCompositeMapDist((float)pDoubleItem->GetDouble());
// 		}
// 		break;
// 
// 	case propLayerWorldSize0:
// 	case propLayerWorldSize1:
// 	case propLayerWorldSize2:
// 	case propLayerWorldSize3:
// 	case propLayerWorldSize4:
// 		{
// 			CXTPPropertyGridItemDouble* pDoubleItem = dynamic_cast<CXTPPropertyGridItemDouble*>(pItem);
// 			manTerrain.SetLayerTexWorldSize(id - propLayerWorldSize0, (float)pDoubleItem->GetDouble());
// 		}
// 		break;
// 
// 	case propLayerDiffuseMap0:
// 	case propLayerDiffuseMap1:
// 	case propLayerDiffuseMap2:
// 	case propLayerDiffuseMap3:
// 	case propLayerDiffuseMap4:
// 		{
// 			//设置diffusemap和normalmap
// 			manTerrain.SetLayerTexture(id - propLayerDiffuseMap0, Utility::UnicodeToEngine(pItem->GetValue()));
// 			//需要更新normalmap控件数据
// 			UpdateProperty(id - propLayerDiffuseMap0 + propLayerNormalMap0);
// 		}
// 		break;
// 
// 	default: assert(0);
// 	}
}

void PropertyPaneTerrain::_CreateLayerTexList( int itemID )
{
// 	const Ogre::StringVector& vecNames = ManipulatorSystem.GetTerrain().GetAllLayerTexThumbnailNames();
// 	CXTPPropertyGridItemConstraints* pList = m_mapItem[itemID]->GetConstraints();
// 	for (size_t i=0; i<vecNames.size(); ++i)
// 	{
// 		Ogre::String basename, extname, path;
// 		Ogre::StringUtil::splitFullFilename(vecNames[i], basename, extname, path);
// 		std::wstring strItem = Utility::EngineToUnicode(basename) + L"specular.dds";
// 
// 		pList->AddConstraint(strItem.c_str());
// 	}
// 	m_mapItem[itemID]->SetFlags(xtpGridItemHasComboButton);
}

void PropertyPaneTerrain::_UpdateProperty( int id )
{
// 	ManipulatorTerrain& manTerrain = ManipulatorSystem.GetTerrain();
// 	std::string strNewValue;
// 
// 	switch (id)
// 	{
// 	case propWorldSize:		strNewValue = Ogre::StringConverter::toString(manTerrain.GetWorldSize()); break;
// 	case propMapSize:		strNewValue = Ogre::StringConverter::toString(manTerrain.GetMapSize()); break;
// 	case propMinBatchSize:	strNewValue = Ogre::StringConverter::toString(manTerrain.GetMinBatchSize()); break;
// 	case propMaxBatchSize:	strNewValue = Ogre::StringConverter::toString(manTerrain.GetMaxBatchSize()); break;
// 	case propSkirtSize:		strNewValue = Ogre::StringConverter::toString(manTerrain.GetSkirtSize()); break;
// 	case propMaxPixelError: strNewValue = Ogre::StringConverter::toString(manTerrain.GetMaxPixelError()); break;
// 	case propCompMapDist:	strNewValue = Ogre::StringConverter::toString(manTerrain.GetCompositeMapDist()); break;
// 	case propLayerWorldSize0: 
// 	case propLayerWorldSize1:
// 	case propLayerWorldSize2: 
// 	case propLayerWorldSize3:
// 	case propLayerWorldSize4: strNewValue = Ogre::StringConverter::toString(manTerrain.GetLayerTexWorldSize(id - propLayerWorldSize0)); break;
// 	case propLayerDiffuseMap0: 
// 	case propLayerDiffuseMap1:
// 	case propLayerDiffuseMap2: 
// 	case propLayerDiffuseMap3:
// 	case propLayerDiffuseMap4: strNewValue = manTerrain.GetLayerDiffuseMap(id - propLayerDiffuseMap0); break;
// 	case propLayerNormalMap0: 
// 	case propLayerNormalMap1:
// 	case propLayerNormalMap2:
// 	case propLayerNormalMap3:
// 	case propLayerNormalMap4: strNewValue = manTerrain.GetLayerNormalMap(id - propLayerNormalMap0); break;
// 	default: assert(0);
// 	}
// 	
// 	std::wstring wcsNewValue = Utility::EngineToUnicode(strNewValue);
// 	m_mapItem[id]->SetValue(wcsNewValue.c_str());
}
