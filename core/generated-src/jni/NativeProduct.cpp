// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from simi.djinni

#include "NativeProduct.hpp"  // my header
#include "Marshal.hpp"
#include "NativeSimpleCursor.hpp"

namespace djinni_generated {

NativeProduct::NativeProduct() : ::djinni::JniInterface<::oaktree_gen::Product, NativeProduct>("com/siliconbear/oakstore/Product$CppProxy") {}

NativeProduct::~NativeProduct() = default;


CJNIEXPORT void JNICALL Java_com_siliconbear_oakstore_Product_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::oaktree_gen::Product>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_com_siliconbear_oakstore_Product_00024CppProxy_native_1getId(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::Product>(nativeRef);
        auto r = ref->get_id();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_siliconbear_oakstore_Product_00024CppProxy_native_1getName(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::Product>(nativeRef);
        auto r = ref->get_name();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_siliconbear_oakstore_Product_00024CppProxy_native_1getPrice(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::Product>(nativeRef);
        auto r = ref->get_price();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_siliconbear_oakstore_Product_00024CppProxy_native_1isInStock(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::Product>(nativeRef);
        auto r = ref->is_in_stock();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_siliconbear_oakstore_Product_00024CppProxy_native_1getImageUrl(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::Product>(nativeRef);
        auto r = ref->get_image_url();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_siliconbear_oakstore_Product_getInstance(JNIEnv* jniEnv, jobject /*this*/, jobject j_cursor)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::oaktree_gen::Product::get_instance(::djinni_generated::NativeSimpleCursor::toCpp(jniEnv, j_cursor));
        return ::djinni::release(::djinni_generated::NativeProduct::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated