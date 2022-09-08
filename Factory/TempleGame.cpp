//
//  TempleGame.cpp
//  Factory
//
//  Created by Ashutosh Shukla on 08/09/22.
//

#include "TempleGame.hpp"
#include "TempleScene.hpp"

Scene* TempleGame::CreateScene() {
    return  new TempleScene{};
}
