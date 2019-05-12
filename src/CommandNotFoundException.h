#include <iostream>

using namespace std;

class CommandNotFoundException : public exception {
public:
    CommandNotFoundException();

private:
    string msg = "Not Found";
};