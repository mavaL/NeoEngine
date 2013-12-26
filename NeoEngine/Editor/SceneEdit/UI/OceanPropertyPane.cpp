#include "stdafx.h"
#include "OceanPropertyPane.h"
#include "Utility.h"
#include "UI/Common/XTPCustomPropertyGridItem.h"

//--------------------------------------------------------------------------
bool PropertyPaneOcean::_OnCreate()
{
// 	CXTPPropertyGridItem* pCategory = m_wndPropertyGrid.AddCategory(L"Ocean Info");
// 	PROPERTY_REG(pCategory, Float2, L"Texture Scale"			, 0, propTexScale		);
// 	PROPERTY_REG(pCategory, Float2, L"Map Size"				, 0, propBumpSpeed		);
// 	PROPERTY_REG(pCategory, Double, L"Bump Scale"			, 0, propBumpScale		);
// 	PROPERTY_REG(pCategory, Double, L"Wave Freq"			, 0, propWaveFreq		);
// 	PROPERTY_REG(pCategory, Double, L"Wave Amplitude"		, 0, propWaveAmp		);
// 
// 	PROPERTY_REG(pCategory, Vec4, L"Deep Color"				, 0, propDeepColor			);
// 	PROPERTY_REG(pCategory, Vec4, L"Shallow Color"			, 0, propShallowColor		);
// 	PROPERTY_REG(pCategory, Vec4, L"Reflection Color"		, 0, propReflectionColor	);
// 	PROPERTY_REG(pCategory, Double, L"Reflection Amount"	, 0, propReflectionAmount	);
// 	PROPERTY_REG(pCategory, Double, L"Reflection Blur"		, 0, propReflectionBlur		);
// 	PROPERTY_REG(pCategory, Double, L"Water Amount"			, 0, propWaterAmount		);
// 	PROPERTY_REG(pCategory, Double, L"Fresnel Power"		, 0, propFresnelPower		);
// 	PROPERTY_REG(pCategory, Double, L"Fresnel Bias"			, 0, propFresnelBias		);
// 	pCategory->Expand();

	return true;
}
//--------------------------------------------------------------------------
void PropertyPaneOcean::_SetProperty( int id )
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

void PropertyPaneOcean::_UpdateProperty( int id )
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
