/********************************************************************
	created:	28:1:2013   0:19
	filename: 	ManipulatorEditorResource.h
	author:		maval
	
	purpose:	编辑器相关资源管理
*********************************************************************/
#ifndef ManipulatorEditorResource_h__
#define ManipulatorEditorResource_h__



class ManipulatorResource
{
	typedef std::unordered_map<std::wstring, Gdiplus::Bitmap*> IconContainer;

public:
	ManipulatorResource() {}
	~ManipulatorResource();

public:
	//RTT渲染所有mesh的图标,返回Icon列表和mesh名字列表
	void	RenderAllMeshIcons(CImageList& retImageList, StringVector& retMeshNames);
	//准备好各类型图标的纹理
	void	PrepareAllIcons();
	//取得指定类型的图标纹理
	Gdiplus::Bitmap*	GetIcon(const std::wstring& iconName) const;

private:
	IconContainer	m_icons;
};


#endif // ManipulatorEditorResource_h__







