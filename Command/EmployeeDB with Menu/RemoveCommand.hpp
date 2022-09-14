//
//  RemoveCommand.hpp
//  Adapter
//
//  Created by Ashutosh Shukla on 14/09/22.
//

#ifndef RemoveCommand_hpp
#define RemoveCommand_hpp

#include "Command.h"
#include "EmployeeDb.hpp"
#include <iostream>
class RemoveCommand : public Command{
    EmployeeDb *m_pDb{};
    Employee m_Emp{};
public:
    RemoveCommand(EmployeeDb *db);
    virtual void Execute() override;
    virtual void Undo() override;
};

#endif /* RemoveCommand_hpp */
