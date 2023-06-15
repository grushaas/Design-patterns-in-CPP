#include <iostream>
#include <string>
#include "logCommand.hpp"

void print(LogCommand& log) {
    const std::string message = "Hello, this is logging file!";
    log.print(message);
}

int main() {
    printLogConsole pConsole;
    printLogFile pFile("log.txt");

    print(pFile);
    print(pConsole);
    
    return 0;
}