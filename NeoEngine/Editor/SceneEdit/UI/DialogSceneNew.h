/********************************************************************
	created:	15:12:2012   9:20
	filename: 	DialogSceneNew.h
	author:		maval
	
	purpose:	新建场景对话框
*********************************************************************/

#ifndef DialogSceneNew_h__
#define DialogSceneNew_h__

#include "../resource.h"


class DialogSceneNew : public CDialog
{
public:
	enum { IDD = IDD_NewScene };
	
	DialogSceneNew();
	~DialogSceneNew() {}

	INT_PTR DoModal(const std::wstring& scenePath, std::wstring& retSceneName);

protected:
	DECLARE_MESSAGE_MAP()
	virtual	void	OnOK();
	virtual BOOL	OnInitDialog();

private:
	std::wstring		m_scenePath;
	std::wstring*		m_NewSceneName;
};


#endif // DialogSceneNew_h__














