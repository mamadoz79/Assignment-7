#include <iostream>
#include <vector>
#include "structs.h"


#ifndef ASSIGNMENT7_USER_H
#define ASSIGNMENT7_USER_H
class User {
private:
    std::string email;
    std::string username;
    std::string password;
    int age;
    int userID;
    int money = 0;
public:
    User(std::string email, std::string username, std::string password, int age);

    User();

    std::string getEmail();

    std::string getUsername();

    std::string getPassword();

    int getAge();

    int getmoney();

    void addMoney(int money);

    void setUserId(int userId);
};

#endif