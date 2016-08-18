#ifndef State_h__
#define State_h__


namespace Neo
{
	class BaseState;
	class ThirdPersonCharacter;

	class BaseState
	{
	public:
		void destroy(){delete this;}

		virtual const char* getStateName() const = 0;
		virtual void enter() = 0;
		virtual void exit() = 0;
		virtual void update(float timeSinceLastFrame) = 0;

		ThirdPersonCharacter*	m_pChar;

	protected:
		BaseState(){};
	};

#define DECLARE_STATE_CLASS(T, P)										\
	static void create(P* parent, const std::string& name)				\
	{																	\
		T* pState = new T();											\
		parent->manageState(name, pState);								\
	}
}



#endif // State_h__