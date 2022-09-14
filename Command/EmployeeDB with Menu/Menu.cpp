//
//  Menu.cpp
//  Adapter
//
//  Created by Ashutosh Shukla on 14/09/22.
//

#include "Menu.hpp"
#include "Command.h"

void Menu::SetAddCommand(Command* cmd) {
    pCmdAdd = cmd;
}

void Menu::SetRemoveCommand(Command* cmd) {
    pCmdRemove = cmd;
}

void Menu::SetUpdateCommand(Command* cmd) {
    pCmdUpdate = cmd;
}

void Menu::SetDisplayCommand(Command* cmd) {
    pCmdDisplay = cmd;
}

void Menu::Run() {
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
                pCmdUpdate->Execute();
                break;
            case 4:
                pCmdDisplay->Execute();
                break;
                // add undo call logic
        }
    }
}
