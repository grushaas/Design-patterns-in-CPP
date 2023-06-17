#pragma once
#include "observer.hpp"
#include <string>
#include <vector>

class Observed {
public:
    Observed(Observer* observer);
    ~Observed();

    void addObserver();

    void RemoveObserver();

    void warning(const std::string& message) const;
    void error(const std::string& message) const;
    void fatalError(const std::string& message) const;

private:
    Observer* observer_;
    std::vector<Observer*> observers_;
};