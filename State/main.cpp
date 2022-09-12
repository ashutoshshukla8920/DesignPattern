//
//  main.cpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#include <iostream>

#include "Lamp.hpp"
#include "Transitions.hpp"

int main() {
    Lamp lamp;
    Transitions::Init();
    lamp.SwitchOn() ;
    lamp.SwitchOn();
    lamp.SwitchOn();
    lamp.SwitchOff() ;
    lamp.SwitchOff();
    lamp.SwitchOff();
}

