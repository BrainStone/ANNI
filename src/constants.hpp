#pragma once

#if defined(__DEBUG__)
	#define BUILD_TYPE "debug"
#elif defined(__NDEBUG__)
	#define BUILD_TYPE "release"
#else
	#define BUILD_TYPE "unknow"
#endif
