//
//  BarChartAdapterView.hpp
//  Adapter
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#ifndef BarChartAdapterView_hpp
#define BarChartAdapterView_hpp
#include "BarChart.hpp"
#include "View.h"
class BarChartAdapterView :
    public View, BarChart{
    EmployeeDb *m_pDb{};
    //BarChart m_BarChart{};
public:
    BarChartAdapterView(EmployeeDb *p) :m_pDb{ p } {}
    void Display(int index) override;
    char drawChar()override;
};

#endif /* BarChartAdapterView_hpp */
