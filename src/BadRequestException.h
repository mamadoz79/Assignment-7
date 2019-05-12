#include <iostream>

using namespace std;

class BadRequestException : public exception {
public:
    BadRequestException();

private:
    string msg = "Bad Request";
};