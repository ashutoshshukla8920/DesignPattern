//
//  GameManager.cpp
//  Factory
//
//  Created by Ashutosh Shukla on 08/09/22.
//

#include "GameManager.hpp"

void GameManager::StartGame() {
    m_pScene = new TempleScene{};
    m_pScene->Load();
    m_pScene->Run();
}
