//
//  OnState.cpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#include "OnState.hpp"
#include "OffState.hpp"
#include <iostream>
LampState* OnState::SwitchOn() {
    std::cout<<"Already On\n";
    return this;
}

LampState* OnState::SwitchOff() {
    std::cout<<"Switched Off\n";
    return new OffState;
}
