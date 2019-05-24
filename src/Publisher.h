#include <iostream>
#include "User.h"
#include "structs.h"


#ifndef ASSIGNMENT7_PUBLISHER_H
#define ASSIGNMENT7_PUBLISHER_H
class Publisher : public User{
public:
    Publisher(const std::string &email, const std::string &username, const std::string &password, int age);
};

#endif