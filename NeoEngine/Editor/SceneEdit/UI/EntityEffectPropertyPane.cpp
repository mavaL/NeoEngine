#include "stdafx.h"
#include "EntityEffectPropertyPane.h"
#include "Manipulator/ManipulatorScene.h"
#include "Utility.h"

bool PropertyPaneEntityEffect::_OnCreate()
{
	bool ret = __super::_OnCreate();

	CXTPPropertyGridItem* pCategory = m_wndPropertyGrid.AddCategory(L"Attach Entity");
	PROPERTY_REG(pCategory,			, L"Mesh Name"		, L""	, propMeshName		);
	PROPERTY_REG(pCategory,			, L"Anim Name"		, L""	, propAnimName		);
	pCategory->Expand();

	{
		m_mapItem[propMeshName]->SetFlags(xtpGridItemHasComboButton);
		CXTPPropertyGridItemConstraints* pList = m_mapItem[propMeshName]->GetConstraints();
		pList->RemoveAll();
		
// 		const auto meshNames = ManipulatorSystem.GetEffect().GetAttachEffectMeshNames();
// 
// 		for (size_t i=0; i<meshNames.size(); ++i)
// 			pList->AddConstraint(meshNames[i].c_str());
	}
	
	m_mapItem[propAnimName]->SetFlags(xtpGridItemHasComboButton);

	return ret;
}

void PropertyPaneEntityEffect::_SetProperty( int nID ) 
{
// 	if(nID < propDerivedStart)
// 	{
// 		__super::_SetProperty(nID);
// 		return;
// 	}
// 
// 	ManipulatorEffect& manEffect = ManipulatorSystem.GetEffect();
// 	CXTPPropertyGridItem* pItem = m_mapItem[nID];
// 	const std::string val = Utility::UnicodeToEngine(pItem->GetValue());
// 
// 	switch (nID)
// 	{
// 	case propMeshName:	
// 		{
// 			manEffect.SetEffectParam("meshname", val);
// 
// 			//设置动画列表
// 			CXTPPropertyGridItemConstraints* pList = m_mapItem[propAnimName]->GetConstraints();
// 			pList->RemoveAll();
// 
// 			const auto animNames = manEffect.GetMeshAnimNames(val);
// 			for (size_t i=0; i<animNames.size(); ++i)
// 				pList->AddConstraint(animNames[i].c_str());
// 		}
// 		break;
// 
// 	case propAnimName:	manEffect.SetEffectParam("animname", val); break;
// 
// 	default: assert(0);
// 	}
}

void PropertyPaneEntityEffect::_UpdateProperty( int id )
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
// 	case propMeshName: strNewValue = manEffect.GetEffectParam("meshname"); break;
// 	case propAnimName: strNewValue = manEffect.GetEffectParam("animname"); break;
// 	default: assert(0);
// 	}
// 
// 	std::wstring wcsNewValue = Utility::EngineToUnicode(strNewValue);
// 	m_mapItem[id]->SetValue(wcsNewValue.c_str());
}
