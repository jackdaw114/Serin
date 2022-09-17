#pragma once

#ifdef SR_PLATFORM_WINDOWS
	#ifdef SR_BUILD_DLL
		#define SERIN_API __declspec(dllexport)
	#else 
		#define SERIN_API __declspec(dllimport)
	#endif
#else
	#error serin only supports windows!

#endif 
