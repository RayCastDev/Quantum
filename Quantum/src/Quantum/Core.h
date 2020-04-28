#pragma once

#ifdef QT_PLATFORM_WINDOWS
	#ifdef QT_BUILD_DLL
		#define QUANTUM_API __declspec(dllexport)
	#else
		#define QUANTUM_API __declspec(dllimport)
	#endif
#else
	#error Quantum only support Windows!
#endif