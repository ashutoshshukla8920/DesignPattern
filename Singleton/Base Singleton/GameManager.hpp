//
//  GameManager.hpp
//  BaseSingleton
//
//  Created by Ashutosh Shukla on 07/09/22.
//

#ifndef GameManager_hpp
#define GameManager_hpp
#include "BaseSingleton.h"

// This is CRTP pattern
class GameManager : public BaseSingleton<GameManager> {
    GameManager() = default;
    // we have deleted implicity assignment and copyconstructor in base class
    friend class BaseSingleton<GameManager>; // we made constructor private , inorder to allow BaseSingleton to create Gamemanger object we need to declare it as friend
public:
    void init();
};

#endif /* GameManager_hpp */
