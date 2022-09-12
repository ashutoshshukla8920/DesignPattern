//
//  Lamp.cpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#include "Lamp.hpp"

#include <iostream>

void Lamp::SwitchOn() {
     if(state == LampState::ON) {
         if(color == LampColor::YELLOW) {
             return;
         }
         if(color == LampColor::WHITE) {
             std::cout << "Lamp is already switched on  Color YELLOW\n" ;
             color = LampColor::YELLOW;
             return;
         }
     }
     std::cout << "Lamp is switched on color WHITE\n" ;
     state = LampState::ON;
     color = LampColor::WHITE;
}

void Lamp::SwitchOff() {
     if(state == LampState::OFF) {
         if(color == LampColor::WHITE) {
             return;
         }
         if(color == LampColor::YELLOW) {
             std::cout << "Lamp is already switched off  Color WHITE\n" ;
             color = LampColor::WHITE;
             return;
         }
     }
     std::cout << "Lamp is switched off color WHITE\n" ;
     state = LampState::OFF;
     color = LampColor::YELLOW;
}
