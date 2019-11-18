#include "cmain.h"
#include <iostream>

cmain::cmain(/* args */) : wxFrame(nullptr, wxID_ANY, "Bora bora pessoal!", wxPoint(30, 30), wxSize(300, 600))
{
  m_btn1 = new wxButton(this, wxID_ANY, "bora bora", wxPoint(20, 500), wxSize(260, 45));
  m_txt1 = new wxTextCtrl(this, wxID_ANY, "placeholder", wxPoint(10, 70), wxSize(150, 50));
  m_list1 = new wxListBox(this, wxID_ANY, wxPoint(10, 110), wxSize(150, 50));
}
cmain::~cmain() {}
