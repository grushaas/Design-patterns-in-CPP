#pragma once
#include "handler.hpp"

class AbstractHandler : public Handler {
public:
    AbstractHandler() : next_handler_(nullptr) {}

    Handler* setNext(Handler* handler) override;

    std::string handle(Type type, std::string message) override;
private:
    Handler* next_handler_;
};