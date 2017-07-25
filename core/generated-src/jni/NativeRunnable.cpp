// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from application.djinni

#include "NativeRunnable.hpp"  // my header

namespace djinni_generated {

NativeRunnable::NativeRunnable() : ::djinni::JniInterface<::oaktree_gen::Runnable, NativeRunnable>("com/siliconbear/oakstore/Runnable$CppProxy") {}

NativeRunnable::~NativeRunnable() = default;


CJNIEXPORT void JNICALL Java_com_siliconbear_oakstore_Runnable_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::oaktree_gen::Runnable>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_siliconbear_oakstore_Runnable_00024CppProxy_native_1run(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::Runnable>(nativeRef);
        ref->run();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated