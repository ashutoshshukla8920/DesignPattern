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
#include <typeindex>

class OnState : public LampState, public BaseSingleton<OnState> {
    std::type_index m_Type = std::type_index(typeid(OnState));
public:
    LampState* SwitchOn() override;
    LampState* SwitchOff() override;
    MAKE_SINGLETON(OnState);
};

#endif /* OnState_hpp */
