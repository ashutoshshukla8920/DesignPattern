//
//  GameManager.hpp
//  Factory
//
//  Created by Ashutosh Shukla on 08/09/22.
//

#ifndef GameManager_hpp
#define GameManager_hpp

#include <stdio.h>
#include "Scene.hpp"

class GameManager {
    // TempleScene* m_pScene;
    // we want to remove dependency of TempleScene from GameManager
    // because this is thightly bound we cannot add new games
    // so will create an interface
    Scene *m_pScene;
    void RunScene(int level);
public:
    void StartGame();
    // one of the solution
    virtual Scene *CreateScene() {
        return nullptr;
    }
};

#endif /* GameManager_hpp */
