#include "stdafx.h"
#include "ManipulatorTerrain.h"
#include "ManipulatorScene.h"
#include "../EditorDefine.h"
#include "Utility.h"
#include "Scene.h"


ManipulatorTerrain::ManipulatorTerrain()
:m_curBrushIndex(1)
,m_curEditMode(eTerrainEditMode_None)
,m_curEditLayer(-1)
,m_bGrassMode(false)
{
	m_brush[0].reset(new BrushCircle);
	m_brush[1].reset(new BrushSquare);
	m_brush[1]->SetDimension(10, 10);

	ManipulatorScene::GetSingleton().AddCallback(this);
}

ManipulatorTerrain::~ManipulatorTerrain()
{
	ManipulatorScene::GetSingleton().RemoveCallback(this);
}

void ManipulatorTerrain::OnSceneClose()
{
}

void ManipulatorTerrain::OnSceneNew()
{
	//设置当前编辑层为0
	m_curEditLayer = 0;
}

void ManipulatorTerrain::OnSceneOpen()
{
	//设置当前编辑层为0
	m_curEditLayer = 0;
}

void ManipulatorTerrain::Serialize( rapidxml::xml_document<>* doc, rapidxml::xml_node<>* XMLNode )
{
// 	String strWorldSize = Ogre::StringConverter::toString(GetWorldSize());
// 	String strTerrainSize = Ogre::StringConverter::toString(GetMapSize());
// 
// 	float pixelError = ManipulatorSystem.GetScene()->GetTerrainOption()->getMaxPixelError();
// 	String strPixelError = Ogre::StringConverter::toString(pixelError);
// 
// 	XMLNode->append_attribute(doc->allocate_attribute("worldSize", doc->allocate_string(strWorldSize.c_str())));
// 	XMLNode->append_attribute(doc->allocate_attribute("mapSize", doc->allocate_string(strTerrainSize.c_str())));
// 	XMLNode->append_attribute(doc->allocate_attribute("tuningMaxPixelError", doc->allocate_string(strPixelError.c_str())));
// 
// 	//保存地形数据
// 	std::wstring fullPath(ManipulatorSystem.GenerateSceneFullPath());
// 	fullPath += L"terrain.dat";
// 	Ogre::DataStreamPtr stream = Ogre::Root::getSingleton().createFileStream(Utility::UnicodeToEngine(fullPath), 
// 		Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME, true);
// 
// 	Ogre::DataStreamPtr compressStream(new Ogre::DeflateStream(Utility::UnicodeToEngine(fullPath), stream));
// 	Ogre::StreamSerialiser ser(compressStream);
// 
// 	ManipulatorSystem.GetScene()->GetTerrain()->save(ser);
}

float ManipulatorTerrain::GetHeightAt( const VEC2& worldPos )
{
// 	Terrain* pTerrain = nullptr;
// 	float retH = ManipulatorSystem.GetScene()->GetTerrainGroup()->getHeightAtWorldPosition(worldPos.x, 0, worldPos.y, &pTerrain);
// 	//assert(pTerrain && "worldPos is invalid!");
// 
// 	return retH;
	return 0;
}

void ManipulatorTerrain::SetTerrainDeformEnabled(bool bEnable)
{
	m_brush[m_curBrushIndex]->SetActive(bEnable);
	m_curEditMode = bEnable ? eTerrainEditMode_Deform : eTerrainEditMode_None;
}

void ManipulatorTerrain::SetTerrainSplatEnabled( bool bEnable )
{
	m_brush[m_curBrushIndex]->SetActive(bEnable);
	m_curEditMode = bEnable ? eTerrainEditMode_Splat : eTerrainEditMode_None;
}

