#include <iostream>
#include "../handlers/includes/handler.hpp"
#include "../handlers/includes/fatalErrorHandler.hpp"
#include "../handlers/includes/warningHandler.hpp"
#include "../handlers/includes/unknownMessageHandler.hpp"
#include "../handlers/includes/errorHandler.hpp"
#include "../includes/LogMessage.hpp"


int main() {
    LogMessage msg;

    FatalErrorHandler *fatal = new FatalErrorHandler;
    ErrorHandler *error = new ErrorHandler;
    WarningHandler *warning = new WarningHandler;
    UnknownMessageHandler *unknowMessage = new UnknownMessageHandler;

    fatal->setNext(error)->setNext(warning)->setNext(unknowMessage);

    delete fatal;
    delete error;
    delete warning;
    delete unknowMessage;

    return 0;
}