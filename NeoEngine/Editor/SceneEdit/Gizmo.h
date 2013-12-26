/********************************************************************
	created:	22:12:2012   12:01
	filename: 	Gizmo.h
	author:		maval
	
	purpose:	编辑器用的各种指示器
*********************************************************************/
#ifndef Gizmo_h__
#define Gizmo_h__



//
//矩形
//
class GizmoRectangle/* : public Ogre::SimpleRenderable*/
{
public:
	GizmoRectangle() {}
	virtual ~GizmoRectangle();

public:
// 	virtual Ogre::Real getSquaredViewDepth(const Ogre::Camera* cam) const { (void)cam; return 0; }
// 	virtual Ogre::Real getBoundingRadius(void) const { return 0; }

public:
	void	InitRenderable(float w, float h);
	void	DestroyRenderable();
	void	UpdatePosition(const VEC3& pos, float w, float h);

protected:
	//返回单位矩阵.因为顶点坐标直接给的世界坐标
	//virtual void getWorldTransforms( Ogre::Matrix4* xform ) const;

private:
	//点的分布密度,即1个世界单位对应点的个数
	static const int POINT_DENSITY = 5;
};

//
//圆形
//
class GizmoCircle/* : public Ogre::SimpleRenderable*/
{
public:
	GizmoCircle() {}
	virtual ~GizmoCircle();

public:
// 	virtual Ogre::Real getSquaredViewDepth(const Ogre::Camera* cam) const { (void)cam; return 0; }
// 	virtual Ogre::Real getBoundingRadius(void) const { return 0; }

public:
	void	InitRenderable();
	void	DestroyRenderable() {}
};

//
//坐标轴和旋转轴
//
class GizmoAxis
{
public:
	GizmoAxis();
	~GizmoAxis();

	enum eAxis
	{
		eAxis_X,
		eAxis_Y,
		eAxis_Z,
		eAxis_None
	};

public:
// 	void	Attach(Ogre::Node* pNode);
 	void	Show(bool bShow, bool bMoveOrRotate);
 	void	Reset();
 	void	OnGizmoNodeReset();
 	void	HighlightAxis(bool bHighlight, eAxis axis, int mode);
// 	void	Update(const Ogre::Ray& ray, int mode);
	bool	IsActive() const { return m_curActiveAxis != eAxis_None; }
	eAxis	GetActiveAxis() const { return m_curActiveAxis; }

private:
	void	_Init();
	void	_Destroy();

private:
// 	Ogre::SceneNode*	m_pObjGizmoNode;
// 	Ogre::Node*			m_pAttachNode;
// 	Ogre::Entity*		m_pAxisMove[3];		//坐标轴
// 	Ogre::Entity*		m_pAxisRotate[3];	//旋转轴
// 	Ogre::Plane			m_plane[3];			//辅助平面,用来检测拾取
	eAxis				m_curActiveAxis;	//当前激活轴
};


#endif // Gizmo_h__







