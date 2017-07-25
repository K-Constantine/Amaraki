// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from application.djinni

#import "OAKLIBChef+Private.h"
#import "OAKLIBChef.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "OAKLIBDish+Private.h"
#import "OAKLIBMenu+Private.h"
#import "OAKLIBRecipe+Private.h"
#import "OAKLIBSystem+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface OAKLIBChef ()

- (id)initWithCpp:(const std::shared_ptr<::oaktree_gen::Chef>&)cppRef;

@end

@implementation OAKLIBChef {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::oaktree_gen::Chef>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::oaktree_gen::Chef>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (nonnull NSString *)getVersion {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->get_version();
        return ::djinni::String::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable OAKLIBDish *)grab:(OAKLIBMenu)menu {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->grab(::djinni::Enum<::oaktree_gen::Menu, OAKLIBMenu>::toCpp(menu));
        return ::djinni_generated::Dish::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)addRecipe:(nullable OAKLIBRecipe *)recipe {
    try {
        _cppRefHandle.get()->add_recipe(::djinni_generated::Recipe::toCpp(recipe));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable id<OAKLIBSystem>)getSystem {
    try {
        auto objcpp_result_ = ::oaktree_gen::Chef::get_system();
        return ::djinni_generated::System::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto Chef::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto Chef::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<OAKLIBChef>(cpp);
}

}  // namespace djinni_generated

@end
