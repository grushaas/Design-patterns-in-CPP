#pragma once
#include <string>
#include <iostream>

struct Type {
public:
    Type() {
       addType();
    }

    std::string getType() const {
        return type;
    }

private:
    void addType() {
        int select = 0;
        std::cout << "Message type?" << std::endl;
        std::cout << "1. Warning" << std::endl;
        std::cout << "2. Error" << std::endl;
        std::cout << "3. Fatal Error" << std::endl;
        std::cout << "4. Unknown Message" << std::endl;
        std::cout << "Number: ";
        std::cin >> select;

        switch (select)
        {
        case 1:
            type = warning;
            break;
        case 2:
            type = error;
            break;
        case 3:
            type = fatalError;
            break;
        case 4:
            type = unknownMessage;
            break;
        
        default:
            break;
        }
    }
    std::string type;

    // Типы сообщений
    std::string warning = "Warning";
    std::string error = "Error";
    std::string fatalError = "Fatal Error";
    std::string unknownMessage = "Unknown Message";
};