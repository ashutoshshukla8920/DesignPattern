//
//  TempleGame.hpp
//  Factory
//
//  Created by Ashutosh Shukla on 08/09/22.
//

#ifndef TempleGame_hpp
#define TempleGame_hpp

#include "GameManager.hpp"
class TempleGame : public GameManager {
public:
    Scene* CreateScene()override;
};

#endif /* TempleGame_hpp */
