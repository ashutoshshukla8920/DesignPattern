//
//  EmployeeDb.cpp
//  Adapter
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#include "EmployeeDb.hpp"
#include <algorithm>
#include <iostream>
#include "RecordView.hpp"

void EmployeeDb::AddNew(int id, const std::string &name, double salary) {
    m_Employees.push_back(new Employee{ id, name, salary });
    //rv->Display(*this);
    DisplayChanges(m_Employees.size()-1);
}

void EmployeeDb::Remove(int id) {
    auto new_end = std::remove_if(m_Employees.begin(), m_Employees.end(), [id](const auto *emp) {
        return (emp->m_Id == id);
        });
    m_Employees.erase(new_end, m_Employees.end());
    //rv->Display(*this);
    DisplayChanges(-1); // draw everything

}

void EmployeeDb::ChangeSalary(int id, double new_salary) {
    int index = 0;
    auto found = std::find_if(m_Employees.begin(), m_Employees.end(), [id,&index](const auto *emp) {
        index++;
        return (emp->m_Id == id);
        });
    if (found != m_Employees.end()) {
        (*found)->m_Salary = new_salary;
        //std::cout << "Salary changed successfully\n";
        //rv->Display(*this);
        DisplayChanges(index-1);

    }
}

const Employee *EmployeeDb::Get(std::size_t position) const {
    // TODO: insert return statement here
    return m_Employees[position];
}


std::size_t EmployeeDb::Count() const {
    return m_Employees.size();
}
//
//void EmployeeDb::RegisterView(View* view)
//{
//    m_Views.push_back(view);
//}
//
//void EmployeeDb::UnRegisterView(View* view)
//{
//    m_Views.erase(std::remove(m_Views.begin(), m_Views.end(), view), m_Views.end());
//}
//
//void EmployeeDb::DisplayChanges(int index)
//{
//    for (auto& curView : m_Views)
//    {
//        curView->Display(*this, index);
//    }
//}


void EmployeeDb::Execute(int id, const std::string &name, double salary) {
    AddNew(id, name, salary);
}
