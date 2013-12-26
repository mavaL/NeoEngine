#ifndef SINGLETON_H
#define SINGLETON_H


/*------------------------------------------------
						单例模式基类
-------------------------------------------------*/

namespace Common
{
	template <class T>
	class CSingleton
	{
	public:

		static T* GetSingletonPtr()
		{
			static T instance;
			return &instance;
		}

		inline static T& GetSingleton() { return *GetSingletonPtr(); }


	protected:
		CSingleton(){}
		virtual ~CSingleton(){}
		//禁止调用拷贝构造函数和赋值构造函数
		CSingleton(const CSingleton&);
		CSingleton& operator= (const CSingleton&);
	};
}

#define DECLEAR_SINGLETON(classname) friend class Common::CSingleton<classname>; 

#endif
