//
//  OffState.cpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#include "OffState.hpp"
#include "OnState.hpp"
#include <iostream>

LampState* OffState::SwitchOn() {
    std::cout<<"Switched On\n";
    return OnState::GetInstance();
}

LampState* OffState::SwitchOff() {
    std::cout<<"Already Off\n";
    return OffState::GetInstance();
}

