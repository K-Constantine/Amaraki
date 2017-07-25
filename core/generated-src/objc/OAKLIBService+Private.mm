// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from application.djinni

#import "OAKLIBService+Private.h"
#import "OAKLIBService.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "OAKLIBHandler+Private.h"
#import "OAKLIBRunnable+Private.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

class Service::ObjcProxy final
: public ::oaktree_gen::Service
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::Service;
public:
    using ObjcProxyBase::ObjcProxyBase;
    std::shared_ptr<::oaktree_gen::Handler> pool_handler() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() poolHandler];
            return ::djinni_generated::Handler::toCpp(objcpp_result_);
        }
    }
    void on_create() override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onCreate];
        }
    }
    void on_start(const std::string & c_name, const std::shared_ptr<::oaktree_gen::Runnable> & c_runnable) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onStart:(::djinni::String::fromCpp(c_name))
                                                     runnable:(::djinni_generated::Runnable::fromCpp(c_runnable))];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto Service::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto Service::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return dynamic_cast<ObjcProxy&>(*cpp).djinni_private_get_proxied_objc_object();
}

}  // namespace djinni_generated
