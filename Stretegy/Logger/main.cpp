//
//  main.cpp
//  Singleton Lazy
//
//  Created by Ashutosh Shukla on 06/09/22.
//


#include "Logger.hpp"
#include "Scene.hpp"
#include <iostream>
#include <thread>
#include "TimeFormatter.hpp"


int main() {
    Logger &logger = Logger::GetInstance();
    logger.SetFormatter(new TimeFormatter());
    logger.Log("====== Begin =======");
    Scene scene{"Main"};
    scene.LoadModels();
    scene.PrepareWorld();
    logger.Log("====== End =========");
    return 0;
}
