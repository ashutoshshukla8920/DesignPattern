//
//  GameManager.hpp
//  Factory
//
//  Created by Ashutosh Shukla on 08/09/22.
//

#ifndef GameManager_hpp
#define GameManager_hpp

#include <stdio.h>
#include "TempleScene.hpp"

class GameManager {
    TempleScene* m_pScene;
public:
    void StartGame();
};

#endif /* GameManager_hpp */
