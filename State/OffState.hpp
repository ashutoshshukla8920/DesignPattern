//
//  OffState.hpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#ifndef OffState_hpp
#define OffState_hpp
#include "LampState.hpp"
#include "BaseSingleton.h"

class OffState : public LampState , public BaseSingleton<OffState> {
public:
    LampState* SwitchOn() override;
    LampState* SwitchOff() override;
    MAKE_SINGLETON(OffState); // remeber we need to do this after public methods, because macro makes everything private
};


#endif /* OffState_hpp */
