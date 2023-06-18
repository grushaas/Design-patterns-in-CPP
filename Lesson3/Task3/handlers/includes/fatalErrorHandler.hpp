#pragma once
#include "abstractHandler.hpp"

class FatalErrorHandler : public AbstractHandler {
public:
    std::string handle(Type type, std::string message) override;
};