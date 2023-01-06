# CMakeList.txt : CMake project for sandbox, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (sandbox "sandbox.cpp" "sandbox.hpp")

# Include libraries from safe_cpp
link_libraries(safe_cpp)
include_directories("../safe_cpp/")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET sandbox PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
