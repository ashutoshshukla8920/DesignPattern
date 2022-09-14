//
//  BarChartAdapterView.cpp
//  Adapter
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#include "BarChartAdapterView.hpp"
#include "EmployeeDb.hpp"
void BarChartAdapterView::Display(int index) {
    Clear();
    if (index == -1) {
        for (std::size_t i = 0; i < m_pDb->Count(); ++i) {
            auto *emp = m_pDb->Get(i);
            Add(emp->m_Name, emp->m_Salary);
        }
    } else {
        auto *emp = m_pDb->Get(index);
        Add(emp->m_Name, emp->m_Salary);
    }
    RenderChart();
}

char BarChartAdapterView::drawChar() {
    return '^';
}

