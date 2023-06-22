#include <fstream>
#include <string>

class Printable
{
public:
    virtual ~Printable() = default;

    virtual std::string print() const = 0;
};

class printHTML : public Printable {
public:
    printHTML(std::string data) : data_(data) {}

    std::string print() const override {
        return "<html>" + data_ + "<html/>";
    }

private:
    std::string data_;
};

class printJSON : public Printable {
public:
    printJSON(std::string data) : data_(data) {}

    std::string print() const override {
        return "{ \"data\": }\"" + data_ + "\"}";
    }

private:
    std::string data_;
};

class printTEXT : public Printable {
public:
    printTEXT(std::string data) : data_(data) {}

    std::string print() const override {
        return data_;
    }

private:
    std::string data_;
};

void saveTo(std::ofstream &file, const Printable& printable)
{
    file << printable.print();
}

int main() {
    std::ofstream file("file.txt");
    printJSON json("Successful");
    printHTML html("Successfull");

    saveTo(file, html);

    return 0;
}