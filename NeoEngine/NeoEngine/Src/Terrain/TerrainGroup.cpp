#include "stdafx.h"
#include "Terrain/TerrainGroup.h"

namespace Neo
{
	const uint16 TerrainGroup::WORKQUEUE_LOAD_REQUEST = 1;
	const uint32 TerrainGroup::CHUNK_ID = makeIdentifier("TERG");
	const uint16 TerrainGroup::CHUNK_VERSION = 1;
	uint32 TerrainGroup::LoadRequest::loadingTaskNum = 0;

	//---------------------------------------------------------------------
	TerrainGroup::TerrainGroup(Terrain::Alignment align, uint16 terrainSize, float terrainWorldSize)
		: mAlignment(align)
		, mTerrainSize(terrainSize)
		, mTerrainWorldSize(terrainWorldSize)
		, mOrigin(VEC3::ZERO)
		, mFilenamePrefix("terrain")
		, mFilenameExtension("dat")
	{
		mDefaultImportData.terrainAlign = align;
		mDefaultImportData.terrainSize = terrainSize;
		mDefaultImportData.worldSize = terrainWorldSize;
		// by default we delete input data because we copy it, unless user
		// passes us an ImportData where they explicitly don't want it copied
		mDefaultImportData.deleteInputData = true;

		//WorkQueue* wq = Root::getSingleton().getWorkQueue();
		//mWorkQueueChannel = wq->getChannel("Ogre/TerrainGroup");
		//wq->addRequestHandler(mWorkQueueChannel, this);
		//wq->addResponseHandler(mWorkQueueChannel, this);

	}
	//---------------------------------------------------------------------
	TerrainGroup::TerrainGroup()
		: mAlignment(Terrain::ALIGN_X_Z)
		, mTerrainSize(0)
		, mTerrainWorldSize(0)
		, mOrigin(VEC3::ZERO)
		, mFilenamePrefix("terrain")
		, mFilenameExtension("dat")
	{
		mDefaultImportData.terrainAlign = mAlignment;
		mDefaultImportData.terrainSize = 0;
		mDefaultImportData.worldSize = 0;
		// by default we delete input data because we copy it, unless user
		// passes us an ImportData where they explicitly don't want it copied
		mDefaultImportData.deleteInputData = true;

		//WorkQueue* wq = Root::getSingleton().getWorkQueue();
		//mWorkQueueChannel = wq->getChannel("Ogre/TerrainGroup");
		//wq->addRequestHandler(mWorkQueueChannel, this);
		//wq->addResponseHandler(mWorkQueueChannel, this);
	}
	//---------------------------------------------------------------------
	TerrainGroup::~TerrainGroup()
	{
		//if(mAutoUpdateLod)
		//{
		//	delete mAutoUpdateLod;
		//	mAutoUpdateLod = 0;
		//}

		//// waiting for terrain preparing finished
		//while(LoadRequest::loadingTaskNum>0)
		//{
		//	OGRE_THREAD_SLEEP(50);
		//	Root::getSingleton().getWorkQueue()->processResponses();
		//}

		removeAllTerrains();

		//WorkQueue* wq = Root::getSingleton().getWorkQueue();
		//wq->removeRequestHandler(mWorkQueueChannel, this);
		//wq->removeResponseHandler(mWorkQueueChannel, this);

	}
	//------------------------------------------------------------------------------------
	void TerrainGroup::UpdateLod()
	{
		for (TerrainSlotMap::iterator i = mTerrainSlots.begin(); i != mTerrainSlots.end(); ++i)
		{
			Terrain* t = i->second->instance;
			t->UpdateLod();
		}
	}
	//---------------------------------------------------------------------
	void TerrainGroup::Render()
	{
		for (TerrainSlotMap::iterator i = mTerrainSlots.begin(); i != mTerrainSlots.end(); ++i)
		{
			Terrain* t = i->second->instance;
			t->Render();
		}
	}

