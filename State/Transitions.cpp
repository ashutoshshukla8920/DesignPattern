//
//  Transitions.cpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#include "Transitions.hpp"
#include "OffState.hpp"
#include "OnState.hpp"
#include "YellowState.hpp"

void Transitions::Init() {
    m_TransitionTable[{std::type_index(typeid(OffState)), std::string("SwitchOff")}] = OffState::GetInstance();
    m_TransitionTable[{std::type_index(typeid(OffState)), std::string("SwitchOn")}] = OnState::GetInstance();
    m_TransitionTable[{std::type_index(typeid(OnState)), std::string("SwitchOn")}] = YellowState::GetInstance();
    m_TransitionTable[{std::type_index(typeid(OnState)), std::string("SwitchOff")}] = OffState::GetInstance();
    m_TransitionTable[{std::type_index(typeid(YellowState)), std::string("SwitchOn")}] = YellowState::GetInstance();
    m_TransitionTable[{std::type_index(typeid(YellowState)), std::string("SwitchOff")}] = OnState::GetInstance();
}

LampState *Transitions::GetNextState(const Key &key) {
    return m_TransitionTable[key];
}
