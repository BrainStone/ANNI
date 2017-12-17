#if defined(__DEBUG__)
	#define BUILD_TYPE "debug"
#elif defined(__NDEBUG__)
	#define BUILD_TYPE "release"
#else
	#define BUILD_TYPE "unknow"
#endif

#include <iostream>

// LibANNI
#include "anni/anni.hpp"

int main() {
	std::cout << "Hello World!" << std::endl;
	std::cout << "This application is compiled as a " << sizeof(size_t) * 8 << " bit binary." << std::endl;
	std::cout << "This is a " BUILD_TYPE " build." << std::endl;
}
