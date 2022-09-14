//
//  RecordView.hpp
//  Adapter
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#ifndef RecordView_hpp
#define RecordView_hpp

class EmployeeDb;
#include "View.h"
class RecordView : public View {
    EmployeeDb* m_pDb{};
public:
    RecordView(EmployeeDb* p) :m_pDb{ p }{}
    void Display( int index) override;
};

#endif /* RecordView_hpp */
