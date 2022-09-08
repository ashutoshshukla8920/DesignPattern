//
//  Scene.hpp
//  Factory
//
//  Created by Ashutosh Shukla on 08/09/22.
//

#ifndef Scene_hpp
#define Scene_hpp

class Scene {
public:
    virtual void Load() = 0;
    virtual void Run() = 0;
    virtual ~Scene() = default;
};

#endif /* Scene_hpp */
