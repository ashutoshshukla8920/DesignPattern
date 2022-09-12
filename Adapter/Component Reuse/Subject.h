#pragma once
//#include "view.h"
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

