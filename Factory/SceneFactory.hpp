//
//  SceneFactory.hpp
//  Factory
//
//  Created by Ashutosh Shukla on 09/09/22.
//

#ifndef SceneFactory_hpp
#define SceneFactory_hpp
#include "SceneFactoryBase.h"

class SceneFactory : public SceneFactoryBase {
public:
    Scene* CreateScene(int level) override;
};

#endif /* SceneFactory_hpp */
