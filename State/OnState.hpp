//
//  OnState.hpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#ifndef OnState_hpp
#define OnState_hpp
#include "LampState.hpp"
#include "BaseSingleton.h"

class OnState : public LampState, public BaseSingleton<OnState> {
public:
    LampState* SwitchOn() override;
    LampState* SwitchOff() override;
    MAKE_SINGLETON(OnState);
};

#endif /* OnState_hpp */
