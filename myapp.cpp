#include "myapp.h"
#include <iostream>

wxIMPLEMENT_APP(myapp);

myapp::myapp(/* args */)
{
}

myapp::~myapp()
{
}

bool myapp::OnInit()
{
  std::cout << "Bora!\n";
  m_frame1 = new cmain();
  m_frame1->Show();
   
  return true;
}
