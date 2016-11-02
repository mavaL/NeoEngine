/********************************************************************
	created:	2016/10/28 10:45
	filename	TerrainLodManager.h
	author:		maval

	purpose:	From OGRE.
*********************************************************************/
#ifndef TerrainLodManager_h__
#define TerrainLodManager_h__


namespace Neo
{
	/** \addtogroup Optional Components
	*  @{
	*/
	/** \addtogroup Terrain
	*  Some details on the terrain LOD manager
	*  @{
	*/

	/** Terrain LOD data manager
	@par
		This class is used for managing terrain LOD data's loading, unloading.
	*/

	class TerrainLodManager
	{
	public:
		static const uint32 TERRAINLODDATA_CHUNK_ID;
		static const uint16 TERRAINLODDATA_CHUNK_VERSION;
		typedef std::vector<float> LodData;
		typedef std::vector<LodData> LodsData;

		struct LoadLodRequest
		{
			LoadLodRequest( TerrainLodManager* r, uint16 preparedLod, uint16 loadedLod, uint16 target )
				: requestee(r)
				, currentPreparedLod(preparedLod)
				, currentLoadedLod(loadedLod)
				, requestedLod(target)
			{
			}
			TerrainLodManager* requestee;
			uint16 currentPreparedLod;
			uint16 currentLoadedLod;
			uint16 requestedLod;
			friend std::ostream& operator<<(std::ostream& o, const LoadLodRequest& r)
			{ return o; }
		};

		struct LodInfo
		{
			uint32 treeStart;
			uint32 treeEnd;
			bool isLast;
			uint16 resolution;
			uint32 size;
		};
	public:
        TerrainLodManager(Terrain* t);
        TerrainLodManager(Terrain* t, const STRING& filename);
        virtual ~TerrainLodManager();

		static const uint16 WORKQUEUE_LOAD_LOD_DATA_REQUEST;
		//virtual bool canHandleRequest(const WorkQueue::Request* req, const WorkQueue* srcQ);
		//virtual bool canHandleResponse(const WorkQueue::Response* res, const WorkQueue* srcQ);
		//virtual WorkQueue::Response* handleRequest(const WorkQueue::Request* req, const WorkQueue* srcQ);
		//virtual void handleResponse(const WorkQueue::Response* res, const WorkQueue* srcQ);

		void updateToLodLevel(int lodLevel, bool synchronous = false);
		/// Save each LOD level separately compressed so seek is possible
	//	static void saveLodData(StreamSerialiser& stream, Terrain* terrain);

		/** Copy geometry data from buffer to mHeightData/mDeltaData
		  @param lodLevel A LOD level to work with
		  @param data Buffer which holds geometry data if separated form
		  @remarks Data in buffer has to be both height and delta data. First half is height data.
			    Seconds half is delta data.
		  */
		void fillBufferAtLod(uint32 lodLevel, const float* data, uint32 dataSize );
		/** Read separated geometry data from file into allocated memory
		  @param lowerLodBound Lower bound of LOD levels to load
          @param higherLodBound Upper bound of LOD levels to load
		  @remarks Geometry data are uncompressed using inflate() and stored into
			    allocated buffer
		  */
		void readLodData(uint16 lowerLodBound, uint16 higherLodBound);
		void waitForDerivedProcesses();

		int getHighestLodPrepared(){ return mHighestLodPrepared; }
		int getHighestLodLoaded(){ return mHighestLodLoaded; }
		int getTargetLodLevel(){ return mTargetLodLevel; }

		LodInfo& getLodInfo(uint32 lodLevel)
		{
			if(!mLodInfoTable)
				buildLodInfoTable();
			return mLodInfoTable[lodLevel];
		}
	private:
		void init();
		void buildLodInfoTable();

		/** Separate geometry data by LOD level
		@param data A geometry data to separate i.e. mHeightData/mDeltaData
        @param size Dimension of the input data
        @param numLodLevels Number of LOD levels in the input data
        @param lods The separated LOD data
        @remarks Allocates new array and fills it with geometry data coupled by LOD level from lowest LOD level to highest. Example:
			    before separation:
			    00 01 02 03 04
			    05 06 07 08 09
			    10 11 12 13 14
			    15 16 17 18 19
			    20 21 22 23 24
			    after separation:
			    2: 00 04 20 24
			    1: 02 10 12 14 22
			    0: 01 03 05 06 07 08 09 11 13 15 16 17 18 19 21 23
		  */
		static void separateData(float* data, uint16 size, uint16 numLodLevels, LodsData& lods );
	private:
		Terrain* mTerrain;
	//	DataStreamPtr mDataStream;
		size_t mStreamOffset;
		uint16 mWorkQueueChannel;

		LodInfo* mLodInfoTable;
		int mTargetLodLevel;    /// Which LOD level is demanded
		int mHighestLodPrepared;  /// Highest LOD level stored in memory i.e. mHeightData/mDeltaData
		int mHighestLodLoaded;  /// Highest LOD level loaded in GPU

		bool mIncreaseLodLevelInProgress;  /// Is increaseLodLevel() running?
		bool mLastRequestSynchronous;
	};
}

#endif // TerrainLodManager_h__
