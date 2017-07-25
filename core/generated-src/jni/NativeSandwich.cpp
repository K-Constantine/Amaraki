// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from simi.djinni

#include "NativeSandwich.hpp"  // my header
#include "NativeChef.hpp"

namespace djinni_generated {

NativeSandwich::NativeSandwich() : ::djinni::JniInterface<::oaktree_gen::Sandwich, NativeSandwich>("com/siliconbear/oakstore/Sandwich$CppProxy") {}

NativeSandwich::~NativeSandwich() = default;


CJNIEXPORT void JNICALL Java_com_siliconbear_oakstore_Sandwich_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::oaktree_gen::Sandwich>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_siliconbear_oakstore_Sandwich_00024CppProxy_native_1getRecipe(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_chef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::Sandwich>(nativeRef);
        ref->get_recipe(::djinni_generated::NativeChef::toCpp(jniEnv, j_chef));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_siliconbear_oakstore_Sandwich_getInstance(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::oaktree_gen::Sandwich::get_instance();
        return ::djinni::release(::djinni_generated::NativeSandwich::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated