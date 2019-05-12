#include "User.h"
#include <iostream>

using namespace std;

class Publisher : public User{
public:
    Publisher(string email, string username, string password, int age);
};