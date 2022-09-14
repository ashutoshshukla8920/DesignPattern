//
//  AddCommand.hpp
//  Adapter
//
//  Created by Ashutosh Shukla on 14/09/22.
//

#ifndef AddCommand_hpp
#define AddCommand_hpp
#include "Command.h"
class EmployeeDb;
#include <iostream>
class AddCommand : public Command{
    EmployeeDb *m_pDb;
    int m_Id;
public:
    AddCommand(EmployeeDb *db);
    virtual void Execute() override;
    virtual void Undo() override;
};

#endif /* AddCommand_hpp */
