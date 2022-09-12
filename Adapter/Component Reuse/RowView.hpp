//
//  RowView.hpp
//  Adapter
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#ifndef RowView_hpp
#define RowView_hpp

class EmployeeDb;
#include "View.h"
class RowView : public View {
    EmployeeDb* m_pDb{};
public:
    RowView(EmployeeDb *p):m_pDb{p} {}
    void Display( int index) override;
};

#endif /* RowView_hpp */
