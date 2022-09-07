//
//  Scene.hpp
//  Singleton Early
//
//  Created by Ashutosh Shukla on 06/09/22.
//

#ifndef Scene_hpp
#define Scene_hpp

#pragma once
#include <string>
#include "Logger.hpp"

class Scene
{
    std::string m_Name{} ;
    
    //Logger m_logger{}; // in output we can see we are creating two logger object
    /*
     Logger()
     Logger()
     ~Logger()
     ~Logger()
     */
    // solution we can make constructor private
    Logger m_logger = Logger::GetInstance();
public:
    [[nodiscard]] Scene(std::string name);

    void PrepareWorld() ;
    void LoadModels() ;
};



#endif /* Scene_hpp */
