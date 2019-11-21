#pragma once

#ifdef HLI_PLATFORM_WINDOWS
	#ifdef HLI_BUILD_DLL
		#define HLI_API _declspec(dllexport)
	#else
		#define HLI_API _declspec(dllimport)
	#endif
#endif