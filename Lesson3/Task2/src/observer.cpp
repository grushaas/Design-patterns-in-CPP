#include "../include/observer.hpp"
#include <iostream>
#include <fstream>

void ObserverWarning::onWarning(const std::string& message) {
    std::cout << "Warning: " << message << std::endl;
}

void ObserverError::onError(const std::string& message) {
    std::ofstream error(path);
    error << "Error: " << message << std::endl;
    error.close();
}

void ObserverFatalError::onFatalError(const std::string& message) {
    std::cout << "FatalError: " << message << std::endl;

    std::ofstream error(path);
    error << "FatalError: " << message << std::endl;
    error.close();
}