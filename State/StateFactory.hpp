//
//  StateFactory.hpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#ifndef StateFactory_hpp
#define StateFactory_hpp
#include <string>
class LampState;
class StateFactory {
public:
    static LampState *GetState(const std::string &name);
};

#endif /* StateFactory_hpp */
