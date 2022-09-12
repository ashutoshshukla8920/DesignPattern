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
#include <typeindex>

class YellowState : public LampState, public BaseSingleton<YellowState> {
    std::type_index m_Type = std::type_index(typeid(YellowState));
public:
    LampState* SwitchOn() override;
    LampState* SwitchOff() override;
    MAKE_SINGLETON(YellowState);
};

#endif /* YellowState_hpp */
