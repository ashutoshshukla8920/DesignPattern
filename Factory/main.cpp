//
//  main.cpp
//  Factory
//
//  Created by Ashutosh Shukla on 08/09/22.
//

#include <iostream>
//#include "GameManager.hpp"
// now Client will create nstance of templegame
#include "TempleGame.hpp"

int main(int argc, const char * argv[]) {
    //GameManager mgr;
    // mgr.StartGame();
    TempleGame mgr;
    mgr.StartGame();
    
    return 0;
}


