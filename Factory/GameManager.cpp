//
//  GameManager.cpp
//  Factory
//
//  Created by Ashutosh Shukla on 08/09/22.
//

#include "GameManager.hpp"
//#include "TempleScene.hpp"
#include "SceneFactory.hpp"

GameManager::GameManager( std::unique_ptr<SceneFactoryBase> sceneFactor) : m_pFactory(std::move(sceneFactor)) {
}


void GameManager::StartGame() {
    //m_pScene = new TempleScene{};
    // still we want to remove this dependency
    // client cannot create templeScene and pass it from UI
    // one more issue if we want to pass from client, what happen suppose client never start game
    // we should not modify framework class, we need some way to create object
    //m_pScene = CreateScene(); // virtual constructor, it is type of cnstructor -> factory
    
    // now we want to create multiple levels/scene for one game
    // in this case gamemanger creates only one instace of class, what if we want multiple instance
    //SceneFactory will be provided by client
//    m_pScene = SceneFactory::CreateScene(1);
//    m_pScene->Load();
//    m_pScene->Run();
    RunScene(1);
    RunScene(2);
}

void GameManager::RunScene(int level) {
    // still we have dependecy, SceneFactory is written by user
    // how can Gammanger can access SceneFactory, if GameManager is framework class
    // if this your application this is fine
    //m_pScene = SceneFactory::CreateScene(level);
    m_pScene = m_pFactory->CreateScene(level);
    m_pScene->Load();
    m_pScene->Run();
}