	//---------------------------------------------------------------------
	void TerrainGroup::setOrigin(const VEC3& pos)
	{
		if (!pos.IsEquivalent(mOrigin))
		{
			mOrigin = pos;
			for (TerrainSlotMap::iterator i = mTerrainSlots.begin(); i != mTerrainSlots.end(); ++i)
			{
				TerrainSlot* slot = i->second;
				if (slot->instance)
				{
					slot->instance->setPosition(getTerrainSlotPosition(slot->x, slot->y));
				}
			}
		}

	}
	//---------------------------------------------------------------------
	void TerrainGroup::setFilenameConvention(const STRING& prefix, const STRING& extension)
	{
		mFilenamePrefix = prefix;
		mFilenameExtension = extension;
	}
	//---------------------------------------------------------------------
	void TerrainGroup::setFilenamePrefix(const STRING& prefix)
	{
		mFilenamePrefix = prefix;
	}
	//---------------------------------------------------------------------
	void TerrainGroup::setFilenameExtension(const STRING& extension)
	{
		mFilenameExtension = extension;
	}
	//---------------------------------------------------------------------
	void TerrainGroup::defineTerrain(long x, long y)
	{
		defineTerrain(x, y, generateFilename(x, y));
	}
	//---------------------------------------------------------------------
	void TerrainGroup::defineTerrain(long x, long y, float constantHeight)
	{
		TerrainSlot* slot = getTerrainSlot(x, y, true);

		slot->def.useImportData();

		// Copy all settings, but make sure our primary settings are immutable
		*slot->def.importData = mDefaultImportData;
		slot->def.importData->constantHeight = constantHeight;
		slot->def.importData->terrainAlign = mAlignment;
		slot->def.importData->terrainSize = mTerrainSize;
		slot->def.importData->worldSize = mTerrainWorldSize;
	}
	//---------------------------------------------------------------------
	void TerrainGroup::defineTerrain(long x, long y, const Terrain::ImportData* importData)
	{
		TerrainSlot* slot = getTerrainSlot(x, y, true);

		slot->def.useImportData();

		// Copy all settings, but make sure our primary settings are immutable
		*slot->def.importData = *importData;
		slot->def.importData->terrainAlign = mAlignment;
		slot->def.importData->terrainSize = mTerrainSize;
		slot->def.importData->worldSize = mTerrainWorldSize;

	}
	//---------------------------------------------------------------------
	void TerrainGroup::defineTerrain(long x, long y, const Texture* img, const Terrain::LayerInstanceList* layers /*= 0*/)
	{
		TerrainSlot* slot = getTerrainSlot(x, y, true);

		slot->freeInstance();
		slot->def.useImportData();

		*slot->def.importData = mDefaultImportData;

		// Copy all settings, but make sure our primary settings are immutable
		// copy image - this will get deleted by importData
		slot->def.importData->inputImage = const_cast<Texture*>(img);
		if (layers)
		{
			// copy (held by value)
			slot->def.importData->layerList = *layers;
		}
		slot->def.importData->terrainAlign = mAlignment;
		slot->def.importData->terrainSize = mTerrainSize;
		slot->def.importData->worldSize = mTerrainWorldSize;

	}
	//---------------------------------------------------------------------
	void TerrainGroup::defineTerrain(long x, long y, const float* pFloat /*= 0*/, 
		const Terrain::LayerInstanceList* layers /*= 0*/)
	{
		TerrainSlot* slot = getTerrainSlot(x, y, true);

		slot->freeInstance();
		slot->def.useImportData();

		*slot->def.importData = mDefaultImportData;

		// Copy all settings, but make sure our primary settings are immutable
		if(pFloat)
		{
			// copy data - this will get deleted by importData
			slot->def.importData->inputFloat = new float[mTerrainSize*mTerrainSize];
			memcpy(slot->def.importData->inputFloat, pFloat, sizeof(float) * mTerrainSize*mTerrainSize);
		}
		if (layers)
		{
			// copy (held by value)
			slot->def.importData->layerList = *layers;
		}
		slot->def.importData->terrainAlign = mAlignment;
		slot->def.importData->terrainSize = mTerrainSize;
		slot->def.importData->worldSize = mTerrainWorldSize;

	}
	//---------------------------------------------------------------------
	void TerrainGroup::defineTerrain(long x, long y, const STRING& filename)
	{
		TerrainSlot* slot = getTerrainSlot(x, y, true);

		slot->freeInstance();

		slot->def.useFilename();
		slot->def.filename = filename;

	}
	//---------------------------------------------------------------------
	void TerrainGroup::loadAllTerrains(bool synchronous /*= false*/)
	{
		// Just a straight iteration - for the numbers involved not worth 
		// keeping a loaded / unloaded list
		for (TerrainSlotMap::iterator i = mTerrainSlots.begin(); i != mTerrainSlots.end(); ++i)
		{
			TerrainSlot* slot = i->second;
			loadTerrainImpl(slot, synchronous);
		}

	}
	//---------------------------------------------------------------------
	void TerrainGroup::saveAllTerrains(bool onlyIfModified, bool replaceFilenames)
	{
		for (TerrainSlotMap::iterator i = mTerrainSlots.begin(); i != mTerrainSlots.end(); ++i)
		{
			TerrainSlot* slot = i->second;
			if (slot->instance)
			{
				Terrain* t = slot->instance;
				if (t->isLoaded() && 
					(!onlyIfModified || t->isModified()))
				{
					// Overwrite the file names?
					if (replaceFilenames)
						slot->def.filename = generateFilename(slot->x, slot->y);

					STRING filename;
					if (!slot->def.filename.empty())
						filename = slot->def.filename;
					else
						filename = generateFilename(slot->x, slot->y);

					_AST(0);
			//		t->save(filename);
				}
			}	
		}
	}
	//---------------------------------------------------------------------
	void TerrainGroup::loadTerrain(long x, long y, bool synchronous /*= false*/)
	{
		TerrainSlot* slot = getTerrainSlot(x, y, false);
		if (slot)
		{
			loadTerrainImpl(slot, synchronous);
		}

	}
	//---------------------------------------------------------------------
	void TerrainGroup::loadTerrainImpl(TerrainSlot* slot, bool synchronous)
	{
		if (!slot->instance && (!slot->def.filename.empty() || slot->def.importData))
		{
			// Allocate in main thread so no race conditions
			slot->instance = new Terrain;
			// Use shared pool of buffers
			slot->instance->setGpuBufferAllocator(&mBufferAllocator);

			//LoadRequest req;
			//req.slot = slot;
			//req.origin = this;
			//++LoadRequest::loadingTaskNum;
			//Root::getSingleton().getWorkQueue()->addRequest(
			//	mWorkQueueChannel, WORKQUEUE_LOAD_REQUEST, 
			//	Any(req), 0, synchronous);

			TerrainSlotDefinition& def = slot->def;
			Terrain* t = slot->instance;
			_AST(t && "Terrain instance should have been constructed in the main thread");

			try
			{
				//if (!def.filename.empty())
				//	t->prepare(def.filename);
				//else
				{
					_AST(def.importData && "No import data or file name");
					t->prepare(*def.importData);
					// if this worked, we can destroy the input data to save space
					def.freeImportData();
				}
	
			}
			catch (std::exception&)
			{
				_AST(0);
			}

			// do final load now we've prepared in the background
			// we must set the position
			t->setPosition(getTerrainSlotPosition(slot->x, slot->y));

			// the LOD will be auto-updated, then load lowest LOD
			//if (mAutoUpdateLod)
			//	t->load(-1, false);
			//else
				t->load(0, true);

			// hook up with neighbours
			for (int i = -1; i <= 1; ++i)
			{
				for (int j = -1; j <= 1; ++j)
				{
					if (i != 0 || j != 0)
						connectNeighbour(slot, i, j);
				}

			}
		}
	}
	//---------------------------------------------------------------------
	//void TerrainGroup::increaseLodLevel(long x, long y, bool synchronous /* = false */)
	//{
	//	TerrainSlot* slot = getTerrainSlot(x, y, false);
	//	if (slot && slot->instance)
	//	{
	//		slot->instance->increaseLodLevel(synchronous);
	//	}
	//}
	//void TerrainGroup::decreaseLodLevel(long x, long y)
	//{
	//	TerrainSlot* slot = getTerrainSlot(x, y, false);
	//	if (slot && slot->instance)
	//	{
	//		slot->instance->decreaseLodLevel();
	//	}
	//}
	////---------------------------------------------------------------------
	//void TerrainGroup::setAutoUpdateLod(TerrainAutoUpdateLod* updater)
	//{
	//	if(mAutoUpdateLod)
	//		delete mAutoUpdateLod;
	//	mAutoUpdateLod = updater;
	//}
	////---------------------------------------------------------------------
	//void TerrainGroup::autoUpdateLod(long x, long y, bool synchronous, const Any &data)
	//{
	//	if(mAutoUpdateLod)
	//	{
	//		TerrainSlot* slot = getTerrainSlot(x, y, synchronous);
	//		if (slot)
	//		{
	//			mAutoUpdateLod->autoUpdateLod(slot->instance, synchronous, data);
	//		}
	//	}
	//}
	////---------------------------------------------------------------------
	//void TerrainGroup::autoUpdateLodAll(bool synchronous, const Any &data)
	//{
	//	if(mAutoUpdateLod)
	//	{
	//		for (TerrainSlotMap::iterator i = mTerrainSlots.begin(); i != mTerrainSlots.end(); ++i)
	//		{
	//			TerrainSlot* slot = i->second;
	//			mAutoUpdateLod->autoUpdateLod(slot->instance, synchronous, data);
	//		}
	//	}
	//}
	//---------------------------------------------------------------------
	void TerrainGroup::unloadTerrain(long x, long y)
	{
		TerrainSlot* slot = getTerrainSlot(x, y, false);
		if (slot)
		{
			slot->freeInstance();
		}
	}
	//---------------------------------------------------------------------
	void TerrainGroup::removeTerrain(long x, long y)
	{
		uint32 key = packIndex(x, y);
		TerrainSlotMap::iterator i = mTerrainSlots.find(key);
		if (i != mTerrainSlots.end())
		{
			delete i->second;
			mTerrainSlots.erase(i);
		}
	}
	//---------------------------------------------------------------------
	void TerrainGroup::removeAllTerrains()
	{
		for (TerrainSlotMap::iterator i = mTerrainSlots.begin(); i != mTerrainSlots.end(); ++i)
		{
			delete i->second;
		}
		mTerrainSlots.clear();
		// Also clear buffer pools, if we're clearing completely may not be representative
		mBufferAllocator.freeAllBuffers();
	}
	//---------------------------------------------------------------------
	TerrainGroup::TerrainSlotDefinition* TerrainGroup::getTerrainDefinition(long x, long y) const
	{
		TerrainSlot* slot = getTerrainSlot(x, y);
		if (slot)
			return &slot->def;
		else
			return 0;

	}
	//---------------------------------------------------------------------
	Terrain* TerrainGroup::getTerrain(long x, long y) const
	{
		TerrainSlot* slot = getTerrainSlot(x, y);
		if (slot)
			return slot->instance;
		else
			return 0;
	}
	//---------------------------------------------------------------------
	float TerrainGroup::getHeightAtWorldPosition(float x, float y, float z, Terrain** ppTerrain /* = 0*/)
	{
		return getHeightAtWorldPosition(VEC3(x, y, z), ppTerrain);

	}
	//---------------------------------------------------------------------
	float TerrainGroup::getHeightAtWorldPosition(const VEC3& pos, Terrain** ppTerrain /*= 0*/)
	{
		long x, y;
		convertWorldPositionToTerrainSlot(pos, &x, &y);
		TerrainSlot* slot = getTerrainSlot(x, y);
		if (slot && slot->instance && slot->instance->isLoaded())
		{
			if (ppTerrain)
				*ppTerrain = slot->instance;
			return slot->instance->getHeightAtWorldPosition(pos);
		}
		else
		{
			if (ppTerrain)
				*ppTerrain = 0;
			return 0;
		}
	}
	//---------------------------------------------------------------------
	TerrainGroup::RayResult TerrainGroup::rayIntersects(const RAY& ray, float distanceLimit /* = 0*/) const 
	{
		_AST(0);
		return RayResult(false, 0, VEC3::ZERO);

		//long curr_x, curr_z;
		//convertWorldPositionToTerrainSlot(ray.getOrigin(), &curr_x, &curr_z);
		//TerrainSlot* slot = getTerrainSlot(curr_x, curr_z);
		//RayResult result(false, 0, VEC3::ZERO);

		//VEC3 tmp, localRayDir, centreOrigin, offset;
		//// get the middle of the current tile
		//convertTerrainSlotToWorldPosition(curr_x, curr_z, &centreOrigin);
		//offset = ray.getOrigin() - centreOrigin;
		//localRayDir = ray.getDirection();
		//switch (getAlignment())
		//{
		//case Terrain::ALIGN_X_Y:
		//	std::swap(localRayDir.y, localRayDir.z);
		//	std::swap(offset.y, offset.z);
		//	break;
		//case Terrain::ALIGN_Y_Z:
		//	// x = z, z = y, y = -x
		//	tmp.x = localRayDir.z; 
		//	tmp.z = localRayDir.y; 
		//	tmp.y = -localRayDir.x; 
		//	localRayDir = tmp;
		//	tmp.x = offset.z; 
		//	tmp.z = offset.y; 
		//	tmp.y = -offset.x; 
		//	offset = tmp;
		//	break;
		//case Terrain::ALIGN_X_Z:
		//	// already in X/Z but values increase in -Z
		//	localRayDir.z = -localRayDir.z;
		//	offset.z = -offset.z;
		//	break;
		//}
		//// Normalise the offset  based on the world size of a square, and rebase to the bottom left
		//offset /= mTerrainWorldSize;
		//offset += 0.5f;
		//// this is our counter moving away from the 'current' square
		//VEC3 inc(Math::Abs(localRayDir.x), Math::Abs(localRayDir.y), Math::Abs(localRayDir.z));
		//long xdir = localRayDir.x > 0.0f ? 1 : -1;
		//long zdir = localRayDir.z > 0.0f ? 1 : -1;

		//// We're always counting from 0 to 1 regardless of what direction we're heading
		//if (xdir < 0)
		//	offset.x = 1.0f - offset.x;
		//if (zdir < 0)
		//	offset.z = 1.0f - offset.z;

		//// find next slot
		//bool keepSearching = true;
		//int numGaps = 0;
		//while(keepSearching)
		//{
		//	if (Math::RealEqual(inc.x, 0.0f) && Math::RealEqual(inc.z, 0.0f))
		//		keepSearching = false;

  //          while ( (!slot || !slot->instance) && keepSearching)
		//	{
		//		++numGaps;
		//		/// if we don't find any filled slot in 6 traversals, give up
		//		if (numGaps > 6)
		//		{
		//			keepSearching = false;
		//			break;
		//		}
		//		// find next slot
		//		VEC3 oldoffset = offset;
		//		while (offset.x < 1.0f && offset.z < 1.0f)
		//			offset += inc;
		//		if (offset.x >= 1.0f && offset.z >= 1.0f)
		//		{
		//			// We crossed a corner, need to figure out which we passed first
		//			float diffz = 1.0f - oldoffset.z;
		//			float diffx = 1.0f - oldoffset.x;
		//			float distz = diffz / inc.z;
		//			float distx = diffx / inc.x;
		//			if (distx < distz)
		//			{
		//				curr_x += xdir;
		//				offset.x -= 1.0f;
		//			}
		//			else
		//			{
		//				curr_z += zdir;
		//				offset.z -= 1.0f;
		//			}

		//		}
		//		else if (offset.x >= 1.0f)
		//		{
		//			curr_x += xdir;
		//			offset.x -= 1.0f;
		//		}
		//		else if (offset.z >= 1.0f)
		//		{
		//			curr_z += zdir;
		//			offset.z -= 1.0f;
		//		}
		//		if (distanceLimit)
		//		{
		//			VEC3 worldPos;
		//			convertTerrainSlotToWorldPosition(curr_x, curr_z, &worldPos);
		//			if (ray.getOrigin().distance(worldPos) > distanceLimit)
		//			{
		//				keepSearching = false;
		//				break;
		//			}
		//		}
		//		slot = getTerrainSlot(curr_x, curr_z);
		//	}
		//	if (slot && slot->instance)
		//	{
		//		numGaps = 0;
		//		// don't cascade into neighbours
		//		std::pair<bool, VEC3> raypair = slot->instance->rayIntersects(ray, false, distanceLimit);
		//		if (raypair.first)
		//		{
		//			keepSearching = false;
		//			result.hit = true;
		//			result.terrain = slot->instance;
		//			result.position = raypair.second;
		//		}
		//		else
		//		{
		//			// not this one, trigger search for another slot
		//			slot = 0;
		//		}
		//	}

		//}


		//return result;

	}
	//---------------------------------------------------------------------
	void TerrainGroup::boxIntersects(const AABB& box, TerrainList* resultList) const
	{
		_AST(0);

		//resultList->clear();
		//// Much simpler test
		//for (TerrainSlotMap::const_iterator i = mTerrainSlots.begin(); i != mTerrainSlots.end(); ++i)
		//{
		//	if (i->second->instance && box.intersects(i->second->instance->getWorldAABB()))
		//		resultList->push_back(i->second->instance);
		//}
	}
	//---------------------------------------------------------------------
	//void TerrainGroup::sphereIntersects(const Sphere& sphere, TerrainList* resultList) const
	//{
	//	resultList->clear();
	//	// Much simpler test
	//	for (TerrainSlotMap::const_iterator i = mTerrainSlots.begin(); i != mTerrainSlots.end(); ++i)
	//	{
	//		if (i->second->instance && sphere.intersects(i->second->instance->getWorldAABB()))
	//			resultList->push_back(i->second->instance);
	//	}

