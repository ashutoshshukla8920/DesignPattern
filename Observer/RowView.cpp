#include "RowView.h"
#include "EmployeeDb.h"
#include <iostream>
void RowView::Display( int index) {
	std::cout << "\n\n-------------------------\n";
	if (index == -1) {
		for (std::size_t i = 0; i < m_pDb->Count(); ++i) {
			auto emp = m_pDb->Get(i);
			std::cout << "Id:" << emp->m_Id << " , ";
			std::cout << "Name:" << emp->m_Name << " , ";
			std::cout << "Salary:" << emp->m_Salary << '\n';
		}
	}
	else {
		auto emp = m_pDb->Get(index);
		std::cout << "Id:" << emp->m_Id << " , ";
		std::cout << "Name:" << emp->m_Name << " , ";
		std::cout << "Salary:" << emp->m_Salary << '\n';
	}

}
