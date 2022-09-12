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
    LampState() {
        std::cout<<"LampState()\n";
    }
    virtual LampState* SwitchOn() = 0;
    virtual LampState* SwitchOff() = 0;
    virtual ~LampState(){}
};

#endif /* LampState_hpp */
