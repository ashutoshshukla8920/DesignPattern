#include "EmployeeDb.hpp"
#include <iostream>

#include "RecordView.hpp"
#include "RowView.hpp"
#include "BarChartAdapterView.hpp"
#include "AddCommand.hpp"
#include "RemoveCommand.hpp"
#include "UpdateCommand.hpp"
#include "DisplayCommand.hpp"
#include "Menu.hpp"


int main() {
    EmployeeDb db;
    AddCommand add{&db};
    RemoveCommand rem{&db};
    UpdateCommand update{&db};
    DisplayCommand display{&db};
    
    RecordView recordView{ &db };
    RowView rowView{ &db };
    BarChartAdapterView barChartView{ &db };
    
    db.RegisterView(&recordView);
    db.RegisterView(&rowView);
    db.RegisterView(&barChartView);
    
    Menu menu;
    menu.SetAddCommand(&add);
    menu.SetRemoveCommand(&rem);
    menu.SetUpdateCommand(&update);
    menu.SetDisplayCommand(&display);
    menu.Run();
    
    std::cout<< "Undo All \n";
    while (!g_Stack.empty()) {
        std::cout<<"\n --";
        auto cmd = g_Stack.top();
        cmd->Undo();
        g_Stack.pop();
    }
}
