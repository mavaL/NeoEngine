#include "stdafx.h"
#include "ParticlePropertyPane.h"
#include "Manipulator/ManipulatorScene.h"
#include "Utility.h"

bool PropertyPaneParticle::_OnCreate()
{
	bool ret = __super::_OnCreate();

	CXTPPropertyGridItem* pCategory = m_wndPropertyGrid.AddCategory(L"Particle");
	PROPERTY_REG(pCategory,			, L"Particle"		, L""	, propParticle		);
	pCategory->Expand();

	m_mapItem[propParticle]->SetFlags(xtpGridItemHasComboButton);

	return ret;
}

void PropertyPaneParticle::_SetProperty( int nID) 
{
// 	if(nID < propDerivedStart)
// 	{
// 		__super::_SetProperty(nID);
// 		return;
// 	}
// 
// 	ManipulatorEffect& manEffect = ManipulatorSystem.GetEffect();
// 	CXTPPropertyGridItem* pItem = m_mapItem[nID];
// 	std::string paramValue = Utility::UnicodeToEngine(pItem->GetValue());
// 
// 	switch (nID)
// 	{
// 	case propParticle:	manEffect.SetEffectParam("template", paramValue); break;
// 	default: assert(0);
// 	}
}

void PropertyPaneParticle::_UpdateProperty( int id )
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
// 	case propParticle:
// 		{
// 			const auto names = manEffect.GetParticleTmpNames();
// 			CXTPPropertyGridItemConstraints* pList = m_mapItem[propParticle]->GetConstraints();
// 			pList->RemoveAll();
// 			for (size_t i=0; i<names.size(); ++i)
// 				pList->AddConstraint(names[i].c_str());
// 
// 			 strNewValue = manEffect.GetEffectParam("template");
// 		}
// 		break;
// 
// 	default: assert(0);
// 	}
// 	
// 	std::wstring wcsNewValue = Utility::EngineToUnicode(strNewValue);
// 	m_mapItem[id]->SetValue(wcsNewValue.c_str());
}
