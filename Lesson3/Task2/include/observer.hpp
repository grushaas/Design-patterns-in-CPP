#pragma once
#include <string>

class Observer {
public:
    virtual ~Observer() = default;

    virtual void onWarning(const std::string& message) = 0;
    virtual void onError(const std::string& message) = 0;
    virtual void onFatalError(const std::string& message) = 0;
};

class ObserverWarning : public Observer {
public:
    void onWarning(const std::string& message) override {}
};

class ObserverError : public Observer {
public:
    void onError(const std::string& message) override {}

private:
    const std::string path = "../errors/error.txt";
};

class ObserverFatalError : public Observer {
public:
    void onFatalError(const std::string& message) override {}

private:
    const std::string path = "../errors/error.txt";
};