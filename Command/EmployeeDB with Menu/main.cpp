#include "EmployeeDb.hpp"
#include <iostream>

#include "RecordView.hpp"
#include "RowView.hpp"
#include "BarChartAdapterView.hpp"
EmployeeDb db;
// we want to build UI
// Menu should not know about EmpDB, Menu can interact with multiple calss
void Menu() {
    Command *pCmd = &db;
    bool exit = false;
    while(!exit) {
        std::cout<<"1. Add Employee\n";
        std::cout<<"2. Remove Employee\n";
        std::cout<<"3. Change Slary\n";
        std::cout<<"4. Display all\n";
        std::cout<<"Your Choice (0 to exit)? \n";
        int choice{};
        std::cin >> choice;
        switch (choice) {
            case 0:
                exit = true;
                break;
            case 1:
                pCmd->Execute(105, "Ashutosh", 1.5);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
        }
    }
}

int main() {
    Menu();
    RecordView rv{ &db };
    RowView rowV{ &db };
    BarChartAdapterView ba{ &db };
    //ba.Add("dafasdfpaosidfja", 5000);

    db.AddNew(101, "Umar", 1000);
    db.AddNew(102, "Ayaan", 2000);
    db.AddNew(103, "Rakesh", 1500);

    db.RegisterView(&rv);
    db.RegisterView(&ba);
    db.DisplayChanges(-1);

}
