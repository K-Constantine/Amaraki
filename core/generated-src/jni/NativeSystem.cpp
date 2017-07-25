// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from application.djinni

#include "NativeSystem.hpp"  // my header
#include "Marshal.hpp"
#include "NativeSimpleCursor.hpp"

namespace djinni_generated {

NativeSystem::NativeSystem() : ::djinni::JniInterface<::oaktree_gen::System, NativeSystem>() {}

NativeSystem::~NativeSystem() = default;

NativeSystem::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeSystem::JavaProxy::~JavaProxy() = default;

std::string NativeSystem::JavaProxy::get_path() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSystem>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_getPath);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}
std::shared_ptr<::oaktree_gen::SimpleCursor> NativeSystem::JavaProxy::query(const std::string & c_database, const std::string & c_query) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSystem>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_query,
                                         ::djinni::get(::djinni::String::fromCpp(jniEnv, c_database)),
                                         ::djinni::get(::djinni::String::fromCpp(jniEnv, c_query)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeSimpleCursor::toCpp(jniEnv, jret);
}

}  // namespace djinni_generated
