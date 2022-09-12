//
//  YellowState.cpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#include "YellowState.hpp"
#include "OnState.hpp"
#include <iostream>

LampState* YellowState::SwitchOn() {
    std::cout<<"[Yellow] Already glowing in yellow color\n";
    return YellowState::GetInstance();
}

LampState* YellowState::SwitchOff() {
    std::cout<<"[Yellow] Swithched to White color\n";
    return OnState::GetInstance();
}
