#ifndef TerrainQuadTreeNode_h__
#define TerrainQuadTreeNode_h__

#include "MathDef.h"
#include "AABB.h"

namespace Neo
{
	class TerrainQuadTreeNode
	{
	public:
		/** Constructor.
		@param terrain The ultimate parent terrain
		@param parent Optional parent node (in which case xoff, yoff are 0 and size must be entire terrain)
		@param xoff, yoff Offsets from the start of the terrain data in 2D
		@param size The size of the node in vertices at the highest LOD
		@param lod The base LOD level
		@param depth The depth that this node is at in the tree (or convenience)
		@param quadrant The index of the quadrant (0, 1, 2, 3)
		*/
		TerrainQuadTreeNode(Terrain* terrain, TerrainQuadTreeNode* parent, 
			uint16 xoff, uint16 yoff, uint16 size, uint16 lod, uint16 depth, uint16 quadrant);
		virtual ~TerrainQuadTreeNode();

		void CreateEntity();
		void Render();

		/// Get the horizontal offset into the main terrain data of this node
		uint16 getXOffset() const { return mOffsetX; }
		/// Get the vertical offset into the main terrain data of this node
		uint16 getYOffset() const { return mOffsetY; }
		/// Is this a leaf node (no children)
		bool isLeaf() const;
		/// Get the base LOD level this node starts at (the highest LOD it handles)
		uint16 getBaseLod() const { return mBaseLod; }
		/// Get the number of LOD levels this node can represent itself (only > 1 for leaf nodes)
		uint16 getLodCount() const;
		/// Get child node
		TerrainQuadTreeNode* getChild(unsigned short child) const;
		/// Get parent node
		TerrainQuadTreeNode* getParent() const;
		/// Get ultimate parent terrain
		Terrain* getTerrain() const;

		/// Prepare node and children (perform CPU tasks, may be background thread)
		void prepare();
		/// Prepare node from a stream
	//	void prepare(StreamSerialiser& stream);
		/// Load node and children (perform GPU tasks, will be render thread)
		void load();
		/// Load node and children in a depth range (perform GPU tasks, will be render thread)
		void load(uint16 depthStart, uint16 depthEnd);
		void loadSelf();
		/// Unload node and children (perform GPU tasks, will be render thread)
		void unload();
		/// Unload node and children in a depth range (perform GPU tasks, will be render thread)
		void unload(uint16 depthStart, uint16 depthEnd);
		/// Unprepare node and children (perform CPU tasks, may be background thread)
		void unprepare();
		/// Save node to a stream
	//	void save(StreamSerialiser& stream);

		struct LodLevel
		{
			/// Number of vertices rendered down one side (not including skirts)
			uint16 batchSize;
			/// Index data on the gpu
			IndexBuffer* pIndexBuf;
			uint32 nIndexCount;
			/// Maximum delta height between this and the next lower lod
			float maxHeightDelta;
			/// Temp calc area for max height delta
			float calcMaxHeightDelta;
			/// The most recently calculated transition distance
			float lastTransitionDist;
			/// The cFactor value used to calculate transitionDist
			float lastCFactor;

			LodLevel() : batchSize(0), pIndexBuf(0), maxHeightDelta(0), calcMaxHeightDelta(0),
				lastTransitionDist(0), lastCFactor(0), nIndexCount(0) {}
		};
		typedef std::vector<LodLevel*> LodLevelList;

		/** Get the LodLevel information for a given lod.
		@param lod The lod level index relative to this classes own list; if you
			want to use a global lod level, subtract getBaseLod() first. Higher
			LOD levels are lower detail.
		*/
		const LodLevel* getLodLevel(uint16 lod);

		/** Notify the node (and children) that deltas are going to be calculated for a given range.
		@remarks
			Based on this call, we can know whether or not to reset the max height.
		*/
		void preDeltaCalculation(const Rect& rect);

		/** Notify the node (and children) of a height delta value. */
		void notifyDelta(uint16 x, uint16 y, uint16 lod, float delta);

		/** Notify the node (and children) that deltas have finished being calculated.
		*/
		void postDeltaCalculation(const Rect& rect);

		/** Promote the delta values calculated to the runtime ones (this must
			be called in the main thread). 
		*/
		void finaliseDeltaValues(const Rect& rect);

		/** Assign vertex data to the tree, from a depth and at a given resolution.
		@param treeDepthStart The first depth of tree that should use this data, owns the data
		@param treeDepthEnd The end of the depth that should use this data (exclusive)
		@param resolution The resolution of the data to use (compared to full terrain)
		@param sz The size of the data along one edge
		*/
		void assignVertexData(uint16 treeDepthStart, uint16 treeDepthEnd, uint16 resolution, uint32 sz);

		/** Tell a node that it should use an anscestor's vertex data.
		@param treeDepthEnd The end of the depth that should use this data (exclusive)
		@param resolution The resolution of the data to use
		*/
		void useAncestorVertexData(TerrainQuadTreeNode* owner, uint16 treeDepthEnd, uint16 resolution);

		/** Tell the node to update its vertex data for a given region. 
		*/
		void updateVertexData(bool positions, bool deltas, const Rect& rect, bool cpuData);



		/** Merge a point (relative to terrain node) into the local bounds, 
			and that of children if applicable.
		@param x,y The point on the terrain to which this position corresponds 
			(affects which nodes update their bounds)
		@param pos The position relative to the terrain centre
		*/
		void mergeIntoBounds(long x, long y, const VEC3& pos);
		/** Reset the bounds of this node and all its children for the region given.
		@param rect The region for which bounds should be reset, in top-level terrain coords
		*/
		void resetBounds(const Rect& rect);
		
