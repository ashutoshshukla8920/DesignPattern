//
//  main.cpp
//  BaseSingleton
//
//  Created by Ashutosh Shukla on 07/09/22.
//

#include <iostream>
#include "GameManager.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    GameManager &mgr = GameManager::GetInstance();
    mgr.init();
    return 0;
}
