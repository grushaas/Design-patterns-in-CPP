#include "../includes/LogMessage.hpp"

LogMessage::LogMessage() {
    typeMessage = type();
    message = messages();
}

//Определение типа
Type LogMessage::type() const {
    Type typeMessage();

    return typeMessage();
}

//Создание сообщения
const std::string& LogMessage::messages() const{
    std::string msg;
    std::cout << "Error Message: ";
    std::cin >> msg;

    return msg;
}