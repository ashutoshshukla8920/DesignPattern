#include "EmployeeDb.hpp"
#include <iostream>

#include "RecordView.hpp"
#include "RowView.hpp"
#include "BarChartAdapterView.hpp"
#include "AddCommand.hpp"
#include "RemoveCommand.hpp"
#include "UpdateCommand.hpp"
#include "DisplayCommand.hpp"
EmployeeDb db;
AddCommand add{&db};
RemoveCommand rem{&db};
UpdateCommand update{&db};
DisplayCommand display{&db};
// we want to build UI
// Menu should not know about EmpDB, Menu can interact with multiple calss
// we want to implement undo
void Menu() {
    //Command *pCmd = &db;
    Command *pCmdAdd = &add;
    Command *pCmdRemove = &rem;
    Command *pCmdChange = &update;
    Command *pCmdDisplay = &display;
    
    bool exit = false;
    while(!exit) {
        std::cout<<"1. Add Employee\n";
        std::cout<<"2. Remove Employee\n";
        std::cout<<"3. Change Salary\n";
        std::cout<<"4. Display all\n";
        std::cout<<"Your Choice (0 to exit)? \n";
        int choice{};
        std::cin >> choice;
        switch (choice) {
            case 0:
                exit = true;
                break;
            case 1:
                pCmdAdd->Execute();
                break;
            case 2:
                pCmdRemove->Execute();
                break;
            case 3:
                pCmdChange->Execute();
                break;
            case 4:
                pCmdDisplay->Execute();
                break;
        }
    }
}

int main() {

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
    Menu();

}
