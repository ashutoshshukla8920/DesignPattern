//
//  GameManager.cpp
//  Factory
//
//  Created by Ashutosh Shukla on 08/09/22.
//

#include "GameManager.hpp"
//#include "TempleScene.hpp"

void GameManager::StartGame() {
    //m_pScene = new TempleScene{};
    // still we want to remove this dependency
    // client cannot create templeScene and pass it from UI
    // one more issue if we want to pass from client, what happen suppose client never start game
    // we should not modify framework class, we need some way to create object
    m_pScene = CreateScene(); // virtual constructor, it is type of cnstructor -> factory
    
    m_pScene->Load();
    m_pScene->Run();
}
