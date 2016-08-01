#ifndef StateMachine_h__
#define StateMachine_h__


#include "State.h"
#include "Prerequiestity.h"

namespace Neo
{
	class StateMachine
	{
	public:
		StateMachine(ThirdPersonCharacter* pChar);
		~StateMachine();

	public:
		struct state_info
		{
			std::string name;
			BaseState* state;
		};

		void shutdown();
		void UpdateCurrentState(float dt);

		BaseState* getCurState();
		void manageState(const std::string& stateName, BaseState* state);
		BaseState* findByName(const std::string& stateName);
		void changeState(const std::string& stateName);
		bool tryChangeState(const std::string& stateName);
		bool pushState(const std::string& stateName);
		void popState();
		void popAllAndPushState(const std::string& stateName);

	protected:

		ThirdPersonCharacter*		m_pChar;
		std::vector<BaseState*>		m_ActiveStateStack;
		std::vector<state_info>		m_States;
	};

}


#endif // StateMachine_h__