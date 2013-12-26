#include "stdafx.h"
#include "DLightPropertyPane.h"
#include "Manipulator/ManipulatorScene.h"
#include "Utility.h"
#include "XTPCustomPropertyGridItem.h"

bool PropertyPaneDLight::_OnCreate()
{
	bool ret = __super::_OnCreate();

	CXTPPropertyGridItem* pCategory = m_wndPropertyGrid.AddCategory(L"Deferred Light");
	PROPERTY_REG(pCategory,			, L"Light Type"		, L""	, propLightType		);
	pCategory->Expand();

	{
		m_mapItem[propLightType]->SetFlags(xtpGridItemHasComboButton);
		CXTPPropertyGridItemConstraints* pList = m_mapItem[propLightType]->GetConstraints();
		pList->RemoveAll();
		pList->AddConstraint(L"Point");
		pList->AddConstraint(L"Spot");
	}

	//µã¹â
	pCategory = m_wndPropertyGrid.AddCategory(L"Point Light");
	PROPERTY_REG(pCategory, Double, L"Radius"			, 0, propPointLightRadius	);
	PROPERTY_REG(pCategory,	Vec3	, L"Attenuation"	, VEC3(1,0,0)	, propPointLightAttenparam		);
	pCategory->Expand();

	(dynamic_cast<CXTPPropertyGridItemVec3*>(m_mapItem[propPointLightAttenparam]))->
		SetChildItemID(propAttenConstant, propAttenLinear, propAttenQuadric);

	return ret;
}

void PropertyPaneDLight::_SetProperty( int nID ) 
{
// 	if(nID < propDerivedStart)
// 	{
// 		__super::_SetProperty(nID);
// 		return;
// 	}
// 
// 	ManipulatorEffect& manEffect = ManipulatorSystem.GetEffect();
// 	CXTPPropertyGridItem* pItem = m_mapItem[nID];
// 
// 	switch (nID)
// 	{
// 	case propLightType:	manEffect.SetEffectParam("lighttype", Utility::UnicodeToEngine(pItem->GetValue())); break;
// 	case propPointLightRadius:	manEffect.SetEffectParam("radius", Utility::UnicodeToEngine(pItem->GetValue())); break;
// 
// 	case propAttenConstant:
// 	case propAttenLinear:
// 	case propAttenQuadric: pItem = m_mapItem[propPointLightAttenparam];
// 	case propPointLightAttenparam:
// 		{
// 			CXTPPropertyGridItemVec3* pItemVal = dynamic_cast<CXTPPropertyGridItemVec3*>(pItem);
// 			Ogre::Vector3 val = GetVec3Value(pItemVal, nID != propPointLightAttenparam);
// 			manEffect.SetEffectParam("PointAtteParam", Ogre::StringConverter::toString(val));
// 		}
// 		break;
// 
// 	default: assert(0);
// 	}
}

void PropertyPaneDLight::_UpdateProperty( int id )
{
// 	if(id < propDerivedStart)
// 	{
// 		__super::_UpdateProperty(id);
// 		return;
// 	}
// 
// 	ManipulatorEffect& manEffect = ManipulatorSystem.GetEffect();
// 	std::string strNewValue;
// 
// 	switch (id)
// 	{
// 	case propLightType:
// 		{
// 			int type = Ogre::StringConverter::parseInt(manEffect.GetEffectParam("lighttype"));
// 			if(type == 0)
// 				strNewValue = "Point";
// 			else if(type == 1)
// 				strNewValue = "Spot";
// 			else if(type == 2)
// 				strNewValue = "";
// 			else
// 				assert(0);
// 		}
// 		break;
// 
// 	case propPointLightRadius: strNewValue = manEffect.GetEffectParam("radius"); break;
// 
// 	case propAttenConstant:
// 	case propAttenLinear:
// 	case propAttenQuadric:			id = propPointLightAttenparam;
// 	case propPointLightAttenparam:	strNewValue = manEffect.GetEffectParam("PointAtteParam"); break;
// 
// 	default: assert(0);
// 	}
// 
// 	std::wstring wcsNewValue = Utility::EngineToUnicode(strNewValue);
// 	m_mapItem[id]->SetValue(wcsNewValue.c_str());
}
