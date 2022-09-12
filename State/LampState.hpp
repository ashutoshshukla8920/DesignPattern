//
//  LampState.hpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#ifndef LampState_hpp
#define LampState_hpp

class LampState {
public:
    virtual LampState* SwitchOn() = 0;
    virtual LampState* SwitchOff() = 0;
    virtual ~LampState(){}
};

#endif /* LampState_hpp */
