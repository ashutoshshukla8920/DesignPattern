//
//  main.cpp
//  Singleton Early
//
//  Created by Ashutosh Shukla on 06/09/22.
//


#include "Logger.hpp"
#include "Scene.hpp"

int main() {
    // If we keep refernece local to class it can get deleted and we might face issue of dangling refeence
    Logger& logger = Logger::GetInstance();
    logger.Log("=== Begin ===");
    Scene scene("newScene");
    //
    //    Scene scene1("scene1");
    //    scene1 = scene; // this will not work
     //   Scene scene2 = scene;// this will work
    //    whenever we have reference variable as class member it's assignment operator will get deleted
    // because we cannnot change what reference points to in assignment
    // thats why we should not use reference
    
    
    scene.PrepareWorld();
    scene.LoadModels();

    /*
     * Write your code here
     */

    logger.Log("=== End ===");
}
