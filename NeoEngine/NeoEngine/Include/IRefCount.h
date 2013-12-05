/********************************************************************
	created:	1:12:2013   17:28
	filename: 	IRefCount.h
	author:		maval
	
	purpose:	引用计数类.
				目前无线程安全支持.
*********************************************************************/
#ifndef IRefCount_h__
#define IRefCount_h__

class IRefCount
{
public:
	IRefCount():m_refCnt(1) {}
	virtual ~IRefCount() { Release(); }

	void	AddRef() const	{ ++m_refCnt; }
	void	Release() const
	{
		assert(m_refCnt >= 0);
		if (m_refCnt > 0)
		{
			if (--m_refCnt == 0)
				delete this;
		}
	}

private:
	mutable int		m_refCnt;
};

#endif // IRefCount_h__