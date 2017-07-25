LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE:= libcurl
LOCAL_SRC_FILES := core/deps/prebuilt/android/$(PLATFORM_TARGET_ARCH)/libcurl.a
LOCAL_EXPORT_C_INCLUDES := core/deps/include
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE:= iconv
LOCAL_SRC_FILES := core/deps/prebuilt/android/$(PLATFORM_TARGET_ARCH)/libiconv.a
LOCAL_EXPORT_C_INCLUDES := core/deps/include
include $(PREBUILT_STATIC_LIBRARY)
