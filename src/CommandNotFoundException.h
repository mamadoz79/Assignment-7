#include <iostream>

class CommandNotFoundException : public std::exception {
public:
    CommandNotFoundException();

private:
    std::string msg = "Not Found";
};