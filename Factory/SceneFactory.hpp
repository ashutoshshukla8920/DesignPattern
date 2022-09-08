//
//  SceneFactory.hpp
//  Factory
//
//  Created by Ashutosh Shukla on 09/09/22.
//

#ifndef SceneFactory_hpp
#define SceneFactory_hpp

class Scene;
class SceneFactory {
public:
    static Scene* CreateScene(int level);
};

#endif /* SceneFactory_hpp */
