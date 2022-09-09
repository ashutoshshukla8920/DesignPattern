//
//  Scene.cpp
//  Singleton Early
//
//  Created by Ashutosh Shukla on 06/09/22.
//

#include "Scene.hpp"
#include <iostream>


Scene::Scene(std::string name): m_Name{std::move(name)} {
}

void Scene::PrepareWorld() {
    //std::cout << "Preparing game world for level <" << m_Name << ">" << std::endl ;
    Logger::GetInstance().Log("Preparing game world for level <" + m_Name + ">", 1);
}

void Scene::LoadModels() {
    //std::cout << "Loading 3d models & actors\n" ;
    Logger::GetInstance().Log("Loading 3d models & actors", 1);
}

