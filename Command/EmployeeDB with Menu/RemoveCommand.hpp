//
//  RemoveCommand.hpp
//  Adapter
//
//  Created by Ashutosh Shukla on 14/09/22.
//

#ifndef RemoveCommand_hpp
#define RemoveCommand_hpp

#include "Command.h"
class EmployeeDb;
#include <iostream>
class RemoveCommand : public Command{
    EmployeeDb *m_pDb;
public:
    RemoveCommand(EmployeeDb *db);
    virtual void Execute() override;
};

#endif /* RemoveCommand_hpp */