	//}
	//---------------------------------------------------------------------
	void TerrainGroup::convertWorldPositionToTerrainSlot(const VEC3& pos, long *x, long *y) const
	{
		// 0,0 terrain is centred at the origin
		VEC3 terrainPos;
		// convert to standard xy base (z up), make relative to origin
		Terrain::convertWorldToTerrainAxes(mAlignment, pos - mOrigin, &terrainPos);

		float offset = mTerrainWorldSize * 0.5f;
		terrainPos.x += offset;
		terrainPos.y += offset;

		*x = static_cast<long>(floor(terrainPos.x / mTerrainWorldSize));
		*y = static_cast<long>(floor(terrainPos.y / mTerrainWorldSize));


	}
	//---------------------------------------------------------------------
	void TerrainGroup::convertTerrainSlotToWorldPosition(long x, long y, VEC3* pos) const
	{
		VEC3 terrainPos(x * mTerrainWorldSize, y * mTerrainWorldSize, 0);

		Terrain::convertTerrainToWorldAxes(mAlignment, terrainPos, pos);
		*pos += mOrigin;


	}
	//---------------------------------------------------------------------
	bool TerrainGroup::isDerivedDataUpdateInProgress() const
	{
		for (TerrainSlotMap::const_iterator i = mTerrainSlots.begin(); i != mTerrainSlots.end(); ++i)
		{
			if (i->second->instance && i->second->instance->isDerivedDataUpdateInProgress())
				return true;
		}
		return false;
	}
	//---------------------------------------------------------------------
	//bool TerrainGroup::canHandleRequest(const WorkQueue::Request* req, const WorkQueue* srcQ)
	//{
	//	LoadRequest lreq = any_cast<LoadRequest>(req->getData());
	//	// only deal with own requests
	//	if (lreq.origin != this)
	//		return false;
	//	else
	//		return RequestHandler::canHandleRequest(req, srcQ);

