#include "stdafx.h"
#include "DialogSceneNew.h"


BEGIN_MESSAGE_MAP(DialogSceneNew, CDialog)
END_MESSAGE_MAP()

DialogSceneNew::DialogSceneNew()
:CDialog(DialogSceneNew::IDD)
,m_NewSceneName(nullptr)
,m_scenePath(L"")
{

}

INT_PTR DialogSceneNew::DoModal(const std::wstring& scenePath, std::wstring& retSceneName)
{
	m_scenePath	=	scenePath;
	m_NewSceneName = &retSceneName;

	return CDialog::DoModal();
}

void DialogSceneNew::OnOK()
{
	CString fullPath;
	GetDlgItemText(IDC_NewScene_Path, fullPath);
	*m_NewSceneName = fullPath;
	int pos = m_NewSceneName->rfind(L'\\');
	*m_NewSceneName = m_NewSceneName->substr(pos+1);

	CDialog::OnOK();
}

BOOL DialogSceneNew::OnInitDialog()
{
	SetDlgItemText(IDC_NewScene_Path, m_scenePath.c_str());

	return CDialog::OnInitDialog();
}
