#include "stdafx.h"
#include "AttachmentPropertyPane.h"
#include "Manipulator/ManipulatorScene.h"
#include "Utility.h"

PropertyPaneAttachment::~PropertyPaneAttachment()
{

}

bool PropertyPaneAttachment::_OnCreate()
{
	CXTPPropertyGridItem* pCategory = m_wndPropertyGrid.AddCategory(L"General");
	PROPERTY_REG(pCategory,			, L"Locator"		, L""	, propLocator		);
	PROPERTY_REG(pCategory,	  Double, L"Start Time"		, 0		, propStartTime		);
	PROPERTY_REG(pCategory,	  Double, L"Life Time"		, 0		, propLifeTime		);
	pCategory->Expand();

	m_mapItem[propLocator]->SetFlags(xtpGridItemHasComboButton);

	return true;
}

void PropertyPaneAttachment::_SetProperty( int nID) 
{
// 	ManipulatorEffect& manEffect = ManipulatorSystem.GetEffect();
// 	CXTPPropertyGridItem* pItem = m_mapItem[nID];
// 	std::string paramValue = Utility::UnicodeToEngine(pItem->GetValue());
// 
// 	switch (nID)
// 	{
// 	case propLocator:	manEffect.SetEffectParam("locator", paramValue); break;
// 	case propStartTime: manEffect.SetEffectParam("starttime", paramValue); break;
// 	case propLifeTime: manEffect.SetEffectParam("lifetime", paramValue); break;
// 	default: assert(0);
// 	}
}

void PropertyPaneAttachment::_UpdateProperty( int id )
{
// 	ManipulatorEffect& manEffect = ManipulatorSystem.GetEffect();
// 	std::string strNewValue;
// 
// 	switch (id)
// 	{
// 	case propLocator:
// 		{
// 			const auto locators = manEffect.GetLocatorNames();
// 			CXTPPropertyGridItemConstraints* pList = m_mapItem[propLocator]->GetConstraints();
// 			pList->RemoveAll();
// 			for (size_t i=0; i<locators.size(); ++i)
// 				pList->AddConstraint(locators[i].c_str());
// 			
// 			strNewValue = manEffect.GetEffectParam("locator");
// 		}
// 		break;
// 
// 	case propStartTime:	strNewValue = manEffect.GetEffectParam("starttime"); break;
// 	case propLifeTime:	strNewValue = manEffect.GetEffectParam("lifetime"); break;
// 
// 	default: assert(0);
// 	}
// 	
// 	std::wstring wcsNewValue = Utility::EngineToUnicode(strNewValue);
// 	m_mapItem[id]->SetValue(wcsNewValue.c_str());
}
