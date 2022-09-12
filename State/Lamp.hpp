//
//  Lamp.hpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#ifndef Lamp_hpp
#define Lamp_hpp
 enum class LampState {ON, OFF};
 enum class LampColor {WHITE, YELLOW};
class Lamp
{
     LampState state = LampState::OFF;
     LampColor color = LampColor::WHITE;
public:
    void SwitchOn() ;
    void SwitchOff() ;
};

#endif /* Lamp_hpp */
