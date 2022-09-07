//
//  main.cpp
//  Singleton Lazy
//
//  Created by Ashutosh Shukla on 06/09/22.
//


#include "Logger.hpp"
#include "Scene.hpp"
#include <iostream>
int main() {
    std::cout<<"Entering Main\n";
    // If we keep refernece local to class it can get deleted and we might face issue of dangling refeence
    //Logger& logger = Logger::GetInstance();
    Logger::GetInstance().Log("=== Begin ===");
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

    Logger::GetInstance().Log("=== End ===");
    // If we comment all above code still the logger instance gets created, This is called egar initilization
    /* std::cout<<"Entering Main\n";
    Logger()
    Entering Main
    ~Logger()
    */
    
    // who will call destructor
    // 1. file close -> exit will close
    // 2. memory leak => No memory leak , because once program exit all the memory will be released
    // this type of singleton is leaky singleton
    // what if the logger is relying on some system resource, so they will not get released, in that case we need somehow call destructor
}
