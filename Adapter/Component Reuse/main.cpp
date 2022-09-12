#include "EmployeeDb.hpp"
#include <iostream>

#include "RecordView.hpp"
#include "RowView.hpp"
#include "BarChartAdapterView.hpp"

int main() {
    EmployeeDb db;
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
