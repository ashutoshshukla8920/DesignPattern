//
//  main.cpp
//  BaseSingleton
//
//  Created by Ashutosh Shukla on 07/09/22.
//

#include <iostream>
#include "GameManager.hpp"
#include "AudioManager.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    GameManager &mgr = GameManager::GetInstance();
    mgr.init();
    // AudioManager class is Monostate pattern, you cannot inherit and overwrite functionality
    AudioManager::PlayOneShot("fire.wav");
    return 0;
}
