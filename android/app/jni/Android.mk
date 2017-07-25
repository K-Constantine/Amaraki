LOCAL_PATH:= $(call my-dir)

#ARM optimizations
ifeq ($(TARGET_ARCH),arm)
  PLATFORM_TARGET_ARCH := armeabi
endif
ifeq ($(TARGET_ARCH),arm64)
  PLATFORM_TARGET_ARCH := arm64-v8a
endif

#x86 optimizations
ifeq ($(TARGET_ARCH),x86)
  PLATFORM_TARGET_ARCH := x86
endif
ifeq ($(TARGET_ARCH),x86_64)
  PLATFORM_TARGET_ARCH := x86_64
endif

#MIPS optimizations
ifeq ($(TARGET_ARCH),mips)
  PLATFORM_TARGET_ARCH := mips
endif
ifeq ($(TARGET_ARCH),mips64)
  PLATFORM_TARGET_ARCH := mips64
endif

# include inbuilt libraries
include ../../LibAndroid.mk 

# always force this build to re-run its dependencies
FORCE_GYP := $(shell make -C ../../ GypAndroid.mk)
include ../../GypAndroid.mk
