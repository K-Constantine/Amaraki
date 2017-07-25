// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from application.djinni

#include "system.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol OAKLIBSystem;

namespace djinni_generated {

class System
{
public:
    using CppType = std::shared_ptr<::oaktree_gen::System>;
    using CppOptType = std::shared_ptr<::oaktree_gen::System>;
    using ObjcType = id<OAKLIBSystem>;

    using Boxed = System;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

