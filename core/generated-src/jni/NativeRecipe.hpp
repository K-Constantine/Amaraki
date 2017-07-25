// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from application.djinni

#pragma once

#include "djinni_support.hpp"
#include "recipe.hpp"

namespace djinni_generated {

class NativeRecipe final : ::djinni::JniInterface<::oaktree_gen::Recipe, NativeRecipe> {
public:
    using CppType = std::shared_ptr<::oaktree_gen::Recipe>;
    using CppOptType = std::shared_ptr<::oaktree_gen::Recipe>;
    using JniType = jobject;

    using Boxed = NativeRecipe;

    ~NativeRecipe();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeRecipe>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeRecipe>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeRecipe();
    friend ::djinni::JniClass<NativeRecipe>;
    friend ::djinni::JniInterface<::oaktree_gen::Recipe, NativeRecipe>;

};

}  // namespace djinni_generated
