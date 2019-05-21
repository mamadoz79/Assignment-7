#include <iostream>
#include <vector>
#include "structs.h"


#ifndef ASSIGNMENT7_USER_H
#define ASSIGNMENT7_USER_H


using namespace std;

class User {
private:
    string email;
    string username;
    string password;
    int age;
public:
    User(string email, string username, string password, int age);

    User();

    string getEmail();

    string getUsername();

    string getPassword();

    int getAge();
};

#endif