	//}
	//---------------------------------------------------------------------
	//WorkQueue::Response* TerrainGroup::handleRequest(const WorkQueue::Request* req, const WorkQueue* srcQ)
	//{
	//	LoadRequest lreq = any_cast<LoadRequest>(req->getData());

	//	TerrainSlotDefinition& def = lreq.slot->def;
	//	Terrain* t = lreq.slot->instance;
	//	_AST(t && "Terrain instance should have been constructed in the main thread");
	//	WorkQueue::Response* response = 0;
	//	try
	//	{
	//		if (!def.filename.empty())
	//			t->prepare(def.filename);
	//		else
	//		{
	//			_AST(def.importData && "No import data or file name");
	//			t->prepare(*def.importData);
	//			// if this worked, we can destroy the input data to save space
	//			def.freeImportData();
	//		}
	//		response = new WorkQueue::Response(req, true, Any());
	//	}
	//	catch (Exception& e)
	//	{
	//		// oops
	//		response = new WorkQueue::Response(req, false, Any(), 
	//			e.getFullDescription());
	//	}

	//	return response;


	//}
	//---------------------------------------------------------------------
	//bool TerrainGroup::canHandleResponse(const WorkQueue::Response* res, const WorkQueue* srcQ)
	//{
	//	LoadRequest lreq = any_cast<LoadRequest>(res->getRequest()->getData());
	//	// only deal with own requests
	//	if (lreq.origin != this)
	//		return false;
	//	else
	//		return true;

