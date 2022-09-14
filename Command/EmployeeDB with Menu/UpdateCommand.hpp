//
//  UpdateCommand.hpp
//  Adapter
//
//  Created by Ashutosh Shukla on 14/09/22.
//

#ifndef UpdateCommand_hpp
#define UpdateCommand_hpp

#include "Command.h"
class EmployeeDb;
#include <iostream>
class UpdateCommand : public Command{
    EmployeeDb *m_pDb;
    double m_Salary{};
    int m_Id{};
public:
    UpdateCommand(EmployeeDb *db);
    virtual void Execute() override;
    virtual void Undo() override;
};

#endif /* UpdateCommand_hpp */
