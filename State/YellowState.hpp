//
//  YellowState.hpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#ifndef YellowState_hpp
#define YellowState_hpp
#include "LampState.hpp"
#include "BaseSingleton.h"

class YellowState : public LampState, public BaseSingleton<YellowState> {
public:
    LampState* SwitchOn() override;
    LampState* SwitchOff() override;
    MAKE_SINGLETON(YellowState);
};

#endif /* YellowState_hpp */
