#include "../includes/abstractHandler.hpp"

Handler* AbstractHandler::setNext(Handler* handler) {
    this->next_handler_ = handler;
    return handler;
}

std::string AbstractHandler::handle(Type type, std::string message) {
    if(this->next_handler_) {
        return this->next_handler_->handle(type, message);
    }

    return {};
}