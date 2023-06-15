#include <string>
#include <fstream>
#include <iostream>

class LogCommand {
public:
    virtual ~LogCommand() = default;
    virtual void print(const std::string& message) = 0;
};

class printLogConsole : public LogCommand {
public:
    void print(const std::string& message) override {
        std::cout << message << std::endl;
    }
};

class printLogFile : public LogCommand {
public:
    explicit printLogFile(const std::string& path) : path(path) {}

    void print(const std::string& message) override {
        std::ofstream log(path);
        log << message;
        log.close();
    }
private:
    std::string path;
};