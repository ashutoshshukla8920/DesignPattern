//
//  DisplayCommand.hpp
//  Adapter
//
//  Created by Ashutosh Shukla on 14/09/22.
//

#ifndef DisplayCommand_hpp
#define DisplayCommand_hpp

#include "Command.h"
class EmployeeDb;
#include <iostream>
class DisplayCommand : public Command{
    EmployeeDb *m_pDb;
public:
    DisplayCommand(EmployeeDb *db);
    virtual void Execute() override;
    virtual void Undo() override;
};

#endif /* DisplayCommand_hpp */