void ManipulatorTerrain::SetBrushPosition( const VEC3& pos )
{
	//检测防止画刷范围超出地形边界
// 	VEC3 clampPos(pos);
// 	float brushDim1, brushDim2;
// 	m_brush[m_curBrushIndex]->GetDimension(brushDim1, brushDim2);
// 
// 	float worldSize = GetWorldSize();
// 
// 	if (m_curBrushIndex == 0)	//circle
// 	{
// 		if(clampPos.x - brushDim2 < -worldSize/2)	clampPos.x = brushDim2 - worldSize/2;
// 		if(clampPos.x + brushDim2 > worldSize/2)	clampPos.x = worldSize/2 - brushDim2;
// 		if(clampPos.z - brushDim2 < -worldSize/2)	clampPos.z = brushDim2 - worldSize/2;
// 		if(clampPos.z + brushDim2 > worldSize/2)	clampPos.z = worldSize/2 - brushDim2;
// 	}
// 	else	//square
// 	{
// 		if(clampPos.x - brushDim1/2 < -worldSize/2)	clampPos.x = brushDim1/2 - worldSize/2;
// 		if(clampPos.x + brushDim1/2 > worldSize/2)	clampPos.x = worldSize/2 - brushDim1/2;
// 		if(clampPos.z - brushDim2/2 < -worldSize/2)	clampPos.z = brushDim2/2 - worldSize/2;
// 		if(clampPos.z + brushDim2/2 > worldSize/2)	clampPos.z = worldSize/2 - brushDim2/2;
// 	}
// 
// 	m_brush[m_curBrushIndex]->SetPosition(clampPos);
}

// bool ManipulatorTerrain::GetRayIntersectPoint( const RAY& worldRay, VEC3& retHitPos )
// {
// 	irr::scene::ITerrainSceneNode* terrain = ManipulatorScene::GetSingleton().GetScene()->GetTerrain();
// 	assert(terrain);
// 
// 	irr::core::triangle3df hitTri;
// 	SCENENODE* hitNode = RenderSys.GetSceneManager()->getSceneCollisionManager()->getSceneNodeAndCollisionPointFromRay(
// 		worldRay, retHitPos, hitTri, Kratos::eQueryMask_Terrain);
// 
// 	return hitNode != nullptr;
// }

void ManipulatorTerrain::OnGizmoNodeReset()
{
	m_brush[0]->OnGizmoNodeReset();
	m_brush[1]->OnGizmoNodeReset();
}

void ManipulatorTerrain::SetSquareBrushWidth( float w )
{
	float oldW, oldH;
	m_brush[1]->GetDimension(oldW, oldH);
	m_brush[1]->SetDimension(w, oldH);
}

void ManipulatorTerrain::SetSquareBrushHeight( float h )
{
	float oldW, oldH;
	m_brush[1]->GetDimension(oldW, oldH);
	m_brush[1]->SetDimension(oldW, h);
}

float ManipulatorTerrain::GetSquareBrushWidth()
{
	float oldW, oldH;
	m_brush[1]->GetDimension(oldW, oldH);

	return oldW;
}

float ManipulatorTerrain::GetSquareBrushHeight()
{
	float oldW, oldH;
	m_brush[1]->GetDimension(oldW, oldH);

	return oldH;
}

