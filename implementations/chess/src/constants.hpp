//  
// Copyright (c) 2018 Yannick Schinko. All rights reserved.  
// Licensed under the GPLv3 License. See LICENSE file in the project root for full license information.  
//  
#pragma once

#if defined(__DEBUG__)
	#define BUILD_TYPE "debug"
#elif defined(__NDEBUG__)
	#define BUILD_TYPE "release"
#else
	#define BUILD_TYPE "unknow"
#endif