	//}
	//---------------------------------------------------------------------
	//void TerrainGroup::handleResponse(const WorkQueue::Response* res, const WorkQueue* srcQ)
	//{
	//	// No response data, just request
	//	LoadRequest lreq = any_cast<LoadRequest>(res->getRequest()->getData());
	//	--LoadRequest::loadingTaskNum;

	//	if (res->succeeded())
	//	{
	//		TerrainSlot* slot = lreq.slot;
	//		Terrain* terrain = slot->instance;
	//		if (terrain)
	//		{
	//			// do final load now we've prepared in the background
	//			// we must set the position
	//			terrain->setPosition(getTerrainSlotPosition(slot->x, slot->y));

	//			// the LOD will be auto-updated, then load lowest LOD
	//			if(mAutoUpdateLod)
	//				terrain->load(-1,false);
	//			else
	//				terrain->load(0,true);

	//			// hook up with neighbours
	//			for (int i = -1; i <= 1; ++i)
	//			{
	//				for (int j = -1; j <= 1; ++j)
	//				{
	//					if (i != 0 || j != 0)
	//						connectNeighbour(slot, i, j);
	//				}

	//			}
	//		}
	//	}
	//	else
	//	{
	//		// oh dear
	//		LogManager::getSingleton().stream(LML_CRITICAL) <<
	//			"We failed to prepare the terrain at (" << lreq.slot->x << ", " <<
	//			lreq.slot->y <<") with the error '" << res->getMessages() << "'";
	//		lreq.slot->freeInstance();
	//	}
	//}
	//---------------------------------------------------------------------
	void TerrainGroup::connectNeighbour(TerrainSlot* slot, long offsetx, long offsety)
	{
		TerrainSlot* neighbourSlot = getTerrainSlot(slot->x + offsetx, slot->y + offsety);
		if (neighbourSlot && neighbourSlot->instance && neighbourSlot->instance->isLoaded())
		{
			// reclaculate if imported
			slot->instance->setNeighbour(Terrain::getNeighbourIndex(offsetx, offsety), neighbourSlot->instance, 
				slot->def.importData != 0);
		}
	}
	//---------------------------------------------------------------------
	uint32 TerrainGroup::packIndex(long x, long y) const
	{
		// Convert to signed 16-bit so sign bit is in bit 15
		short xs16 = static_cast<short>(x);
		short ys16 = static_cast<short>(y);

		// convert to unsigned because we do not want to propagate sign bit to 32-bits
		uint16 x16 = static_cast<uint16>(xs16);
		uint16 y16 = static_cast<uint16>(ys16);

		uint32 key = 0;
		key = (x16 << 16) | y16;

		return key;
	}
	//---------------------------------------------------------------------
	void TerrainGroup::unpackIndex(uint32 key, long *x, long *y)
	{
		// inverse of packIndex
		// unsigned versions
		uint16 y16 = static_cast<uint16>(key & 0xFFFF);
		uint16 x16 = static_cast<uint16>((key >> 16) & 0xFFFF);

		*x = static_cast<short>(x16);
		*y = static_cast<short>(y16);
	}

