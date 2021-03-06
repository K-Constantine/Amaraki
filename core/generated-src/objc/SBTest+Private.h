// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#include "test.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class SBTest;

namespace djinni_generated {

class Test
{
public:
    using CppType = std::shared_ptr<::example_gen::Test>;
    using CppOptType = std::shared_ptr<::example_gen::Test>;
    using ObjcType = SBTest*;

    using Boxed = Test;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

