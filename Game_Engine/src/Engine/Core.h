#pragma once

//With this we check whether the code we're accessing resides in the engine or the application. We either import or export.
#ifdef ENGINE_PLATFORM_WINDOWS
	#ifdef ENGINE_BUILD_DLL 
		#define ENGINE_API __declspec(dllexport)
	#else
		#define ENGINE_API __declspec(dllimport)
	#endif
#else
	#error Engine only works for windows!
#endif