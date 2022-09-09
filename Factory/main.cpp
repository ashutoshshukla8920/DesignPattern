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
//#include "SubwayGame.hpp"
//#include "BattleGame.hpp"

#include "SceneFactory.hpp"

int main(int argc, const char * argv[]) {
    //GameManager mgr;
//    // mgr.StartGame();
//    TempleGame mgr;
//    mgr.StartGame();
    
//    SubwayGame sMgr;
//    sMgr.StartGame();
//    
//    BattleGame bMgr;
//    bMgr.StartGame();
    
    GameManager mgr{std::make_unique<SceneFactory>()};
    mgr.StartGame();
    return 0;
}

// we have used make_unique is factory c++, this gives strong exception gurantee
// make_unique is templatized factory


