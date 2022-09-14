//
//  Menu.hpp
//  Adapter
//
//  Created by Ashutosh Shukla on 14/09/22.
//

#ifndef Menu_hpp
#define Menu_hpp
#include <iostream>
class Command;
class Menu{
    Command *pCmdAdd;
    Command *pCmdRemove;
    Command *pCmdUpdate;
    Command *pCmdDisplay;
public:
    void SetAddCommand(Command* cmd);
    void SetRemoveCommand(Command* cmd);
    void SetUpdateCommand(Command* cmd);
    void SetDisplayCommand(Command* cmd);
    void Run();
};

#endif /* Menu_hpp */
