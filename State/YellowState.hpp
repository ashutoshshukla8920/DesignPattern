//
//  YellowState.hpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#ifndef YellowState_hpp
#define YellowState_hpp
#include "LampState.hpp"

class YellowState : public LampState {
public:
    ~YellowState() {}
    LampState* SwitchOn() override;
    LampState* SwitchOff() override;
};

#endif /* YellowState_hpp */
