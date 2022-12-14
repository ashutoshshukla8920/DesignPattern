//
//  OffState.cpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#include "OffState.hpp"
//#include "OnState.hpp"
#include <iostream>
//#include "StateFactory.hpp"
#include <utility>
#include "Transitions.hpp"

LampState* OffState::SwitchOn() {
    std::cout<<"Switched On\n";
    //return OnState::GetInstance();
    //return StateFactory::GetState("on");
    return Transitions::GetNextState(std::make_pair(m_Type, "SwitchOn"));
}

LampState* OffState::SwitchOff() {
    std::cout<<"Already Off\n";
    //return OffState::GetInstance();
    return Transitions::GetNextState(std::make_pair(m_Type, "SwitchOff"));
}

