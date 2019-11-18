#pragma once
#include <wx/wx.h>

class cmain : public wxFrame
{
private:
  /* data */
public:
  cmain(/* args */);
  ~cmain();

  wxButton *m_btn1 = nullptr;
  wxTextCtrl *m_txt1 = nullptr;
  wxListBox *m_list1 = nullptr;
};
