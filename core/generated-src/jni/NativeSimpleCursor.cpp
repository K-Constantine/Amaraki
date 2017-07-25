// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from application.djinni

#include "NativeSimpleCursor.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeSimpleCursor::NativeSimpleCursor() : ::djinni::JniInterface<::oaktree_gen::SimpleCursor, NativeSimpleCursor>("com/siliconbear/oakstore/SimpleCursor$CppProxy") {}

NativeSimpleCursor::~NativeSimpleCursor() = default;

NativeSimpleCursor::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeSimpleCursor::JavaProxy::~JavaProxy() = default;

void NativeSimpleCursor::JavaProxy::close() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSimpleCursor>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_close);
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeSimpleCursor::JavaProxy::reset() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSimpleCursor>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_reset);
    ::djinni::jniExceptionCheck(jniEnv);
}
int32_t NativeSimpleCursor::JavaProxy::get_count() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSimpleCursor>::get();
    auto jret = jniEnv->CallIntMethod(Handle::get().get(), data.method_getCount);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::I32::toCpp(jniEnv, jret);
}
int32_t NativeSimpleCursor::JavaProxy::get_position() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSimpleCursor>::get();
    auto jret = jniEnv->CallIntMethod(Handle::get().get(), data.method_getPosition);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::I32::toCpp(jniEnv, jret);
}
std::vector<std::string> NativeSimpleCursor::JavaProxy::get_column_names() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSimpleCursor>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_getColumnNames);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::List<::djinni::String>::toCpp(jniEnv, jret);
}
bool NativeSimpleCursor::JavaProxy::is_last() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSimpleCursor>::get();
    auto jret = jniEnv->CallBooleanMethod(Handle::get().get(), data.method_isLast);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Bool::toCpp(jniEnv, jret);
}
bool NativeSimpleCursor::JavaProxy::is_first() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSimpleCursor>::get();
    auto jret = jniEnv->CallBooleanMethod(Handle::get().get(), data.method_isFirst);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Bool::toCpp(jniEnv, jret);
}
bool NativeSimpleCursor::JavaProxy::is_closed() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSimpleCursor>::get();
    auto jret = jniEnv->CallBooleanMethod(Handle::get().get(), data.method_isClosed);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Bool::toCpp(jniEnv, jret);
}
std::string NativeSimpleCursor::JavaProxy::get_string(const std::string & c_column_name) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSimpleCursor>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_getString,
                                                  ::djinni::get(::djinni::String::fromCpp(jniEnv, c_column_name)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}
bool NativeSimpleCursor::JavaProxy::move_to_next() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSimpleCursor>::get();
    auto jret = jniEnv->CallBooleanMethod(Handle::get().get(), data.method_moveToNext);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Bool::toCpp(jniEnv, jret);
}
bool NativeSimpleCursor::JavaProxy::move_to_last() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSimpleCursor>::get();
    auto jret = jniEnv->CallBooleanMethod(Handle::get().get(), data.method_moveToLast);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Bool::toCpp(jniEnv, jret);
}
bool NativeSimpleCursor::JavaProxy::move_to_first() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSimpleCursor>::get();
    auto jret = jniEnv->CallBooleanMethod(Handle::get().get(), data.method_moveToFirst);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Bool::toCpp(jniEnv, jret);
}
bool NativeSimpleCursor::JavaProxy::move_to_previous() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSimpleCursor>::get();
    auto jret = jniEnv->CallBooleanMethod(Handle::get().get(), data.method_moveToPrevious);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Bool::toCpp(jniEnv, jret);
}
bool NativeSimpleCursor::JavaProxy::move_to_position(int32_t c_position) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSimpleCursor>::get();
    auto jret = jniEnv->CallBooleanMethod(Handle::get().get(), data.method_moveToPosition,
                                          ::djinni::get(::djinni::I32::fromCpp(jniEnv, c_position)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Bool::toCpp(jniEnv, jret);
}
std::string NativeSimpleCursor::JavaProxy::to_json() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSimpleCursor>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_toJson);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_com_siliconbear_oakstore_SimpleCursor_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::oaktree_gen::SimpleCursor>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_siliconbear_oakstore_SimpleCursor_00024CppProxy_native_1close(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::SimpleCursor>(nativeRef);
        ref->close();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_siliconbear_oakstore_SimpleCursor_00024CppProxy_native_1reset(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::SimpleCursor>(nativeRef);
        ref->reset();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jint JNICALL Java_com_siliconbear_oakstore_SimpleCursor_00024CppProxy_native_1getCount(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::SimpleCursor>(nativeRef);
        auto r = ref->get_count();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_com_siliconbear_oakstore_SimpleCursor_00024CppProxy_native_1getPosition(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::SimpleCursor>(nativeRef);
        auto r = ref->get_position();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_siliconbear_oakstore_SimpleCursor_00024CppProxy_native_1getColumnNames(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::SimpleCursor>(nativeRef);
        auto r = ref->get_column_names();
        return ::djinni::release(::djinni::List<::djinni::String>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_siliconbear_oakstore_SimpleCursor_00024CppProxy_native_1isLast(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::SimpleCursor>(nativeRef);
        auto r = ref->is_last();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_siliconbear_oakstore_SimpleCursor_00024CppProxy_native_1isFirst(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::SimpleCursor>(nativeRef);
        auto r = ref->is_first();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_siliconbear_oakstore_SimpleCursor_00024CppProxy_native_1isClosed(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::SimpleCursor>(nativeRef);
        auto r = ref->is_closed();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_siliconbear_oakstore_SimpleCursor_00024CppProxy_native_1getString(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_columnName)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::SimpleCursor>(nativeRef);
        auto r = ref->get_string(::djinni::String::toCpp(jniEnv, j_columnName));
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_siliconbear_oakstore_SimpleCursor_00024CppProxy_native_1moveToNext(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::SimpleCursor>(nativeRef);
        auto r = ref->move_to_next();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_siliconbear_oakstore_SimpleCursor_00024CppProxy_native_1moveToLast(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::SimpleCursor>(nativeRef);
        auto r = ref->move_to_last();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_siliconbear_oakstore_SimpleCursor_00024CppProxy_native_1moveToFirst(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::SimpleCursor>(nativeRef);
        auto r = ref->move_to_first();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_siliconbear_oakstore_SimpleCursor_00024CppProxy_native_1moveToPrevious(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::SimpleCursor>(nativeRef);
        auto r = ref->move_to_previous();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_siliconbear_oakstore_SimpleCursor_00024CppProxy_native_1moveToPosition(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_position)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::SimpleCursor>(nativeRef);
        auto r = ref->move_to_position(::djinni::I32::toCpp(jniEnv, j_position));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_siliconbear_oakstore_SimpleCursor_00024CppProxy_native_1toJson(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::oaktree_gen::SimpleCursor>(nativeRef);
        auto r = ref->to_json();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
