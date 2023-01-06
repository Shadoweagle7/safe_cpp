# CMakeList.txt : CMake project for safe_cpp, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's library.
add_library(safe_cpp SHARED "safe_cpp.cpp" "safe_cpp.hpp" "object.cpp" "bool.cpp"  "option.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET safe_cpp PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.