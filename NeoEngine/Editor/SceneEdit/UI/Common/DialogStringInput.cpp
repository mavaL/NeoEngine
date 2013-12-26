#include "stdafx.h"
#include "DialogStringInput.h"

BEGIN_MESSAGE_MAP(DialogStringInput, CDialog)
END_MESSAGE_MAP()

DialogStringInput::DialogStringInput()
:CDialog(IDD_DlgStringInput)
,m_pString(nullptr)
,m_caption(L"")
{

}

INT_PTR DialogStringInput::DoModal(std::wstring& retString, const std::wstring& caption)
{
	m_caption =	caption;
	m_pString = &retString;

	return CDialog::DoModal();
}

void DialogStringInput::OnOK()
{
	CString string;
	GetDlgItemText(IDC_StringInput, string);
	*m_pString = string;

	CDialog::OnOK();
}

BOOL DialogStringInput::OnInitDialog()
{
	SetWindowText(m_caption.c_str());

	return CDialog::OnInitDialog();
}