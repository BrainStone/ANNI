//  
// Copyright (c) 2018 Yannick Schinko. All rights reserved.  
// Licensed under the GPLv3 License. See LICENSE file in the project root for full license information.  
//  
#include "main.hpp"

int main() {
	std::cout << "Hello World!" << std::endl;
	std::cout << "This application is compiled as a " << sizeof(size_t) * 8 << " bit binary." << std::endl;
	std::cout << "This is a " BUILD_TYPE " build." << std::endl;
}