		/** Returns true if the given rectangle overlaps the terrain area that
			this node references.
		 @param rect The region in top-level terrain coords
		*/
		bool rectIntersectsNode(const Rect& rect);
		/** Returns true if the given rectangle completely contains the terrain area that
		this node references.
		@param rect The region in top-level terrain coords
		*/
		bool rectContainsNode(const Rect& rect);
		/** Returns true if the given point is in the terrain area that
		 this node references.
		 @param x,y The point in top-level terrain coords
		 */
		bool pointIntersectsNode(long x, long y);

		/// Get the AABB (local coords) of this node
		const AABB& getAABB() const;
		/// Get the bounding radius of this node
		float getBoundingRadius() const;
		/// Get the local centre of this node, relative to parent terrain centre
		const VEC3& getLocalCentre() const { return mLocalCentre; }
		/// Get the minimum height of the node
		float getMinHeight() const;
		/// Get the maximum height of the node
		float getMaxHeight() const;

		/** Calculate appropriate LOD for this node and children
		@param cam The camera to be used (this should already be the LOD camera)
		@param cFactor The cFactor which incorporates the viewport size, max pixel error and lod bias
		@return true if this node or any of its children were selected for rendering
		*/
		bool calculateCurrentLod(float cFactor);

		/// Get the current LOD index (only valid after calculateCurrentLod)
		int getCurrentLod() const { return mCurrentLod; }
		/// Returns whether this node is rendering itself at the current LOD level
		bool isRenderedAtCurrentLod() const;
		/// Returns whether this node or its children are being rendered at the current LOD level
		bool isSelfOrChildRenderedAtCurrentLod() const;
		/// Manually set the current LOD, intended for internal use only
		void setCurrentLod(int lod);
		/// Get the transition state between the current LOD and the next lower one (only valid after calculateCurrentLod)
		float getLodTransition() const { return mLodTransition; }
		/// Manually set the current LOD transition state, intended for internal use only
		void setLodTransition(float t);

		Entity* getEntity() { return mEntity; }
		void enableWireframe(bool b);

		/// Buffer binding used for holding positions
		static unsigned short POSITION_BUFFER;
		/// Buffer binding used for holding delta values
		static unsigned short DELTA_BUFFER;

	protected:
		Terrain* mTerrain;
		TerrainQuadTreeNode* mParent;
		TerrainQuadTreeNode* mChildren[4];
		LodLevelList mLodLevels;

		Entity*	mEntity;

		uint16 mOffsetX, mOffsetY;
		uint16 mBoundaryX, mBoundaryY;
		/// The number of vertices at the original terrain resolution this node encompasses
		uint16 mSize;
		uint16 mBaseLod;
		uint16 mDepth;
		uint16 mQuadrant;
		VEC3 mLocalCentre; /// Relative to terrain centre
		AABB mAABB; /// Relative to mLocalCentre
		float mBoundingRadius; /// Relative to mLocalCentre
		int mCurrentLod; /// -1 = none (do not render)
		float mLodTransition; /// 0-1 transition to lower LOD
		/// The child with the largest height delta 
		TerrainQuadTreeNode* mChildWithMaxHeightDelta;
		bool mSelfOrChildRendered;

		struct VertexDataRecord
		{
			void*		cpuVertexPosData;
			void*		cpuVertexDeltaData;
			uint32		cpuVertexCount;

			VertexBuffer*	gpuPosVertexBuf;
			VertexBuffer*	gpuDeltaVertexBuf;

			/// Resolution of the data compared to the base terrain data (NOT number of vertices!)
			uint16 resolution;
			/// Size of the data along one edge
			uint16 size;
			/// Number of quadtree levels (including this one) this data applies to
			uint16 treeLevels;
			/// Number of rows and columns of skirts
			uint16 numSkirtRowsCols;
			/// The number of rows / cols to skip in between skirts
			uint16 skirtRowColSkip;
			/// Is the GPU vertex data out of date?
			bool gpuVertexDataDirty;

			VertexDataRecord(uint16 res, uint16 sz, uint16 lvls) 
				: cpuVertexPosData(0), cpuVertexDeltaData(0), resolution(res), size(sz),
				cpuVertexCount(0), gpuPosVertexBuf(0), gpuDeltaVertexBuf(0),
				treeLevels(lvls), numSkirtRowsCols(0),
                skirtRowColSkip(0), gpuVertexDataDirty(false) {}
		};
		
		TerrainQuadTreeNode* mNodeWithVertexData;
		VertexDataRecord* mVertexDataRecord;

	//	float getSquaredViewDepth(const Camera* cam) const;


		const VertexDataRecord* getVertexDataRecord() const;
		void createCpuVertexData();
		/* Update the vertex buffers - the rect in question is relative to the whole terrain, 
			not the local vertex data (which may use a subset)
		*/
		void updateVertexBuffer(const Rect& rect);
		void destroyCpuVertexData();

		void createGpuVertexData();
		void destroyGpuVertexData();
		void updateGpuVertexData();
		void createGpuIndexData();
		void destroyGpuIndexData();

		void populateIndexData(uint16 batchSize, IndexBuffer** ppIndexBuf, uint32& nIndexCount);
		void writePosVertex(uint16 x, uint16 y, float height, const VEC3& pos, float uvScale, float** ppPos);
		void writeDeltaVertex(uint16 x, uint16 y, float delta, float deltaThresh, float** ppDelta);
		
		uint16 calcSkirtVertexIndex(uint16 mainIndex, bool isCol);

	};
}

#endif // TerrainQuadTreeNode_h__
