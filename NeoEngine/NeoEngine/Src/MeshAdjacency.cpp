#include "stdafx.h"
#include "Mesh.h"

namespace Neo
{
	static const uint32_t UNUSED32 = uint32_t(-1);

	//-------------------------------------------------------------------------------------
	// Utilities
	//-------------------------------------------------------------------------------------
	struct vertexHashEntry
	{
		XMFLOAT3            v;
		uint32_t            index;
		vertexHashEntry *   next;
	};

	struct edgeHashEntry
	{
		uint32_t        v1;
		uint32_t        v2;
		uint32_t        vOther;
		uint32_t        face;
		edgeHashEntry * next;
	};

	// <algorithm> std::make_heap doesn't match D3DX10 so we use the same algorithm here
	void MakeXHeap(_Out_writes_(nVerts) uint32_t *index, _In_reads_(nVerts) const XMFLOAT3* positions, size_t nVerts)
	{
		for (uint32_t vert = 0; vert < nVerts; ++vert)
		{
			index[vert] = vert;
		}

		if (nVerts > 1)
		{
			// Create the heap
			uint32_t iulLim = uint32_t(nVerts);

			for (uint32_t vert = uint32_t(nVerts >> 1); --vert != -1;)
			{
				// Percolate down
				uint32_t iulI = vert;
				uint32_t iulJ = vert + vert + 1;
				uint32_t ulT = index[iulI];

				while (iulJ < iulLim)
				{
					uint32_t ulJ = index[iulJ];

					if (iulJ + 1 < iulLim)
					{
						uint32_t ulJ1 = index[iulJ + 1];
						if (positions[ulJ1].x <= positions[ulJ].x)
						{
							iulJ++;
							ulJ = ulJ1;
						}
					}

					if (positions[ulJ].x > positions[ulT].x)
						break;

					index[iulI] = index[iulJ];
					iulI = iulJ;
					iulJ += iulJ + 1;
				}

				index[iulI] = ulT;
			}

			// Sort the heap
			while (--iulLim != -1)
			{
				uint32_t ulT = index[iulLim];
				index[iulLim] = index[0];

				// Percolate down
				uint32_t iulI = 0;
				uint32_t iulJ = 1;

				while (iulJ < iulLim)
				{
					uint32_t ulJ = index[iulJ];

					if (iulJ + 1 < iulLim)
					{
						uint32_t ulJ1 = index[iulJ + 1];
						if (positions[ulJ1].x <= positions[ulJ].x)
						{
							iulJ++;
							ulJ = ulJ1;
						}
					}

					if (positions[ulJ].x > positions[ulT].x)
						break;

					index[iulI] = index[iulJ];
					iulI = iulJ;
					iulJ += iulJ + 1;
				}

				assert(iulI < nVerts);
				_Analysis_assume_(iulI < nVerts);
				index[iulI] = ulT;
			}
		}
	}
	//------------------------------------------------------------------------------------
	template<class index_t>
	HRESULT GeneratePointReps(_In_reads_(nFaces * 3) const index_t* indices, size_t nFaces,
		_In_reads_(nVerts) const XMFLOAT3* positions, size_t nVerts,
		float epsilon,
		_Out_writes_(nVerts) uint32_t* pointRep)
	{
		std::unique_ptr<uint32_t[]> temp(new (std::nothrow) uint32_t[nVerts + nFaces * 3]);
		if (!temp)
			return E_OUTOFMEMORY;

		uint32_t* vertexToCorner = temp.get();
		uint32_t* vertexCornerList = temp.get() + nVerts;

		memset(vertexToCorner, 0xff, sizeof(uint32_t) * nVerts);
		memset(vertexCornerList, 0xff, sizeof(uint32_t) * nFaces * 3);

		// build initial lists and validate indices
		for (size_t j = 0; j < (nFaces * 3); ++j)
		{
			index_t k = indices[j];
			if (k == index_t(-1))
				continue;

			if (k >= nVerts)
				return E_UNEXPECTED;

			vertexCornerList[j] = vertexToCorner[k];
			vertexToCorner[k] = uint32_t(j);
		}

		if (epsilon == 0.f)
		{
			size_t hashSize = nVerts / 3;

			std::unique_ptr<vertexHashEntry*[]> hashTable(new (std::nothrow) vertexHashEntry*[hashSize]);
			if (!hashTable)
				return E_OUTOFMEMORY;

			memset(hashTable.get(), 0, sizeof(vertexHashEntry*) * hashSize);

			std::unique_ptr<vertexHashEntry[]> hashEntries(new (std::nothrow) vertexHashEntry[nVerts]);
			if (!hashEntries)
				return E_OUTOFMEMORY;

			uint32_t freeEntry = 0;

			for (size_t vert = 0; vert < nVerts; ++vert)
			{
				uint32_t hashKey = (*reinterpret_cast<const uint32_t*>(&positions[vert].x)
					+ *reinterpret_cast<const uint32_t*>(&positions[vert].y)
					+ *reinterpret_cast<const uint32_t*>(&positions[vert].z)) % hashSize;

				uint32_t found = UNUSED32;

				for (auto current = hashTable[hashKey]; current != 0; current = current->next)
				{
					if (current->v.x == positions[vert].x
						&& current->v.y == positions[vert].y
						&& current->v.z == positions[vert].z)
					{
						uint32_t head = vertexToCorner[vert];

						bool ispresent = false;

						while (head != UNUSED32)
						{
							uint32_t face = head / 3;
							_AST(face < nFaces);
							_Analysis_assume_(face < nFaces);

							_AST((indices[face * 3] == vert) || (indices[face * 3 + 1] == vert) || (indices[face * 3 + 2] == vert));

							if ((indices[face * 3] == current->index) || (indices[face * 3 + 1] == current->index) || (indices[face * 3 + 2] == current->index))
							{
								ispresent = true;
								break;
							}

							head = vertexCornerList[head];
						}

						if (!ispresent)
						{
							found = current->index;
							break;
						}
					}
				}

				if (found != UNUSED32)
				{
					pointRep[vert] = found;
				}
				else
				{
					_AST(freeEntry < nVerts);
					_Analysis_assume_(freeEntry < nVerts);

					auto newEntry = &hashEntries[freeEntry];
					++freeEntry;

					newEntry->v = positions[vert];
					newEntry->index = uint32_t(vert);
					newEntry->next = hashTable[hashKey];
					hashTable[hashKey] = newEntry;

					pointRep[vert] = uint32_t(vert);
				}
			}

			_AST(freeEntry <= nVerts);

			return S_OK;
		}
		else
		{
			std::unique_ptr<uint32_t[]> xorder(new uint32_t[nVerts]);

			// order in descending order
			MakeXHeap(xorder.get(), positions, nVerts);

			memset(pointRep, 0xff, sizeof(uint32_t) * nVerts);

			XMVECTOR vepsilon = XMVectorReplicate(epsilon * epsilon);

			uint32_t head = 0;
			uint32_t tail = 0;

			while (tail < nVerts)
			{
				// move head until just out of epsilon
				while ((head < nVerts)
					&& ((positions[tail].x - positions[head].x) <= epsilon))
				{
					++head;
				}

				// check new tail against all points up to the head
				uint32_t tailIndex = xorder[tail];
				_AST(tailIndex < nVerts);
				_Analysis_assume_(tailIndex < nVerts);
				if (pointRep[tailIndex] == UNUSED32)
				{
					pointRep[tailIndex] = tailIndex;

					XMVECTOR outer = XMLoadFloat3(&positions[tailIndex]);

					for (size_t current = tail + 1; current < head; ++current)
					{
						uint32_t curIndex = xorder[current];
						_AST(curIndex < nVerts);
						_Analysis_assume_(curIndex < nVerts);

						// if the point is already assigned, ignore it
						if (pointRep[curIndex] == UNUSED32)
						{
							XMVECTOR inner = XMLoadFloat3(&positions[curIndex]);

							XMVECTOR diff = XMVector3LengthSq(inner - outer);

							if (XMVector2Less(diff, vepsilon))
							{
								uint32_t headvc = vertexToCorner[tailIndex];

								bool ispresent = false;

								while (headvc != UNUSED32)
								{
									uint32_t face = headvc / 3;
									_AST(face < nFaces);
									_Analysis_assume_(face < nFaces);

									_AST((indices[face * 3] == tailIndex) || (indices[face * 3 + 1] == tailIndex) || (indices[face * 3 + 2] == tailIndex));

									if ((indices[face * 3] == curIndex) || (indices[face * 3 + 1] == curIndex) || (indices[face * 3 + 2] == curIndex))
									{
										ispresent = true;
										break;
									}

									headvc = vertexCornerList[headvc];
								}

								if (!ispresent)
								{
									pointRep[curIndex] = tailIndex;
								}
							}
						}
					}
				}

				++tail;
			}

			return S_OK;
		}
	}
	//------------------------------------------------------------------------------------
	template<class index_t>
	HRESULT _ConvertPointRepsToAdjacency(_In_reads_(nFaces * 3) const index_t* indices, size_t nFaces,
		_In_reads_(nVerts) const XMFLOAT3* positions, size_t nVerts,
		_In_reads_(nVerts) const uint32_t* pointRep,
		_Out_writes_(nFaces * 3) uint32_t* adjacency)
	{
		size_t hashSize = nVerts / 3;

		std::unique_ptr<edgeHashEntry*[]> hashTable(new (std::nothrow) edgeHashEntry*[hashSize]);
		if (!hashTable)
			return E_OUTOFMEMORY;

		memset(hashTable.get(), 0, sizeof(edgeHashEntry*) * hashSize);

		std::unique_ptr<edgeHashEntry[]> hashEntries(new (std::nothrow) edgeHashEntry[3 * nFaces]);
		if (!hashEntries)
			return E_OUTOFMEMORY;

		uint32_t freeEntry = 0;

		// add face edges to hash table and validate indices
		for (size_t face = 0; face < nFaces; ++face)
		{
			index_t i0 = indices[face * 3];
			index_t i1 = indices[face * 3 + 1];
			index_t i2 = indices[face * 3 + 2];

			if (i0 == index_t(-1)
				|| i1 == index_t(-1)
				|| i2 == index_t(-1))
				continue;

			if (i0 >= nVerts
				|| i1 >= nVerts
				|| i2 >= nVerts)
				return E_UNEXPECTED;

			uint32_t v1 = pointRep[i0];
			uint32_t v2 = pointRep[i1];
			uint32_t v3 = pointRep[i2];

			// filter out degenerate triangles
			if (v1 == v2 || v1 == v3 || v2 == v3)
				continue;

			for (uint32_t point = 0; point < 3; ++point)
			{
				uint32_t va = pointRep[indices[face * 3 + point]];
				uint32_t vb = pointRep[indices[face * 3 + ((point + 1) % 3)]];
				uint32_t vOther = pointRep[indices[face * 3 + ((point + 2) % 3)]];

				uint32_t hashKey = va % hashSize;

				_AST(freeEntry < (3 * nFaces));
				_Analysis_assume_(freeEntry < (3 * nFaces));

				auto newEntry = &hashEntries[freeEntry];
				++freeEntry;

				newEntry->v1 = va;
				newEntry->v2 = vb;
				newEntry->vOther = vOther;
				newEntry->face = uint32_t(face);
				newEntry->next = hashTable[hashKey];
				hashTable[hashKey] = newEntry;
			}
		}

		_AST(freeEntry <= (3 * nFaces));

		memset(adjacency, 0xff, sizeof(uint32_t) * nFaces * 3);

		for (size_t face = 0; face < nFaces; ++face)
		{
			index_t i0 = indices[face * 3];
			index_t i1 = indices[face * 3 + 1];
			index_t i2 = indices[face * 3 + 2];

			// filter out unused triangles
			if (i0 == index_t(-1)
				|| i1 == index_t(-1)
				|| i2 == index_t(-1))
				continue;

			_AST(i0 < nVerts);
			_AST(i1 < nVerts);
			_AST(i2 < nVerts);

			_Analysis_assume_(i0 < nVerts);
			_Analysis_assume_(i1 < nVerts);
			_Analysis_assume_(i2 < nVerts);

			uint32_t v1 = pointRep[i0];
			uint32_t v2 = pointRep[i1];
			uint32_t v3 = pointRep[i2];

			// filter out degenerate triangles
			if (v1 == v2 || v1 == v3 || v2 == v3)
				continue;

			for (uint32_t point = 0; point < 3; ++point)
			{
				if (adjacency[face * 3 + point] != UNUSED32)
					continue;

				// see if edge already entered, if not then enter it
				uint32_t va = pointRep[indices[face * 3 + ((point + 1) % 3)]];
				uint32_t vb = pointRep[indices[face * 3 + point]];
				uint32_t vOther = pointRep[indices[face * 3 + ((point + 2) % 3)]];

				uint32_t hashKey = va % hashSize;

				edgeHashEntry* current = hashTable[hashKey];
				edgeHashEntry* prev = nullptr;

				uint32_t foundFace = UNUSED32;

				while (current != 0)
				{
					if ((current->v2 == vb) && (current->v1 == va))
					{
						foundFace = current->face;
						break;
					}

					prev = current;
					current = current->next;
				}

				edgeHashEntry* found = current;
				edgeHashEntry* foundPrev = prev;

				float bestDiff = -2.f;

				// Scan for additional matches
				if (current != 0)
				{
					prev = current;
					current = current->next;

					// find 'better' match
					while (current != 0)
					{
						if ((current->v2 == vb) && (current->v1 == va))
						{
							XMVECTOR pB1 = XMLoadFloat3(&positions[vb]);
							XMVECTOR pB2 = XMLoadFloat3(&positions[va]);
							XMVECTOR pB3 = XMLoadFloat3(&positions[vOther]);

							XMVECTOR v12 = pB1 - pB2;
							XMVECTOR v13 = pB1 - pB3;

							XMVECTOR bnormal = XMVector3Normalize(XMVector3Cross(v12, v13));

							if (bestDiff == -2.f)
							{
								XMVECTOR pA1 = XMLoadFloat3(&positions[found->v1]);
								XMVECTOR pA2 = XMLoadFloat3(&positions[found->v2]);
								XMVECTOR pA3 = XMLoadFloat3(&positions[found->vOther]);

								v12 = pA1 - pA2;
								v13 = pA1 - pA3;

								XMVECTOR anormal = XMVector3Normalize(XMVector3Cross(v12, v13));

								bestDiff = XMVectorGetX(XMVector3Dot(anormal, bnormal));
							}

							XMVECTOR pA1 = XMLoadFloat3(&positions[current->v1]);
							XMVECTOR pA2 = XMLoadFloat3(&positions[current->v2]);
							XMVECTOR pA3 = XMLoadFloat3(&positions[current->vOther]);

							v12 = pA1 - pA2;
							v13 = pA1 - pA3;

							XMVECTOR anormal = XMVector3Normalize(XMVector3Cross(v12, v13));

							float diff = XMVectorGetX(XMVector3Dot(anormal, bnormal));

							// if face normals are closer, use new match
							if (diff > bestDiff)
							{
								found = current;
								foundPrev = prev;
								foundFace = current->face;
								bestDiff = diff;
							}
						}

						prev = current;
						current = current->next;
					}
				}

				if (foundFace != UNUSED32)
				{
					_AST(found != 0);

					// remove found face from hash table
					if (foundPrev != 0)
					{
						foundPrev->next = found->next;
					}
					else
					{
						hashTable[hashKey] = found->next;
					}

					_AST(adjacency[face * 3 + point] == UNUSED32);
					adjacency[face * 3 + point] = foundFace;

					// Check for other edge
					uint32_t hashKey2 = vb % hashSize;

					current = hashTable[hashKey2];
					prev = nullptr;

					while (current != 0)
					{
						if ((current->face == uint32_t(face)) && (current->v2 == va) && (current->v1 == vb))
						{
							// trim edge from hash table
							if (prev != 0)
							{
								prev->next = current->next;
							}
							else
							{
								hashTable[hashKey2] = current->next;
							}
							break;
						}

						prev = current;
						current = current->next;
					}

					// mark neighbor to point back
					bool linked = false;

					for (uint32_t point2 = 0; point2 < point; ++point2)
					{
						if (foundFace == adjacency[face * 3 + point2])
						{
							linked = true;
							adjacency[face * 3 + point] = UNUSED32;
							break;
						}
					}

					if (!linked)
					{
						uint32_t point2 = 0;
						for (; point2 < 3; ++point2)
						{
							index_t k = indices[foundFace * 3 + point2];
							if (k == index_t(-1))
								continue;

							_AST(k < nVerts);
							_Analysis_assume_(k < nVerts);

							if (pointRep[k] == va)
								break;
						}

						if (point2 < 3)
						{
#ifndef NDEBUG
							uint32_t testPoint = indices[foundFace * 3 + ((point2 + 1) % 3)];
							testPoint = pointRep[testPoint];
							_AST(testPoint == vb);
#endif
							_AST(adjacency[foundFace * 3 + point2] == UNUSED32);

							// update neighbor to point back to this face match edge
							adjacency[foundFace * 3 + point2] = uint32_t(face);
						}
					}
				}
			}
		}

		return S_OK;
	}
	//------------------------------------------------------------------------------------
	template<class index_t>
	HRESULT _GenerateGSAdjacency(_In_reads_(nFaces * 3) const index_t* indices, _In_ size_t nFaces,
		_In_reads_(nVerts) const uint32_t* pointRep,
		_In_reads_(nFaces * 3) const uint32_t* adjacency, _In_ size_t nVerts,
		_Out_writes_(nFaces * 6) index_t* indicesAdj)
	{
		if (!indices || !nFaces || !pointRep || !adjacency || !nVerts || !indicesAdj)
			return E_INVALIDARG;

		if (nVerts >= index_t(-1))
			return E_INVALIDARG;

		if (indices == indicesAdj)
		{
			// Does not support in-place conversion of the index buffer
			return HRESULT_FROM_WIN32(ERROR_NOT_SUPPORTED);
		}

		if ((uint64_t(nFaces) * 3) >= UINT32_MAX)
			return HRESULT_FROM_WIN32(ERROR_ARITHMETIC_OVERFLOW);

		size_t inputi = 0;
		size_t outputi = 0;

		for (size_t face = 0; face < nFaces; ++face)
		{
			for (uint32_t point = 0; point < 3; ++point)
			{
				_AST(outputi < (nFaces * 6));
				_Analysis_assume_(outputi < (nFaces * 6));

				indicesAdj[outputi] = indices[inputi];
				++outputi;
				++inputi;

				_AST(outputi < (nFaces * 6));
				_Analysis_assume_(outputi < (nFaces * 6));

				uint32_t a = adjacency[face * 3 + point];
				if (a == UNUSED32)
				{
					indicesAdj[outputi] = indices[face * 3 + ((point + 2) % 3)];
				}
				else
				{
					uint32_t v1 = indices[face * 3 + point];
					uint32_t v2 = indices[face * 3 + ((point + 1) % 3)];

					if (v1 == index_t(-1) || v2 == index_t(-1))
					{
						indicesAdj[outputi] = index_t(-1);
					}
					else
					{
						if (v1 >= nVerts
							|| v2 >= nVerts)
							return E_UNEXPECTED;

						v1 = pointRep[v1];
						v2 = pointRep[v2];

						uint32_t vOther = UNUSED32;

						// find other vertex
						for (uint32_t k = 0; k < 3; ++k)
						{
							_AST(a < nFaces);
							_Analysis_assume_(a < nFaces);
							uint32_t ak = indices[a * 3 + k];
							if (ak == index_t(-1))
								break;

							if (ak >= nVerts)
								return E_UNEXPECTED;

							if (pointRep[ak] == v1)
								continue;

							if (pointRep[ak] == v2)
								continue;

							vOther = ak;
						}

						if (vOther == UNUSED32)
						{
							indicesAdj[outputi] = indices[face * 3 + ((point + 2) % 3)];

						}
						else
						{
							indicesAdj[outputi] = index_t(vOther);
						}
					}
				}
				++outputi;
			}
		}

		_AST(inputi == (nFaces * 3));
		_AST(outputi == (nFaces * 6));

		return S_OK;
	}
	//------------------------------------------------------------------------------------
	HRESULT GenerateAdjacencyAndPointReps(const uint32_t* indices, size_t nFaces,
		const XMFLOAT3* positions, size_t nVerts,
		float epsilon,
		uint32_t* pointRep, uint32_t* adjacency)
	{
		if (!indices || !nFaces || !positions || !nVerts)
			return E_INVALIDARG;

		if (!pointRep && !adjacency)
			return E_INVALIDARG;

		if (nVerts >= UINT32_MAX)
			return E_INVALIDARG;

		if ((uint64_t(nFaces) * 3) >= UINT32_MAX)
			return HRESULT_FROM_WIN32(ERROR_ARITHMETIC_OVERFLOW);

		std::unique_ptr<uint32_t[]> temp;
		if (!pointRep)
		{
			temp.reset(new (std::nothrow) uint32_t[nVerts]);
			if (!temp)
				return E_OUTOFMEMORY;

			pointRep = temp.get();
		}

		HRESULT hr = GeneratePointReps<uint32_t>(indices, nFaces, positions, nVerts, epsilon, pointRep);
		if (FAILED(hr))
			return hr;

		if (!adjacency)
			return S_OK;

		return _ConvertPointRepsToAdjacency<uint32_t>(indices, nFaces, positions, nVerts, pointRep, adjacency);
	}
	//------------------------------------------------------------------------------------
	void Mesh::ConvertToTriAdjIndices()
	{
		HRESULT hr = S_OK;

		for (size_t i = 0; i < m_submeshes.size(); ++i)
		{
			const SVertex* pVerts = m_submeshes[i]->GetVertData().GetVertex();
			const DWORD* pIndices = m_submeshes[i]->GetIndexData();

			size_t nFaces = m_submeshes[i]->GetIndexCount() / 3;
			size_t nVerts = m_submeshes[i]->GetVertData().GetVertCount();

			std::unique_ptr<XMFLOAT3[]> pos(new XMFLOAT3[nVerts]);
			for (size_t j = 0; j < nVerts; ++j)
			{
				const VEC3& p = pVerts[j].pos;
				XMVECTOR v = { p.x, p.y, p.z };
				XMFLOAT3 xm;
				XMStoreFloat3(&xm, v);
				pos[j] = xm;
			}

			std::unique_ptr<uint32_t[]> adj(new uint32_t[nFaces * 3]);
			std::unique_ptr<uint32_t[]> pointrep(new uint32_t[nVerts]);

			V(GenerateAdjacencyAndPointReps((const uint32*)pIndices, nFaces, pos.get(), nVerts, 0.f, pointrep.get(), adj.get()));

			std::unique_ptr<DWORD[]> final(new DWORD[nFaces * 6]);
			V(_GenerateGSAdjacency(pIndices, nFaces, pointrep.get(), adj.get(), nVerts, final.get()));

			m_submeshes[i]->InitAdjIndexData(final.get(), nFaces * 6);
		}
	}
	//------------------------------------------------------------------------------------
	class lineAdjacency
	{
	public:
		DWORD vertex1;
		DWORD vertex2;
		DWORD opposite1;
		DWORD opposite2;
		lineAdjacency(){};
		lineAdjacency(DWORD v1, DWORD v2, DWORD o1, DWORD o2){ vertex1 = v1; vertex2 = v2; opposite1 = o1; opposite2 = o2; };
		bool operator==(lineAdjacency l2);
	};

