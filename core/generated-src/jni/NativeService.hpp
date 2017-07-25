// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from application.djinni

#pragma once

#include "djinni_support.hpp"
#include "service.hpp"

namespace djinni_generated {

class NativeService final : ::djinni::JniInterface<::oaktree_gen::Service, NativeService> {
public:
    using CppType = std::shared_ptr<::oaktree_gen::Service>;
    using CppOptType = std::shared_ptr<::oaktree_gen::Service>;
    using JniType = jobject;

    using Boxed = NativeService;

    ~NativeService();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeService>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeService>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeService();
    friend ::djinni::JniClass<NativeService>;
    friend ::djinni::JniInterface<::oaktree_gen::Service, NativeService>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::oaktree_gen::Service
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        std::shared_ptr<::oaktree_gen::Handler> pool_handler() override;
        void on_create() override;
        void on_start(const std::string & name, const std::shared_ptr<::oaktree_gen::Runnable> & runnable) override;

    private:
        friend ::djinni::JniInterface<::oaktree_gen::Service, ::djinni_generated::NativeService>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/siliconbear/oakstore/Service") };
    const jmethodID method_poolHandler { ::djinni::jniGetMethodID(clazz.get(), "poolHandler", "()Lcom/siliconbear/oakstore/Handler;") };
    const jmethodID method_onCreate { ::djinni::jniGetMethodID(clazz.get(), "onCreate", "()V") };
    const jmethodID method_onStart { ::djinni::jniGetMethodID(clazz.get(), "onStart", "(Ljava/lang/String;Lcom/siliconbear/oakstore/Runnable;)V") };
};

}  // namespace djinni_generated