//
//  RemoveCommand.cpp
//  Adapter
//
//  Created by Ashutosh Shukla on 14/09/22.
//

#include "RemoveCommand.hpp"
#include "EmployeeDb.hpp"

RemoveCommand::RemoveCommand(EmployeeDb* db) : m_pDb(db) {
    
}

void RemoveCommand::Execute() {
    int id{};
    std::cout<<"Id:";
    std::cin>>id;
    m_pDb->Remove(id);
}
