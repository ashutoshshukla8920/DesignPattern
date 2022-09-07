//
//  AudioManager.cpp
//  BaseSingleton
//
//  Created by Ashutosh Shukla on 07/09/22.
//

#include "AudioManager.hpp"
#include <iostream>

void AudioManager::PlayOneShot(std::string  name) {
    std::cout<<"Playing file" << name << std::endl;
}
