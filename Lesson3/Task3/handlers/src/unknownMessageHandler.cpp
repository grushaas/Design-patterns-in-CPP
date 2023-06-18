#include "../includes/unknownMessageHandler.hpp"

std::string UnknownMessageHandler::handle(Type type, std::string message) {
    try {
        if(type.getType() != "Unknown Message") {
            return AbstractHandler::handle(type, message);
        }
    } catch(...) {
        std::cout << "Unknown Message: " << message << std::endl;
        return "Unknown Message";
    }
    
    return "What?";
}