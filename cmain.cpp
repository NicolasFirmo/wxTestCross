#include "cmain.h"
#include <iostream>

cmain::cmain(/* args */) : wxFrame(nullptr, wxID_ANY, "Bora bora pessoal!", wxPoint(30, 30), wxSize(316, 600))
{
  m_txt1 = new wxTextCtrl(this, wxID_ANY, "placeholder", wxPoint(20, 20), wxSize(260, 50));
  m_list1 = new wxListBox(this, wxID_ANY, wxPoint(20, 70), wxSize(260, 250));
  m_btn1 = new wxButton(this, wxID_ANY, "bora bora", wxPoint(40, 370), wxSize(220, 45));
}
cmain::~cmain() {}
