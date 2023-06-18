#pragma once
#include "../Type/includes/type.hpp"
#include <string>

class LogMessage {
public:
    LogMessage();

    Type type() const;
    const std::string& messages() const;

private:
    std::string message;
    Type typeMessage;
};