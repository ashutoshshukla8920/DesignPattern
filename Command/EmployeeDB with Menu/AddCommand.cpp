//
//  AddCommand.cpp
//  Adapter
//
//  Created by Ashutosh Shukla on 14/09/22.
//

#include "AddCommand.hpp"
#include <iostream>
#include "EmployeeDb.hpp"

AddCommand::AddCommand(EmployeeDb* db) : m_pDb(db) {
    
}

void AddCommand::Execute() {
    int id{};
    std::string name{};
    double salary{};
    std::cout<<"Id:";
    std::cin >> id;
    std::cout<<"Name:";
    std::cin >> name;
    std::cout<<"Salary:";
    std::cin >> salary;
    m_Id = id;
    m_pDb->AddNew(id, name, salary);
    g_Stack.push(new AddCommand(*this));
}

void AddCommand::Undo() {
    m_pDb->Remove(m_Id);
}

