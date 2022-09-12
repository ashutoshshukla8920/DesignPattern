#include "EmployeeDb.h"
#include <iostream>

#include "RecordView.h"
#include "RowView.h"

int main() {
	EmployeeDb db;
	RecordView rv{ &db };
	RowView rowV{ &db };

	//db.Set(&rv);
	//db.RegisterView(&rv);
	//db.RegisterView(&rowV);
	//db.Set(&rowV);
	db.AddNew(101, "Umar", 1000);
	db.AddNew(102, "Ayaan", 2000);
	db.AddNew(103, "Rakesh", 1500);
	db.RegisterView(&rv);
	db.RegisterView(&rowV);
	db.ChangeSalary(102, 2500);

}