	bool lineAdjacency::operator ==(lineAdjacency l2)
	{
		if ((l2.vertex1 == vertex1 && l2.vertex2 == vertex2) || (l2.vertex1 == vertex2 && l2.vertex2 == vertex1))
			if ((l2.opposite1 == opposite1 && l2.opposite2 == opposite2) || (l2.opposite1 == opposite2 && l2.opposite2 == opposite1))
				return true;
		return false;
	}

	void Mesh::ConvertToLineAdjIndices()
	{
		// First we need a tri-adj index buffer
		ConvertToTriAdjIndices();

		for (size_t iSubMesh = 0; iSubMesh < m_submeshes.size(); ++iSubMesh)
		{
			const SVertex* pVerts = m_submeshes[iSubMesh]->GetVertData().GetVertex();
			const DWORD* indices = m_submeshes[iSubMesh]->GetAdjIndexData();

			size_t numTriangles = m_submeshes[iSubMesh]->GetIndexCount() / 3;
			size_t numVertices = m_submeshes[iSubMesh]->GetVertData().GetVertCount();

			typedef std::vector<lineAdjacency> lineAdjacencyVector;
			std::vector<lineAdjacency> adj;
			std::vector<lineAdjacencyVector> candidates;
			for (uint32 i = 0; i < numVertices; i++)
			{
				std::vector<lineAdjacency> laV;
				laV.reserve(10);
				candidates.push_back(laV);
			}


			bool found;
			int index;
			for (uint32 t = 0; t < numTriangles; ++t, indices += 6)
			{
				found = false;
				lineAdjacency l1(indices[0], indices[2], indices[1], indices[4]);
				index = Min(l1.vertex1, l1.vertex2);
				for (UINT i = 0; i < candidates.at(index).size(); i++)
				{
					if (l1 == candidates.at(index).at(i))
						found = true;
				}
				if (!found)
				{
					adj.push_back(l1);
					candidates.at(index).push_back(l1);
				}


				found = false;
				lineAdjacency l2(indices[2], indices[4], indices[3], indices[0]);
				index = Min(l2.vertex1, l2.vertex2);
				for (UINT i = 0; i < candidates.at(index).size(); i++)
				{
					if (l2 == candidates.at(index).at(i))
						found = true;
				}
				if (!found)
				{
					adj.push_back(l2);
					candidates.at(index).push_back(l2);
				}


				found = false;
				lineAdjacency l3(indices[4], indices[0], indices[2], indices[5]);
				index = Min(l3.vertex1, l3.vertex2);
				for (UINT i = 0; i < candidates.at(index).size(); i++)
				{
					if (l3 == candidates.at(index).at(i))
						found = true;
				}
				if (!found)
				{
					adj.push_back(l3);
					candidates.at(index).push_back(l3);
				}
			}

			uint32 nAdjIndex = adj.size() * 4;
			DWORD* newIndices = new DWORD[nAdjIndex];
			int ind = 0;
			for (UINT i = 0; i < adj.size(); i++)
			{
				newIndices[ind++] = adj.at(i).vertex1;
				newIndices[ind++] = adj.at(i).vertex2;
				newIndices[ind++] = adj.at(i).opposite1;
				newIndices[ind++] = adj.at(i).opposite2;
			}

			m_submeshes[iSubMesh]->InitAdjIndexData(newIndices, nAdjIndex);

			SAFE_DELETE_ARRAY(newIndices);
		}
	}
}