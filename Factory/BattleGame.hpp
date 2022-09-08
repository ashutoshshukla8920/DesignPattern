//
//  BattleGame.hpp
//  Factory
//
//  Created by Ashutosh Shukla on 08/09/22.
//

#ifndef BattleGame_hpp
#define BattleGame_hpp

#include "GameManager.hpp"
class BattleGame : public GameManager {
public:
    Scene* CreateScene()override;
};

#endif /* BattleGame_hpp */
