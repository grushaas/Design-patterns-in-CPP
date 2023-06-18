#include "../includes/errorHandler.hpp"
#include <fstream>

std::string ErrorHandler::handle(Type type, std::string message) {
    if(type.getType() == "Error") {
        std::ofstream error("../../errors/error.txt");
        error << message << std::endl;
        error.close();
        return "Error!";
    }
    else {
        return AbstractHandler::handle(type, message);
    }
}