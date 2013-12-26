/********************************************************************
	created:	14:12:2012   0:52
	filename: 	ManipulatorTerrain.h
	author:		maval
	
	purpose:	地形操作类.
*********************************************************************/
#ifndef ManipulatorTerrain_h__
#define ManipulatorTerrain_h__


#include "ManipulatorEventCallback.h"
#include "../Brush.h"

//----------------------------------------------------------------------------------------
class ManipulatorTerrain : public ManipulatorSceneEventCallback
{
public:
	ManipulatorTerrain();
	~ManipulatorTerrain();

	//////////////事件回调
	virtual void	OnSceneNew();
	virtual void	OnSceneOpen();
	virtual void	OnSceneClose();
	
	enum eTerrainEditMode
	{
		eTerrainEditMode_None,
		eTerrainEditMode_Deform,
		eTerrainEditMode_Splat
	};

public:
	void	Serialize(rapidxml::xml_document<>* doc, rapidxml::xml_node<>* XMLNode);
	void	OnGizmoNodeReset();
	float	GetHeightAt(const VEC2& worldPos);
	//bool	GetRayIntersectPoint(const RAY& worldRay, VEC3& retHitPos);
	float	GetWorldSize() const;
	size_t	GetMapSize() const;
	float	GetMaxPixelError() const;
	float	GetSkirtSize() const;
	int		GetMinBatchSize() const;
	int		GetMaxBatchSize() const;
	float	GetCompositeMapDist() const;

	void	SetMaxPixelError(float f);
	void	SetSkirtSize(float f);
	void	SetCompositeMapDist(float f);

	//brush stuff
	void	SetBrushPosition(const VEC3& pos);
	void	SetSquareBrushWidth(float w);
	void	SetSquareBrushHeight(float h);
	float	GetSquareBrushWidth();
	float	GetSquareBrushHeight();

	void	OnEdit(float dt);
	//deform
	void	SetTerrainDeformEnabled(bool bEnable);
	bool	GetTerrainDeformEnabled() { return m_curEditMode == eTerrainEditMode_Deform; }

	//splat
	void	SetTerrainSplatEnabled(bool bEnable);
	bool	GetTerrainSplatEnabled() { return m_curEditMode == eTerrainEditMode_Splat; }
//	const Ogre::StringVector& GetAllLayerTexThumbnailNames();

	//grass
	void	SetGrassModeEnabled(bool bEnable) { m_bGrassMode = bEnable; }
	bool	GetGrassModeEnabled() const { return m_bGrassMode; }

	///设置获取Layer相关
	void	SetLayerTexWorldSize(int nLayer, float fSize);
	float	GetLayerTexWorldSize(int nLayer);
	void	SetLayerTexture(int nLayer, const std::string& diffuseMapName);
	void	SetLayerTexture(int nLayer, int diffuseID);
	const std::string GetLayerDiffuseMap(int nLayer) const;
	const std::string GetLayerNormalMap(int nLayer) const;

	//设置当前编辑layer
	void	SetCurEditLayer(int nLayer) { m_curEditLayer = nLayer; }
	int		GetCurEditLayer() const { return m_curEditLayer; }

private:
	//	Ogre::StringVector		m_vecLayerTex;		//画刷可用的所有纹理名
	std::unique_ptr<Brush>		m_brush[2];			//0:cirle 1:square
	int							m_curBrushIndex;
	eTerrainEditMode			m_curEditMode;
	int							m_curEditLayer;		
	bool						m_bGrassMode;
};





#endif // ManipulatorTerrain_h__







