#pragma once
#include <wx/wx.h>
#include "cmain.h"

class myapp : public wxApp
{
private:
  cmain *m_frame1 = nullptr;

public:
  myapp(/* args */);
  ~myapp();

  virtual bool OnInit();
};
