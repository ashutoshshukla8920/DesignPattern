//
//  SceneFactoryBase.h
//  Factory
//
//  Created by Ashutosh Shukla on 09/09/22.
//

#ifndef SceneFactoryBase_h
#define SceneFactoryBase_h
class Scene;
class SceneFactoryBase {
public:
    virtual Scene* CreateScene(int level) = 0;
    ~SceneFactoryBase() = default;
};

#endif /* SceneFactoryBase_h */
