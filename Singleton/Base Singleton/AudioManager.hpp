//
//  AudioManager.hpp
//  BaseSingleton
//
//  Created by Ashutosh Shukla on 07/09/22.
//

#ifndef AudioManager_hpp
#define AudioManager_hpp

#include <string>

class AudioManager {
    inline static void *m_pSoundDriver{};
    AudioManager() = default;
public:
    static void PlayOneShot(std::string name);
};
#endif /* AudioManager_hpp */
