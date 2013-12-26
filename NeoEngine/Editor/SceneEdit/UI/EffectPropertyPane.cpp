#include "stdafx.h"
#include "EffectPropertyPane.h"
#include "Manipulator/ManipulatorScene.h"
#include "Utility.h"
#include "XTPCustomPropertyGridItem.h"

bool PropertyPaneEffect::_OnCreate()
{
	CXTPPropertyGridItem* pCategory = m_wndPropertyGrid.AddCategory(L"Shadow");
	PROPERTY_REG(pCategory,	Double	, L"Far Distance"				, 300						, propShadowFarDist);
	PROPERTY_REG(pCategory,	Double	, L"Split Padding"				, 1							, propShadowSplitPadding);
	PROPERTY_REG(pCategory,	Vec3	, L"Optimal Adjust Factor"		, VEC3(0.5f,0.8f,2)		, propShadowOptimalAdjustFactor);
	PROPERTY_REG(pCategory,	Bool	, L"Use Simple Optimal Adjust"	, TRUE						, propShadowUseSimpleOptimalAdjust);
	PROPERTY_REG(pCategory, Number	, L"Camera Light Direction Threshold", 45					, propShadowCameraLightDirectionThreshold);
	PROPERTY_REG(pCategory, Vec3	, L"Shadow Map Size"			, VEC3(2048,1024,1024)	, propShadowMapSize);
	PROPERTY_REG(pCategory,	Bool	, L"Self Shadow"				, FALSE						, propShadowSelfShadow);
	PROPERTY_REG(pCategory, Bool	, L"Render Back Faces"			, TRUE						, propShadowCasterRenderBackFaces);
	PROPERTY_REG(pCategory,	Double	, L"Lambda"						, 0.75f						, propShadowLambda);
	PROPERTY_REG(pCategory,	Double	, L"Extrusion Distance"			, 10000						, propShadowDirectionalLightExtrusionDistance);
	pCategory->Expand();

	pCategory = m_wndPropertyGrid.AddCategory(L"SSAO");
	PROPERTY_REG(pCategory,	Double	, L"Sample Length"				, 20						, propSSAOSampleLength);
	PROPERTY_REG(pCategory,	Double	, L"Offset Scale"				, 1							, propSSAOOffsetScale);
	PROPERTY_REG(pCategory,	Double	, L"Default Accessibility"		, 0.5f						, propSSAODefaultAccessibility);
	PROPERTY_REG(pCategory,	Double	, L"Edge Highlight"				, 1.99f						, propSSAOEdgeHighlight);
	pCategory->Expand();

	(dynamic_cast<CXTPPropertyGridItemVec3*>(m_mapItem[propShadowOptimalAdjustFactor]))->SetChildItemID(propOptimalAdjustFactor0, propOptimalAdjustFactor1, propOptimalAdjustFactor2);
	(dynamic_cast<CXTPPropertyGridItemVec3*>(m_mapItem[propShadowMapSize]))->SetChildItemID(propShadowMapSize0, propShadowMapSize1, propShadowMapSize2);

	return true;
}

