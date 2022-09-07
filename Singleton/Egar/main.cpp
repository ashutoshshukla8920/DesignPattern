//
//  main.cpp
//  Singleton Early
//
//  Created by Ashutosh Shukla on 06/09/22.
//


#include "Logger.hpp"
#include "Scene.hpp"

int main() {
    Logger& logger = Logger::GetInstance();
    logger.Log("=== Begin ===");
    Scene scene("newScene");
    scene.PrepareWorld();
    scene.LoadModels();

    /*
     * Write your code here
     */

    logger.Log("=== End ===");
}
