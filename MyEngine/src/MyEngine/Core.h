#pragma once
#ifdef ME_PLATFORM_WINDOWN
     #ifdef ME_BULID_DLL
        #define MYENGINE_API __declspec(dllexport)
     #else
        #define MYENGINE_API __declspec(dllimport)
     #endif // ME_BULID_DLL
#else
    #error MyEngine Only Support for Win


#endif // 