void PropertyPaneEffect::_SetProperty( int id)
{
// 	ManipulatorEffect& manEffect = ManipulatorSystem.GetEffect();
// 	CXTPPropertyGridItem* pItem = m_mapItem[id];
// 
// 	switch (id)
// 	{
// 	case propShadowFarDist:			manEffect.SetShadowParam("FarDistance", (LPCTSTR)pItem->GetValue()); break;
// 	case propShadowSplitPadding:	manEffect.SetShadowParam("SplitPadding", (LPCTSTR)pItem->GetValue()); break;
// 	case propOptimalAdjustFactor0:
// 	case propOptimalAdjustFactor1:
// 	case propOptimalAdjustFactor2:	pItem = m_mapItem[propShadowOptimalAdjustFactor];
// 	case propShadowOptimalAdjustFactor: 
// 		{
// 			CXTPPropertyGridItemVec3* pItemVal = dynamic_cast<CXTPPropertyGridItemVec3*>(pItem);
// 			const Ogre::Vector3 factor = GetVec3Value(pItemVal, id != propShadowOptimalAdjustFactor);
// 			Ogre::String val = Ogre::StringConverter::toString(factor);
// 			manEffect.SetShadowParam("AdjustFactor", Utility::EngineToUnicode(val));
// 		}
// 		break;
// 
// 	case propShadowUseSimpleOptimalAdjust: manEffect.SetShadowParam("UseSimpleAdjust", (LPCTSTR)pItem->GetValue()); break;
// 	case propShadowCameraLightDirectionThreshold: manEffect.SetShadowParam("CameraLightDirectionThreshold", (LPCTSTR)pItem->GetValue()); break;
// 	case propShadowMapSize0:
// 	case propShadowMapSize1:
// 	case propShadowMapSize2:		pItem = m_mapItem[propShadowMapSize];
// 	case propShadowMapSize: 
// 		{
// 			CXTPPropertyGridItemVec3* pItemVal = dynamic_cast<CXTPPropertyGridItemVec3*>(pItem);
// 			const Ogre::Vector3 size = GetVec3Value(pItemVal, id != propShadowMapSize);
// 			Ogre::String val = Ogre::StringConverter::toString(size);
// 			manEffect.SetShadowParam("ShadowMapSize", Utility::EngineToUnicode(val));
// 		}
// 		break;
// 
// 	case propShadowSelfShadow:				manEffect.SetShadowParam("SelfShadow"		, (LPCTSTR)pItem->GetValue()); break;
// 	case propShadowCasterRenderBackFaces:	manEffect.SetShadowParam("RenderBackFace"	, (LPCTSTR)pItem->GetValue()); break;
// 	case propShadowLambda:					manEffect.SetShadowParam("PssmLambda"		, (LPCTSTR)pItem->GetValue()); break;
// 	case propShadowDirectionalLightExtrusionDistance: manEffect.SetShadowParam("LightExtrusionDistance", (LPCTSTR)pItem->GetValue()); break;
// 	case propSSAOSampleLength:				manEffect.SetSsaoParam("SampleLength"		, (LPCTSTR)pItem->GetValue()); break;
// 	case propSSAOOffsetScale:				manEffect.SetSsaoParam("OffsetScale"		, (LPCTSTR)pItem->GetValue()); break;
// 	case propSSAODefaultAccessibility:		manEffect.SetSsaoParam("DefaultAccessibility", (LPCTSTR)pItem->GetValue()); break;
// 	case propSSAOEdgeHighlight:				manEffect.SetSsaoParam("EdgeHighlight"		, (LPCTSTR)pItem->GetValue()); break;
// 	default: assert(0);
// 	}
}

void PropertyPaneEffect::_UpdateProperty( int id )
{
// 	ManipulatorEffect& manEffect = ManipulatorSystem.GetEffect();
// 	const std::string* strNewValue = nullptr;
// 
// 	switch (id)
// 	{
// 	case propShadowFarDist:					strNewValue = &manEffect.GetShadowParam("FarDistance"); break;
// 	case propShadowSplitPadding:			strNewValue = &manEffect.GetShadowParam("SplitPadding"); break;
// 	case propOptimalAdjustFactor0:
// 	case propOptimalAdjustFactor1:
// 	case propOptimalAdjustFactor2:			id = propShadowOptimalAdjustFactor;
// 	case propShadowOptimalAdjustFactor:		strNewValue = &manEffect.GetShadowParam("AdjustFactor"); break;
// 	case propShadowUseSimpleOptimalAdjust : strNewValue = &manEffect.GetShadowParam("UseSimpleAdjust"); break;
// 	case propShadowCameraLightDirectionThreshold: strNewValue = &manEffect.GetShadowParam("CameraLightDirectionThreshold"); break;
// 	case propShadowMapSize0:
// 	case propShadowMapSize1:
// 	case propShadowMapSize2:				id = propShadowMapSize;
// 	case propShadowMapSize:					strNewValue = &manEffect.GetShadowParam("ShadowMapSize"); break;
// 	case propShadowSelfShadow:				strNewValue = &manEffect.GetShadowParam("SelfShadow"); break;
// 	case propShadowCasterRenderBackFaces:	strNewValue = &manEffect.GetShadowParam("RenderBackFace"); break;
// 	case propShadowLambda:					strNewValue = &manEffect.GetShadowParam("PssmLambda"); break;
// 	case propShadowDirectionalLightExtrusionDistance: strNewValue = &manEffect.GetShadowParam("LightExtrusionDistance"); break;
// 	case propSSAOSampleLength:				strNewValue = &manEffect.GetSsaoParam("SampleLength"); break;
// 	case propSSAOOffsetScale:				strNewValue = &manEffect.GetSsaoParam("OffsetScale"); break;
// 	case propSSAODefaultAccessibility:		strNewValue = &manEffect.GetSsaoParam("DefaultAccessibility"); break;
// 	case propSSAOEdgeHighlight:				strNewValue = &manEffect.GetSsaoParam("EdgeHighlight"); break;
// 	default: assert(0);
// 	}
// 	
// 	std::wstring wcsNewValue = Utility::EngineToUnicode(*strNewValue);
// 	m_mapItem[id]->SetValue(wcsNewValue.c_str());
}
