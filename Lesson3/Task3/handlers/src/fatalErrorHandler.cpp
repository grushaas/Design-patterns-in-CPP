#include "../includes/fatalErrorHandler.hpp"

std::string FatalErrorHandler::handle(Type type, std::string message) {
    try
    {
        if(type.getType() != "Fatal Error") {
            return AbstractHandler::handle(type, message);
        }
    }
    catch(...)
    {
        std::cout << message << std::endl;
        return "Fatal Error";
    }
    return "What?";
}