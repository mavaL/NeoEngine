/********************************************************************
	created:	2016/07/05 16:46
	filename	MaterialManager.h
	author:		maval

	purpose:	Manager class for materials management.
*********************************************************************/
#ifndef MaterialManager_h__
#define MaterialManager_h__

#include "Prerequiestity.h"
#include "Singleton.h"
#include "RenderDefine.h"

namespace Neo
{
	class MaterialManager : public Common::CSingleton<MaterialManager>
	{
	public:
		MaterialManager();
		~MaterialManager();

		DECLEAR_SINGLETON(MaterialManager)

	public:
		Material*		NewMaterial(const STRING& name, eVertexType type = eVertexType_General, uint32 nSubMtl = 1);
		Material*		GetMaterial(const STRING& name);
		void			RemoveMaterial(const STRING& name);

	private:
		std::unordered_map<STRING, Material*>	m_Mtls;
	};
}

#endif // MaterialManager_h__