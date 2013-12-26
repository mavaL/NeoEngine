/********************************************************************
	created:	24:12:2012   0:50
	filename: 	ActionNone.h
	author:		maval
	
	purpose:	È¡Ïû¼¤»î×´Ì¬
*********************************************************************/

#ifndef ActionNone_h__
#define ActionNone_h__


#include "ActionBase.h"


class ActionNone : public ActionBase
{
public:
	virtual	void	Enter();
	virtual void	Leave() {}
};



#endif // ActionNone_h__