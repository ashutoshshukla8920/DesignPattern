#include "Subject.h"
#include "view.h"

void Subject::RegisterView(View* view)
{
	m_Views.push_back(view);
}

void Subject::UnRegisterView(View* view)
{
	m_Views.erase(std::remove(m_Views.begin(), m_Views.end(), view), m_Views.end());
}
/*
Use void * to pass some data to observers
or using std::any in C++17
*/

void Subject::DisplayChanges(int index)
{
	for (auto& curView : m_Views)
	{
		curView->Display( index);
	}
}