	//---------------------------------------------------------------------
	STRING TerrainGroup::generateFilename(long x, long y) const
	{
		_AST(0);
		return "";
		//StringUtil::StrStreamType str;
		//str << mFilenamePrefix << "_" << 
		//	std::setw(8) << std::setfill('0') << std::hex << packIndex(x, y) << 
		//	"." << mFilenameExtension;
		//return str.str();
	}
	//---------------------------------------------------------------------
	VEC3 TerrainGroup::getTerrainSlotPosition(long x, long y)
	{
		VEC3 pos;
		convertTerrainSlotToWorldPosition(x, y, &pos);
		return pos;
	}
	//---------------------------------------------------------------------
	TerrainGroup::TerrainSlot* TerrainGroup::getTerrainSlot(long x, long y, bool createIfMissing)
	{
		uint32 key = packIndex(x, y);
		TerrainSlotMap::iterator i = mTerrainSlots.find(key);
		if (i != mTerrainSlots.end())
			return i->second;
		else if (createIfMissing)
		{
			TerrainSlot* slot = new TerrainSlot(x, y);
			mTerrainSlots[key] = slot;
			return slot;
		}
		return 0;
	}
	//---------------------------------------------------------------------
	TerrainGroup::TerrainSlot* TerrainGroup::getTerrainSlot(long x, long y) const
	{
		uint32 key = packIndex(x, y);
		TerrainSlotMap::const_iterator i = mTerrainSlots.find(key);
		if (i != mTerrainSlots.end())
			return i->second;
		else
			return 0;
	}
	//---------------------------------------------------------------------
	void TerrainGroup::freeTemporaryResources()
	{
		for (TerrainSlotMap::iterator i = mTerrainSlots.begin(); i != mTerrainSlots.end(); ++i)
		{
			if (i->second->instance)
				i->second->instance->freeTemporaryResources();
		}
	}
	//---------------------------------------------------------------------
	void TerrainGroup::update(bool synchronous)
	{
		for (TerrainSlotMap::iterator i = mTerrainSlots.begin(); i != mTerrainSlots.end(); ++i)
		{
			if (i->second->instance)
				i->second->instance->update();
		}
	}
	//---------------------------------------------------------------------
	void TerrainGroup::updateGeometry()
	{
		for (TerrainSlotMap::iterator i = mTerrainSlots.begin(); i != mTerrainSlots.end(); ++i)
		{
			if (i->second->instance)
				i->second->instance->updateGeometry();
		}
	}
	//---------------------------------------------------------------------
	void TerrainGroup::updateDerivedData(bool synchronous, uint8 typeMask)
	{
		for (TerrainSlotMap::iterator i = mTerrainSlots.begin(); i != mTerrainSlots.end(); ++i)
		{
			if (i->second->instance)
				i->second->instance->updateDerivedData();
		}
	}
	//---------------------------------------------------------------------
	//TerrainGroup::TerrainIterator TerrainGroup::getTerrainIterator()
	//{
	//	return TerrainIterator(mTerrainSlots.begin(), mTerrainSlots.end());
	//}
	////---------------------------------------------------------------------
	//TerrainGroup::ConstTerrainIterator TerrainGroup::getTerrainIterator() const
	//{
	//	return ConstTerrainIterator(mTerrainSlots.begin(), mTerrainSlots.end());
	//}
	//---------------------------------------------------------------------
	//void TerrainGroup::saveGroupDefinition(const STRING& filename)
	//{
	//	DataStreamPtr stream = Root::getSingleton().createFileStream(filename,
	//		getResourceGroup(), true);
	//	StreamSerialiser ser(stream);
	//	saveGroupDefinition(ser);
	//}
	////---------------------------------------------------------------------
	//void TerrainGroup::saveGroupDefinition(StreamSerialiser& ser)
	//{
	//	ser.writeChunkBegin(CHUNK_ID, CHUNK_VERSION);
	//	// Base details
	//	ser.write(&mAlignment);
	//	ser.write(&mTerrainSize);
	//	ser.write(&mTerrainWorldSize);
	//	ser.write(&mFilenamePrefix);
	//	ser.write(&mFilenameExtension);
	//	ser.write(&mResourceGroup);
	//	ser.write(&mOrigin);

