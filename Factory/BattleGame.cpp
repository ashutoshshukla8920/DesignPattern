//
//  BattleGame.cpp
//  Factory
//
//  Created by Ashutosh Shukla on 08/09/22.
//

#include "BattleGame.hpp"
#include "BattleScene.hpp"

Scene* BattleGame::CreateScene() {
    return  new BattleScene{};
}
