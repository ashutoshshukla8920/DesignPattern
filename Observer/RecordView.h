#pragma once
class EmployeeDb;
#include "view.h"
class RecordView : public View {
	EmployeeDb* m_pDb{};
public:
	RecordView(EmployeeDb* p) :m_pDb{ p }{}
	void Display( int index) override;
};

