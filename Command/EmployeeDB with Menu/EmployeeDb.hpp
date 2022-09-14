//
//  EmployeeDb.hpp
//  Adapter
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#ifndef EmployeeDb_hpp
#define EmployeeDb_hpp
#include <string>
#include <vector>
#include "View.h"
#include "Subject.hpp"
#include "Command.h"
struct Employee {
    int m_Id{};
    std::string m_Name{};
    double m_Salary{};
};

class RecordView;
class EmployeeDb : public Subject, public Command {
    std::vector<Employee *> m_Employees{};
    View *rv;
    //std::vector<View*> m_Views;

public:
    void Set(View *r) {
        rv = r;
    }
    //void RegisterView(View* r);
    //void UnRegisterView(View* r);
    //void DisplayChanges(int index);
    void AddNew(int id, const std::string &name, double salary);
    void Remove(int id);
    void ChangeSalary(int id, double new_salary);
    const Employee *Get(std::size_t position)const;
    std::size_t Count()const;
    void Execute(int id, const std::string &name, double salary) override;
};


#endif /* EmployeeDb_hpp */