void ManipulatorTerrain::OnEdit( float dt )
{
// 	assert(m_curEditMode != eTerrainEditMode_None);
// 
// 	//第0层不能编辑BlendMap,应该从第1层开始
// 	if(m_curEditMode == eTerrainEditMode_Splat && m_curEditLayer == 0)
// 		return;
// 
// 	Ogre::Terrain* pTerrain = ManipulatorSystem.GetScene()->GetTerrain();
// 
// 	const Vector3 brushPos = m_brush[m_curBrushIndex]->GetPosition();
// 	Vector3 tsPos;
// 	pTerrain->getTerrainPosition(brushPos, &tsPos);
// 
// 	float brushSizeW, brushSizeH;
// 	m_brush[m_curBrushIndex]->GetDimension(brushSizeW, brushSizeH);
// 	float worldSize = GetWorldSize();
// 	brushSizeW /= worldSize;
// 	brushSizeH /= worldSize;
// 
// 	int multiplier;
// 	Ogre::TerrainLayerBlendMap* layer = nullptr;
// 	if(m_curEditMode == eTerrainEditMode_Deform)
// 	{
// 		multiplier = pTerrain->getSize() - 1;
// 	}
// 	else
// 	{
// 		multiplier = pTerrain->getLayerBlendMapSize();
// 		layer = pTerrain->getLayerBlendMap(m_curEditLayer);
// 	}
// 
// 	long startx = (long)((tsPos.x - brushSizeW / 2) * multiplier);
// 	long starty = (long)((tsPos.y - brushSizeH / 2) * multiplier);
// 	long endx = (long)((tsPos.x + brushSizeW / 2) * multiplier);
// 	long endy= (long)((tsPos.y + brushSizeH / 2) * multiplier);
// 	startx = max(startx, 0L);
// 	starty = max(starty, 0L);
// 	endx = min(endx, (long)multiplier);
// 	endy = min(endy, (long)multiplier);
// 	
// 	for (long y = starty; y <= endy; ++y)
// 	{
// 		for (long x = startx; x <= endx; ++x)
// 		{
// 			float tsXdist = (x / multiplier) - tsPos.x;
// 			float tsYdist = (y / multiplier)  - tsPos.y;
// 
// 			if(m_curEditMode == eTerrainEditMode_Deform)
// 			{
// 				float* pData = pTerrain->getHeightData();
// 				pData[y*GetMapSize()+x] += 100.0f * dt;
// 
// 			}
// 			else
// 			{
// 				float* pData = layer->getBlendPointer();
// 				size_t imgY = multiplier - y;
// 				float newValue = pData[imgY*multiplier+x] + dt;
// 				newValue = Ogre::Math::Clamp(newValue, 0.0f, 1.0f);
// 				pData[imgY*multiplier+x] = newValue;
// 			}
// 		}
// 	}
// 	
// 	
// 	if(m_curEditMode == eTerrainEditMode_Deform)
// 	{
// 		Ogre::Rect rect(startx, starty, endx, endy);
// 		pTerrain->dirtyRect(rect);
// 		pTerrain->update();
// 	}
// 	else
// 	{
// 		size_t imgStartY = multiplier - starty;
// 		size_t imgEndY = multiplier - endy;
// 		Ogre::Rect rect(startx, min(imgStartY,imgEndY), endx, max(imgStartY,imgEndY));
// 
// 		layer->dirtyRect(rect);
// 		layer->update();
// 	}
}

// const Ogre::StringVector& ManipulatorTerrain::GetAllLayerTexThumbnailNames()
// {
// 	m_vecLayerTex.clear();
// 
// 	Ogre::FileInfoListPtr fileinfo = Ogre::ResourceGroupManager::getSingleton().findResourceFileInfo(
// 		"TerrainTextures", "*.png");
// 
// 	int i = 0;
// 	m_vecLayerTex.resize(fileinfo->size());
// 	for (auto iter=fileinfo->begin(); iter!=fileinfo->end(); ++iter)
// 	{
// 		const Ogre::FileInfo& info = (*iter);
// 		m_vecLayerTex[i++] = info.archive->getName() + "/" + info.filename;
// 	}
// 
// 	return m_vecLayerTex;
// }

void ManipulatorTerrain::SetLayerTexWorldSize(int nLayer, float fSize)
{
// 	Ogre::Terrain* pTerrain = ManipulatorSystem.GetScene()->GetTerrain();
// 	assert(nLayer >=0 && nLayer<(int)pTerrain->getLayerCount());
// 	pTerrain->setLayerWorldSize(nLayer, fSize);
}

float ManipulatorTerrain::GetLayerTexWorldSize( int nLayer )
{
// 	Ogre::Terrain* pTerrain = ManipulatorSystem.GetScene()->GetTerrain();
// 	assert(nLayer >=0 && nLayer<(int)pTerrain->getLayerCount());
// 	return pTerrain->getLayerWorldSize(nLayer);
	return 0;
}

