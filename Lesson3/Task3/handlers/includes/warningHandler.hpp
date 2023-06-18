#pragma once
#include "abstractHandler.hpp"

class WarningHandler : public AbstractHandler {
public:
    std::string handle(Type type, std::string message) override;
};