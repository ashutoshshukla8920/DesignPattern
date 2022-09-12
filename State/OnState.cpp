//
//  OnState.cpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#include "OnState.hpp"
//#include "OffState.hpp"
//#include "YellowState.hpp"
#include <iostream>
//#include "StateFactory.hpp"
#include "Transitions.hpp"


LampState* OnState::SwitchOn() {
    std::cout<<"[White] Lamp has switched to Yellow color\n";
    //return YellowState::GetInstance();
    //return StateFactory::GetState("yellow");
    return Transitions::GetNextState(std::make_pair(m_Type, "SwitchOn"));
}

LampState* OnState::SwitchOff() {
    std::cout<<"Switched Off\n";
    //return OffState::GetInstance();
    //return StateFactory::GetState("off");
    return Transitions::GetNextState(std::make_pair(m_Type, "SwitchOff"));
}
