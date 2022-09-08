//
//  SubwayGame.cpp
//  Factory
//
//  Created by Ashutosh Shukla on 08/09/22.
//

#include "SubwayGame.hpp"
#include "SubwayScene.hpp"

Scene* SubwayGame::CreateScene() {
    return  new SubwayScene{};
}