void ManipulatorTerrain::SetLayerTexture( int nLayer, const std::string& diffuseMapName )
{
// 	Ogre::Terrain* pTerrain = ManipulatorSystem.GetScene()->GetTerrain();
// 	assert(nLayer >=0 && nLayer<(int)pTerrain->getLayerCount());
// 
// 	Ogre::String name = diffuseMapName.substr(0, diffuseMapName.find("diffuse"));
// 
// 	//diffuse map
// 	pTerrain->setLayerTextureName(nLayer, 0, name + "diffusespecular.dds");
// 	//normal map
// 	pTerrain->setLayerTextureName(nLayer, 1, name + "normalheight.dds");
}

void ManipulatorTerrain::SetLayerTexture( int nLayer, int diffuseMapID )
{
// 	Ogre::Terrain* pTerrain = ManipulatorSystem.GetScene()->GetTerrain();
// 	assert(nLayer >=0 && nLayer<(int)pTerrain->getLayerCount());
// 
// 	Ogre::String filename, path;
// 	Ogre::StringUtil::splitFilename(m_vecLayerTex[diffuseMapID], filename, path);
// 
// 	SetLayerTexture(nLayer, filename);
}

const std::string ManipulatorTerrain::GetLayerDiffuseMap( int nLayer ) const
{
// 	Ogre::Terrain* pTerrain = ManipulatorSystem.GetScene()->GetTerrain();
// 	assert(nLayer >=0 && nLayer<(int)pTerrain->getLayerCount());
// 	return pTerrain->getLayerTextureName(nLayer, 0);
	return "";
}

const std::string ManipulatorTerrain::GetLayerNormalMap( int nLayer ) const
{
// 	Ogre::Terrain* pTerrain = ManipulatorSystem.GetScene()->GetTerrain();
// 	assert(nLayer >=0 && nLayer<(int)pTerrain->getLayerCount());
// 	return pTerrain->getLayerTextureName(nLayer, 1);
	return "";
}

float ManipulatorTerrain::GetWorldSize() const
{
	//return ManipulatorSystem.GetScene()->GetTerrainGroup()->getTerrainWorldSize();
	return 0;
}

size_t ManipulatorTerrain::GetMapSize() const
{
	//return ManipulatorSystem.GetScene()->GetTerrainGroup()->getTerrainSize();
	return 0;
}

float ManipulatorTerrain::GetMaxPixelError() const
{
	//return ManipulatorSystem.GetScene()->GetTerrainOption()->getMaxPixelError();
	return 0;
}

float ManipulatorTerrain::GetSkirtSize() const
{
	//return ManipulatorSystem.GetScene()->GetTerrainOption()->getSkirtSize();
	return 0;
}

int ManipulatorTerrain::GetMinBatchSize() const
{
	//return ManipulatorSystem.GetScene()->GetTerrain()->getMinBatchSize();
	return 0;
}

int ManipulatorTerrain::GetMaxBatchSize() const
{
	//return ManipulatorSystem.GetScene()->GetTerrain()->getMaxBatchSize();
	return 0;
}

float ManipulatorTerrain::GetCompositeMapDist() const
{
	//return ManipulatorSystem.GetScene()->GetTerrainOption()->getCompositeMapDistance();
	return 0;
}

void ManipulatorTerrain::SetMaxPixelError( float f )
{
	//ManipulatorSystem.GetScene()->GetTerrainOption()->setMaxPixelError(f);
}

void ManipulatorTerrain::SetSkirtSize( float f )
{
	//ManipulatorSystem.GetScene()->GetTerrainOption()->setSkirtSize(f);
}

void ManipulatorTerrain::SetCompositeMapDist( float f )
{
	//ManipulatorSystem.GetScene()->GetTerrainOption()->setCompositeMapDistance(f);
}

