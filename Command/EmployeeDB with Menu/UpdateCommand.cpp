//
//  UpdateCommand.cpp
//  Adapter
//
//  Created by Ashutosh Shukla on 14/09/22.
//

#include "UpdateCommand.hpp"
#include <iostream>
#include "EmployeeDb.hpp"

UpdateCommand::UpdateCommand(EmployeeDb* db) : m_pDb(db) {
    
}

void UpdateCommand::Execute() {
    int id{};
    std::string name{};
    double salary{};
    std::cout<<"Id:";
    std::cin >> id;
    std::cout<<"Salary:";
    std::cin >> salary;
    m_pDb->ChangeSalary(id, salary);
    g_Stack.push(new UpdateCommand(*this));
}

void UpdateCommand::Undo() {
    
}


