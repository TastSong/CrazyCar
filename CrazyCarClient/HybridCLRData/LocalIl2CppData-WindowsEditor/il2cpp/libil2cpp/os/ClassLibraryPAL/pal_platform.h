#pragma once

#include "il2cpp-config.h"

#if IL2CPP_TARGET_LINUX
#include "os/Linux/pal_linux.h"
#elif IL2CPP_TARGET_DARWIN
#include "os/OSX/pal_darwin.h"
#elif IL2CPP_TARGET_ANDROID
#include "os/Android/pal_android.h"
#elif IL2CPP_TARGET_JAVASCRIPT
#include "os/Emscripten/pal_emscripten.h"
#elif IL2CPP_TARGET_SWITCH
#include "pal/pal_switch.h"
#elif IL2CPP_TARGET_PS4 || IL2CPP_TARGET_PS5
#include "pal/pal_playstation.h"
#endif

/*
  These defines below just remap some posix function names. By default they fallback to the standard posix name but
  some platforms might need to define this symbols to something different in their "pal_[platform name]" header above.
  This is normally due to the platform not including the posix function as standard (e.g. Switch, Playstation).
*/
#ifndef stat_
#define stat_ stat
#endif
#ifndef fstat_
#define fstat_ fstat
#endif
#ifndef lstat_
#define lstat_ lstat
#endif
#ifndef utimes_
#define utimes_ utimes
#endif
#ifndef chmod_
#define chmod_ chmod
#endif
#ifndef link_
#define link_ link
#endif
#ifndef symlink_
#define symlink_ symlink
#endif
#ifndef readlink_
#define readlink_ readlink
#endif
#ifndef geteuid_
#define geteuid_ geteuid
#endif
#ifndef getegid_
#define getegid_ getegid
#endif
