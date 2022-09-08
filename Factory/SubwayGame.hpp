//
//  SubwayGame.hpp
//  Factory
//
//  Created by Ashutosh Shukla on 08/09/22.
//

#ifndef SubwayGame_hpp
#define SubwayGame_hpp

#include "GameManager.hpp"
class SubwayGame : public GameManager {
public:
    Scene* CreateScene()override;
};

#endif /* SubwayGame_hpp */
