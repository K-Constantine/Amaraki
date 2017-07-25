// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from simi.djinni

#pragma once

#include <memory>
#include <string>

namespace oaktree_gen {

class SimpleCursor;

class Product {
public:
    virtual ~Product() {}

    virtual std::string get_id() = 0;

    virtual std::string get_name() = 0;

    virtual std::string get_price() = 0;

    virtual bool is_in_stock() = 0;

    virtual std::string get_image_url() = 0;

    static std::shared_ptr<Product> get_instance(const std::shared_ptr<SimpleCursor> & cursor);
};

}  // namespace oaktree_gen
