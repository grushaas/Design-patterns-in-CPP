#include "../include/observed.hpp"

Observed::Observed(Observer* observer) : observer_(observer) {
    addObserver();
}

Observed::~Observed() {
    RemoveObserver();
}

void Observed::addObserver() {
    observers_.push_back(observer_);
}

void Observed::RemoveObserver() {
    auto it = std::remove(observers_.begin(), observers_.end(), observer_);
    observers_.erase(it, observers_.end());
}

void Observed::warning(const std::string& message) const {
    for(auto observer : observers_) {
        observer->onWarning(message);
    }
}

void Observed::error(const std::string& message) const {
    for(auto observer : observers_) {
        observer->onError(message);
    }
}

void Observed::fatalError(const std::string& message) const {
    for(auto observer : observers_) {
        observer->onFatalError(message);
    }
}