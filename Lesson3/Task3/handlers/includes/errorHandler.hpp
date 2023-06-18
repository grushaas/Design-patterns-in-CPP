#pragma once
#include "abstractHandler.hpp"

class ErrorHandler : public AbstractHandler {
public:
    std::string handle(Type type, std::string message) override;
};