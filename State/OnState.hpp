//
//  OnState.hpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#ifndef OnState_hpp
#define OnState_hpp
#include "LampState.hpp"

class OnState : public LampState {
public:
    ~OnState() {}
    LampState* SwitchOn() override;
    LampState* SwitchOff() override;
};

#endif /* OnState_hpp */
