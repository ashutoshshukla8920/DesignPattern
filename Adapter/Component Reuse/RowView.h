#pragma once
class EmployeeDb;
#include "view.h"
class RowView : public View {
	EmployeeDb* m_pDb{};
public:
	RowView(EmployeeDb *p):m_pDb{p} {}
	void Display( int index) override;
};

