//
//  SceneFactory.cpp
//  Factory
//
//  Created by Ashutosh Shukla on 09/09/22.
//

#include "SceneFactory.hpp"
#include "TempleScene.hpp"
#include "SubwayScene.hpp"
#include "BattleScene.hpp"

Scene* SceneFactory::CreateScene(int level) {
    if(level == 1) {
        return new TempleScene{};
    }
    else if(level == 2) {
        return new SubwayScene{};
    }
    else if(level == 3) {
        return new BattleScene{};
    }
    return nullptr;
}
