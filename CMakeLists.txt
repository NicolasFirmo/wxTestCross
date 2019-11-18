cmake_minimum_required(VERSION 3.10)

project(wxTest VERSION 0.1.0)


if(WIN32)
  add_compile_definitions(__WXMSW__)
  add_compile_definitions(_UNICODE)
  include_directories(wxWidgets/include wxWidgets/include/msvc)
  link_directories(wxWidgets/lib/vc_x64_lib)
  add_executable(wxTest WIN32 cmain.h cmain.cpp myapp.h myapp.cpp)
endif(WIN32)

if(UNIX)
  add_subdirectory(wxWidgets)
  add_executable(wxTest cmain.h cmain.cpp myapp.h myapp.cpp)
  target_link_libraries(wxTest net core base)
endif(UNIX)


