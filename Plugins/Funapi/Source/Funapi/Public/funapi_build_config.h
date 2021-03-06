// Copyright (C) 2013-2017 iFunFactory Inc. All Rights Reserved.
//
// This work is confidential and proprietary to iFunFactory Inc. and
// must not be used, disclosed, copied, or distributed without the prior
// consent of iFunFactory Inc.

#ifndef SRC_FUNAPI_BUILD_CONFIG_H_
#define SRC_FUNAPI_BUILD_CONFIG_H_

// #define FUNAPI_COCOS2D
#define FUNAPI_UE4

#ifdef FUNAPI_UE4
  #if defined(_WIN32)
  #define FUNAPI_PLATFORM_WINDOWS
  #define FUNAPI_UE4_PLATFORM_WINDOWS
  #endif
#endif

#ifdef FUNAPI_COCOS2D
#define FUNAPI_API
#define WITH_FUNAPI 1
  #if defined(_WIN32)
  #define FUNAPI_PLATFORM_WINDOWS
  #define FUNAPI_COCOS2D_PLATFORM_WINDOWS
  #endif
#endif

#define DEBUG_LOG

#ifdef FUNAPI_PLATFORM_WINDOWS
#define NOMINMAX
#endif

#endif  // SRC_FUNAPI_BUILD_CONFIG_H_
