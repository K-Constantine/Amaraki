// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from application.djinni

#pragma once

#include <memory>

namespace oaktree_gen {

class Runnable;

class Handler {
public:
    virtual ~Handler() {}

    virtual void post(const std::shared_ptr<Runnable> & runnable) = 0;
};

}  // namespace oaktree_gen