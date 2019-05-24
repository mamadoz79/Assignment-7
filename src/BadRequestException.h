#include <iostream>

class BadRequestException : public std::exception {
public:
    BadRequestException();

private:
    std::string msg = "Bad Request";
};