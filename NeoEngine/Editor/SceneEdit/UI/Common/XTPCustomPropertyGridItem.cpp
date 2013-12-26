#include "stdafx.h"
#include "XTPCustomPropertyGridItem.h"
#include "Utility.h"




////////////////////////////////////////////////////////////////////
CXTPPropertyGridItemVec3::CXTPPropertyGridItemVec3( CString strCaption, const VEC3& value )
:CXTPPropertyGridItem(strCaption)
,m_value(value)
{
	
}

void CXTPPropertyGridItemVec3::OnAddChildItem()
{
// 	m_X = AddChildItem(new CXTPPropertyGridItemDouble(L"x", m_value.x));
// 	m_Y = AddChildItem(new CXTPPropertyGridItemDouble(L"y", m_value.y));
// 	m_Z = AddChildItem(new CXTPPropertyGridItemDouble(L"z", m_value.z));
}

void CXTPPropertyGridItemVec3::SetReadOnly( BOOL bReadOnly /*= TRUE*/ )
{
	CXTPPropertyGridItem::SetReadOnly(bReadOnly);

// 	m_X->SetReadOnly(bReadOnly);
// 	m_Y->SetReadOnly(bReadOnly);
// 	m_Z->SetReadOnly(bReadOnly);
}

void CXTPPropertyGridItemVec3::SetValue( CString strValue )
{
// 	Ogre::Vector3 vec3 = Ogre::StringConverter::parseVector3(Utility::UnicodeToEngine(strValue));
// 
// 	//截取至小数点后两位
// 	std::wstring strX = Utility::FloatToString_CutPrecision(vec3.x);
// 	std::wstring strY = Utility::FloatToString_CutPrecision(vec3.y);
// 	std::wstring strZ = Utility::FloatToString_CutPrecision(vec3.z);
// 
// 	m_X->SetValue(strX.c_str());
// 	m_Y->SetValue(strY.c_str());
// 	m_Z->SetValue(strZ.c_str());
// 
// 	std::wstring strVec3 = strX + L" " + strY + L" " + strZ;
// 	CXTPPropertyGridItem::SetValue(strVec3.c_str());
}

void CXTPPropertyGridItemVec3::SetChildItemID( int idX, int idY, int idZ )
{
// 	m_X->SetID(idX);
// 	m_Y->SetID(idY);
// 	m_Z->SetID(idZ);
}

void CXTPPropertyGridItemVec3::UpdateFromChild()
{
// 	CString strValue = std::move(m_X->GetValue()) + L" " + std::move(m_Y->GetValue()) + L" " + std::move(m_Z->GetValue());
// 	SetValue(strValue);
}

//////////////////////////////////////////////////////////////////////////
CXTPPropertyGridItemVec4::CXTPPropertyGridItemVec4( CString strCaption, const VEC4& value )
:CXTPPropertyGridItem(strCaption)
,m_value(value)
{

}

void CXTPPropertyGridItemVec4::SetReadOnly( BOOL bReadOnly /*= TRUE*/ )
{
	CXTPPropertyGridItem::SetReadOnly(bReadOnly);

// 	m_X->SetReadOnly(bReadOnly);
// 	m_Y->SetReadOnly(bReadOnly);
// 	m_Z->SetReadOnly(bReadOnly);
}

void CXTPPropertyGridItemVec4::OnAddChildItem()
{
// 	m_X = AddChildItem(new CXTPPropertyGridItemDouble(L"x", m_value.x));
// 	m_Y = AddChildItem(new CXTPPropertyGridItemDouble(L"y", m_value.y));
// 	m_Z = AddChildItem(new CXTPPropertyGridItemDouble(L"z", m_value.z));
// 	m_W = AddChildItem(new CXTPPropertyGridItemDouble(L"w", m_value.z));
}

void CXTPPropertyGridItemVec4::SetValue( CString strValue )
{
// 	Ogre::Vector4 vec4 = Ogre::StringConverter::parseVector4(Utility::UnicodeToEngine(strValue));
// 
// 	//截取至小数点后两位
// 	std::wstring strX = Utility::FloatToString_CutPrecision(vec4.x);
// 	std::wstring strY = Utility::FloatToString_CutPrecision(vec4.y);
// 	std::wstring strZ = Utility::FloatToString_CutPrecision(vec4.z);
// 	std::wstring strW = Utility::FloatToString_CutPrecision(vec4.w);
// 
// 	m_X->SetValue(strX.c_str());
// 	m_Y->SetValue(strY.c_str());
// 	m_Z->SetValue(strZ.c_str());
// 	m_W->SetValue(strW.c_str());
// 
// 	std::wstring strVec4 = strX + L" " + strY + L" " + strZ + L" " + strW;
// 	CXTPPropertyGridItem::SetValue(strVec4.c_str());
}

void CXTPPropertyGridItemVec4::SetChildItemID( int idX, int idY, int idZ, int idW )
{
// 	m_X->SetID(idX);
// 	m_Y->SetID(idY);
// 	m_Z->SetID(idZ);
// 	m_W->SetID(idW);
}

void CXTPPropertyGridItemVec4::UpdateFromChild()
{
// 	CString strValue = std::move(m_X->GetValue()) + L" " + std::move(m_Y->GetValue()) + 
// 		L" " + std::move(m_Z->GetValue()) + L" " + std::move(m_W->GetValue());
// 	SetValue(strValue);
}

//////////////////////////////////////////////////////////////////////////

VEC3 GetVec3Value( CXTPPropertyGridItemVec3* pItem, bool bReflect )
{
// 	if(bReflect)
// 		pItem->UpdateFromChild();
// 
// 	std::wstring strX = Utility::StringCutPrecision(pItem->GetStrX());
// 	std::wstring strY = Utility::StringCutPrecision(pItem->GetStrY());
// 	std::wstring strZ = Utility::StringCutPrecision(pItem->GetStrZ());
// 
// 	float fX = Ogre::StringConverter::parseReal(Utility::UnicodeToEngine(strX));
// 	float fY = Ogre::StringConverter::parseReal(Utility::UnicodeToEngine(strY));
// 	float fZ = Ogre::StringConverter::parseReal(Utility::UnicodeToEngine(strZ));
// 
// 	return std::move(Ogre::Vector3(fX, fY, fZ));
	return VEC3(0,0,0);
}

VEC4 GetVec4Value( CXTPPropertyGridItemVec4* pItem, bool bReflect )
{
// 	if(bReflect)
// 		pItem->UpdateFromChild();
// 
// 	std::wstring strX = Utility::StringCutPrecision(pItem->GetStrX());
// 	std::wstring strY = Utility::StringCutPrecision(pItem->GetStrY());
// 	std::wstring strZ = Utility::StringCutPrecision(pItem->GetStrZ());
// 	std::wstring strW = Utility::StringCutPrecision(pItem->GetStrW());
// 
// 	float fX = Ogre::StringConverter::parseReal(Utility::UnicodeToEngine(strX));
// 	float fY = Ogre::StringConverter::parseReal(Utility::UnicodeToEngine(strY));
// 	float fZ = Ogre::StringConverter::parseReal(Utility::UnicodeToEngine(strZ));
// 	float fW = Ogre::StringConverter::parseReal(Utility::UnicodeToEngine(strW));
// 
// 	return std::move(Ogre::Quaternion(fX, fY, fZ, fW));
	return VEC4(0,0,0,0);
}
