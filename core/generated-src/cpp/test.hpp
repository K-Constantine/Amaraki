// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#pragma once

#include <memory>
#include <string>

namespace example_gen {

class Test {
public:
    virtual ~Test() {}

    virtual std::string getName() = 0;

    static std::shared_ptr<Test> create();
};

}  // namespace example_gen
