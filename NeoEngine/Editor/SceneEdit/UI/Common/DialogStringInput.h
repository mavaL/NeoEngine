/********************************************************************
	created:	7:4:2013   22:59
	filename	DialogStringInput.h
	author:		maval

	purpose:	×Ö·û´®ÊäÈë¶Ô»°¿ò
*********************************************************************/

#ifndef DialogStringInput_h__
#define DialogStringInput_h__

#include "resource.h"

class DialogStringInput : public CDialog
{
public:

	DialogStringInput();
	~DialogStringInput() {}

	INT_PTR DoModal(std::wstring& retString, const std::wstring& caption = L"");

protected:
	DECLARE_MESSAGE_MAP()
	virtual	void	OnOK();
	virtual BOOL	OnInitDialog();

private:
	std::wstring		m_caption;
	std::wstring*		m_pString;
};


#endif // DialogStringInput_h__







