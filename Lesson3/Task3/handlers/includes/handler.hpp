#pragma once
#include "../../Type/includes/type.hpp"

class Handler {
public:
    Handler() {}
    virtual Handler* setNext(Handler *handler) = 0;
    virtual std::string handle(Type type, std::string message) = 0;
};