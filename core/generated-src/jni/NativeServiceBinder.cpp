// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from application.djinni

#include "NativeServiceBinder.hpp"  // my header
#include "Marshal.hpp"
#include "NativeLoadType.hpp"
#include "NativeSimpleCursor.hpp"

namespace djinni_generated {

NativeServiceBinder::NativeServiceBinder() : ::djinni::JniInterface<::oaktree_gen::ServiceBinder, NativeServiceBinder>() {}

NativeServiceBinder::~NativeServiceBinder() = default;

NativeServiceBinder::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeServiceBinder::JavaProxy::~JavaProxy() = default;

::oaktree_gen::LoadType NativeServiceBinder::JavaProxy::load_type() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeServiceBinder>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_loadType);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeLoadType::toCpp(jniEnv, jret);
}
void NativeServiceBinder::JavaProxy::on_error(const std::string & c_message) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeServiceBinder>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onError,
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_message)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeServiceBinder::JavaProxy::on_load(const std::string & c_message, bool c_cache, const std::shared_ptr<::oaktree_gen::SimpleCursor> & c_cursor) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeServiceBinder>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onLoad,
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_message)),
                           ::djinni::get(::djinni::Bool::fromCpp(jniEnv, c_cache)),
                           ::djinni::get(::djinni_generated::NativeSimpleCursor::fromCpp(jniEnv, c_cursor)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated