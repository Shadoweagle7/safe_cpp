// sandbox.cpp : Defines the entry point for the application.
//

#include "sandbox.hpp"
#include "object.hpp"

int main() {
	std::cout << "Hello CMake." << std::endl;

	auto obj = New<Object>();

	return 0;
}
