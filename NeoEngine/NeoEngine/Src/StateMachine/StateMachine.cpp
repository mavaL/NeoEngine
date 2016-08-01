#include "stdafx.h"
#include "StateMachine/StateMachine.h"

namespace Neo
{
	StateMachine::StateMachine(ThirdPersonCharacter* pChar)
		:m_pChar(pChar)
	{
	}

	StateMachine::~StateMachine()
	{
		shutdown();
	}

	void StateMachine::manageState(const std::string& stateName, BaseState* state)
	{
		state_info new_state_info;
		new_state_info.name = stateName;
		new_state_info.state = state;
		m_States.push_back(new_state_info);

		state->m_pChar = m_pChar;
	}

	BaseState* StateMachine::findByName(const std::string& stateName)
	{
		std::vector<state_info>::iterator itr;

		for(itr=m_States.begin();itr!=m_States.end();itr++)
		{
			if(itr->name==stateName)
				return itr->state;
		}

		return NULL;
	}

	void StateMachine::changeState(const std::string& stateName)
	{
		BaseState* state = findByName(stateName);
		_AST(state);

		if(!m_ActiveStateStack.empty())
		{
			m_ActiveStateStack.back()->exit();
			m_ActiveStateStack.pop_back();
		}

		m_ActiveStateStack.push_back(state);
		m_ActiveStateStack.back()->enter();
	}

	bool StateMachine::tryChangeState(const std::string& stateName)
	{
		BaseState* state = findByName(stateName);
		_AST(state);

		if (m_ActiveStateStack.empty() || (m_ActiveStateStack.back() != state))
		{
			changeState(stateName);
			return true;
		}
		return false;
	}

	bool StateMachine::pushState(const std::string& stateName)
	{
		BaseState* state = findByName(stateName);
		_AST(state);

		m_ActiveStateStack.push_back(state);
		m_ActiveStateStack.back()->enter();

		return true;
	}

	void StateMachine::popState()
	{
		if(!m_ActiveStateStack.empty())
		{
			m_ActiveStateStack.back()->exit();
			m_ActiveStateStack.pop_back();
		}

		if (m_ActiveStateStack.empty())
		{
			shutdown();
		}
	}

	void StateMachine::popAllAndPushState(const std::string& stateName)
	{
		while(!m_ActiveStateStack.empty())
		{
			m_ActiveStateStack.back()->exit();
			m_ActiveStateStack.pop_back();
		}

		pushState(stateName);
	}

	void StateMachine::shutdown()
	{
		state_info si;

		while(!m_ActiveStateStack.empty())
		{
			m_ActiveStateStack.back()->exit();
			m_ActiveStateStack.pop_back();
		}

		while(!m_States.empty())
		{
			si = m_States.back();
			si.state->destroy();
			m_States.pop_back();
		}
	}

	void StateMachine::UpdateCurrentState( float dt )
	{
		if(!m_ActiveStateStack.empty())
			m_ActiveStateStack.back()->update(dt); 
	}

	BaseState* StateMachine::getCurState()
	{
		if(m_ActiveStateStack.empty())
			return NULL;

		return m_ActiveStateStack[m_ActiveStateStack.size()-1];
	}
}


