//
//  Subject.hpp
//  Adapter
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#ifndef Subject_hpp
#define Subject_hpp

#include <vector>

class View;
class Subject
{
  std::vector<View*> m_Views;
public:
  void RegisterView(View* r);
  void UnRegisterView(View* r);
  void DisplayChanges(int index);//void DisplayChanges(const std::any & data) ;
};



#endif /* Subject_hpp */