	//	uint32 autoUpdateLodStrategyId = (mAutoUpdateLod) ? mAutoUpdateLod->getStrategyId() : 0;
	//	ser.write(&autoUpdateLodStrategyId);

	//	// Default import settings (those not duplicated by the above)
	//	ser.write(&mDefaultImportData.constantHeight);
	//	ser.write(&mDefaultImportData.inputBias);
	//	ser.write(&mDefaultImportData.inputScale);
	//	ser.write(&mDefaultImportData.maxBatchSize);
	//	ser.write(&mDefaultImportData.minBatchSize);
	//	Terrain::writeLayerDeclaration(mDefaultImportData.layerDeclaration, ser);
	//	Terrain::writeLayerInstanceList(mDefaultImportData.layerList, ser);


	//	ser.writeChunkEnd(CHUNK_ID);
	//}
	////---------------------------------------------------------------------
	//void TerrainGroup::loadGroupDefinition(const STRING& filename)
	//{
	//	DataStreamPtr stream = Root::getSingleton().openFileStream(filename, 
	//		getResourceGroup());
	//	StreamSerialiser ser(stream);
	//	loadGroupDefinition(ser);
	//}
	////---------------------------------------------------------------------
	//void TerrainGroup::loadGroupDefinition(StreamSerialiser& ser)
	//{
	//	if (!ser.readChunkBegin(CHUNK_ID, CHUNK_VERSION))
	//		OGRE_EXCEPT(Exception::ERR_ITEM_NOT_FOUND, 
	//			"Stream does not contain TerrainGroup data", __FUNCTION__);

