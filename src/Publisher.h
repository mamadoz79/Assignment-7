#include <iostream>
#include "User.h"
#include "structs.h"


#ifndef ASSIGNMENT7_PUBLISHER_H
#define ASSIGNMENT7_PUBLISHER_H

using namespace std;

class Publisher : public User{
public:
    Publisher(string email, string username, string password, int age);
};

#endif //ASSIGNMENT7_PUBLISHER_H