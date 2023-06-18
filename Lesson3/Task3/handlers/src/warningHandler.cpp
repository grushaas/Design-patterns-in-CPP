#include "../includes/warningHandler.hpp"

std::string WarningHandler::handle(Type type, std::string message) {
    if(type.getType() == "Warning") {
        std::cout << "Warning: " << message << std::endl;
        return "Warning";
    }
    else {
        return AbstractHandler::handle(type, message);
    }
}