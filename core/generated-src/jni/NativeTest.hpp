// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#pragma once

#include "djinni_support.hpp"
#include "test.hpp"

namespace djinni_generated {

class NativeTest final : ::djinni::JniInterface<::example_gen::Test, NativeTest> {
public:
    using CppType = std::shared_ptr<::example_gen::Test>;
    using CppOptType = std::shared_ptr<::example_gen::Test>;
    using JniType = jobject;

    using Boxed = NativeTest;

    ~NativeTest();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeTest>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeTest>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeTest();
    friend ::djinni::JniClass<NativeTest>;
    friend ::djinni::JniInterface<::example_gen::Test, NativeTest>;

};

}  // namespace djinni_generated
