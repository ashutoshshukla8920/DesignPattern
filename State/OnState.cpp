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
#include "StateFactory.hpp"

LampState* OnState::SwitchOn() {
    std::cout<<"[White] Lamp has switched to Yellow color\n";
    //return YellowState::GetInstance();
    return StateFactory::GetState("yellow");
}

LampState* OnState::SwitchOff() {
    std::cout<<"Switched Off\n";
    //return OffState::GetInstance();
    return StateFactory::GetState("off");
}
