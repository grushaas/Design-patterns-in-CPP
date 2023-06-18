#pragma once
#include "abstractHandler.hpp"

class UnknownMessageHandler : public AbstractHandler {
public:
    std::string handle(Type type, std::string message) override;
};