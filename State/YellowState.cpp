//
//  YellowState.cpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#include "YellowState.hpp"
//#include "OnState.hpp"
#include <iostream>
//#include "StateFactory.hpp"
#include "Transitions.hpp"


LampState* YellowState::SwitchOn() {
    std::cout<<"[Yellow] Already glowing in yellow color\n";
    //return YellowState::GetInstance();
    return Transitions::GetNextState(std::make_pair(m_Type, "SwitchOn"));
}

LampState* YellowState::SwitchOff() {
    std::cout<<"[Yellow] Swithched to White color\n";
    //return OnState::GetInstance();
    //return StateFactory::GetState("on");
    return Transitions::GetNextState(std::make_pair(m_Type, "SwitchOff"));
}
