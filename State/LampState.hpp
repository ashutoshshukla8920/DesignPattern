//
//  LampState.hpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#ifndef LampState_hpp
#define LampState_hpp
#include <iostream>

class LampState {
public:
    // whenever new trasition we have new object created, how to resolve memory leak
    // we can implement singleton
    // other problem is now yellow state is dependent on onstate , onstate dependent on off and yellow and so on
    // we need to remove this dependency, if class needs to create instance of another class without depending on concrete type use ffactory
    LampState() {
        std::cout<<"LampState()\n";
    }
    virtual LampState* SwitchOn() = 0;
    virtual LampState* SwitchOff() = 0;
    virtual ~LampState(){}
};

#endif /* LampState_hpp */
