LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

# /system/lib/librilmtk.so ( _ZN7android6Parcel13writeString16EPKtj )
LOCAL_SRC_FILES += ril.cpp
LOCAL_SHARED_LIBRARIES += libbinder

# /system/lib/libcam.utils.so ( _ZN7android13GraphicBufferC1Ejjij )
LOCAL_SRC_FILES := GraphicBuffer.cpp
LOCAL_SHARED_LIBRARIES := libui libbinder libgui
LOCAL_C_INCLUDES := frameworks/native/include

# /system/lib/libmtkjpeg.so ( __pthread_gettid )
LOCAL_SRC_FILES += bionic.cpp
LOCAL_SHARED_LIBRARIES += libc

LOCAL_MODULE := libsprout
LOCAL_MODULE_TAGS := optional
LOCAL_PROPRIETARY_MODULE := true
include $(BUILD_SHARED_LIBRARY)
