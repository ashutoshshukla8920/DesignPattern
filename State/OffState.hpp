//
//  OffState.hpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#ifndef OffState_hpp
#define OffState_hpp
#include "LampState.hpp"

class OffState : public LampState {
public:
    ~OffState() {}
    LampState* SwitchOn() override;
    LampState* SwitchOff() override;
};


#endif /* OffState_hpp */
