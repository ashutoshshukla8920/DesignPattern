//
//  DisplayCommand.cpp
//  Adapter
//
//  Created by Ashutosh Shukla on 14/09/22.
//

#include "DisplayCommand.hpp"
#include <iostream>
#include "EmployeeDb.hpp"

DisplayCommand::DisplayCommand(EmployeeDb* db) : m_pDb(db) {
    
}

void DisplayCommand::Execute() {
    m_pDb->DisplayChanges(-1);
}

void DisplayCommand::Undo() {
    
}



