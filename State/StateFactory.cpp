//
//  StateFactory.cpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#include "StateFactory.hpp"
#include "LampState.hpp"
#include "OffState.hpp"
#include "OnState.hpp"
#include "YellowState.hpp"

LampState* StateFactory::GetState(const std::string &name) {
    if(name == "off") {
        return OffState::GetInstance();
    }
    else if(name == "on") {
        return OnState::GetInstance();
    }
    else if(name == "yellow") {
        return YellowState::GetInstance();
    }
    return nullptr;
}
