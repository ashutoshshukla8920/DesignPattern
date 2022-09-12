//
//  Lamp.hpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#ifndef Lamp_hpp
#define Lamp_hpp
// enum class LampState {ON, OFF};
// enum class LampColor {WHITE, YELLOW};
class LampState;
class Lamp
{
//     LampState state = LampState::OFF;
//     LampColor color = LampColor::WHITE;
public:
    Lamp();
    void SwitchOn() ;
    void SwitchOff() ;
private:
    LampState *state;
};

#endif /* Lamp_hpp */