	//	// Base details
	//	ser.read(&mAlignment);
	//	ser.read(&mTerrainSize);
	//	ser.read(&mTerrainWorldSize);
	//	ser.read(&mFilenamePrefix);
	//	ser.read(&mFilenameExtension);
	//	ser.read(&mResourceGroup);
	//	ser.read(&mOrigin);
	//	uint32 autoUpdateLodStrategyId;
	//	ser.read(&autoUpdateLodStrategyId);
	//	mAutoUpdateLod = TerrainAutoUpdateLodFactory::getAutoUpdateLod( autoUpdateLodStrategyId );

	//	// Default import settings (those not duplicated by the above)
	//	ser.read(&mDefaultImportData.constantHeight);
	//	ser.read(&mDefaultImportData.inputBias);
	//	ser.read(&mDefaultImportData.inputScale);
	//	ser.read(&mDefaultImportData.maxBatchSize);
	//	ser.read(&mDefaultImportData.minBatchSize);
	//	Terrain::readLayerDeclaration(ser, mDefaultImportData.layerDeclaration);
	//	Terrain::readLayerInstanceList(ser, mDefaultImportData.layerDeclaration.samplers.size(), 
	//		mDefaultImportData.layerList);

	//	// copy data that would have normally happened on construction
	//	mDefaultImportData.terrainAlign = mAlignment;
	//	mDefaultImportData.terrainSize = mTerrainSize;
	//	mDefaultImportData.worldSize = mTerrainWorldSize;
	//	mDefaultImportData.deleteInputData = true;

	//	ser.readChunkEnd(CHUNK_ID);


	//}
	//---------------------------------------------------------------------
    void TerrainGroup::setTerrainWorldSize(float newWorldSize)
    {
		if (newWorldSize != mTerrainWorldSize)
		{
			mTerrainWorldSize = newWorldSize;
			for (TerrainSlotMap::iterator i = mTerrainSlots.begin(); i != mTerrainSlots.end(); ++i)
			{
				if (i->second->instance)
				{
					i->second->instance->setWorldSize(newWorldSize);
					i->second->instance->setPosition(getTerrainSlotPosition(i->second->x, i->second->y));
				}
			}
		}
    }
	//---------------------------------------------------------------------
    void TerrainGroup::setTerrainSize(uint16 newTerrainSize)
    {
		if (newTerrainSize != mTerrainSize)
		{
			mTerrainSize = newTerrainSize;
			for (TerrainSlotMap::iterator i = mTerrainSlots.begin(); i != mTerrainSlots.end(); ++i)
			{
				if (i->second->instance)
				{
					i->second->instance->setSize(newTerrainSize);
				}
			}
		}
    }
	//---------------------------------------------------------------------
	//---------------------------------------------------------------------
	TerrainGroup::TerrainSlotDefinition::~TerrainSlotDefinition()
	{
		freeImportData();
	}
	//---------------------------------------------------------------------
	void TerrainGroup::TerrainSlotDefinition::freeImportData()
	{
		delete importData;
		importData = 0;
	}
	//---------------------------------------------------------------------
	void TerrainGroup::TerrainSlotDefinition::useImportData()
	{
		filename.clear();
		freeImportData();
		importData = new Terrain::ImportData;
		// we're going to own all the data in the def
		importData->deleteInputData = true;

	}
	//---------------------------------------------------------------------
	void TerrainGroup::TerrainSlotDefinition::useFilename()
	{
		freeImportData();
	}
	//---------------------------------------------------------------------
	//---------------------------------------------------------------------
	TerrainGroup::TerrainSlot::~TerrainSlot()
	{
		freeInstance();
	}
	//---------------------------------------------------------------------
	void TerrainGroup::TerrainSlot::freeInstance()
	{
		delete instance;
		instance = 0;
	}

}

