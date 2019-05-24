#include <bits/stdc++.h>

#ifndef ASSIGNMENT7_USER_H
#define ASSIGNMENT7_USER_H

class Film;

class User {
private:
    std::string email;
    std::string username;
    std::string password;
    int age;
    int userID;
    int money = 0;
    std::string type;
    std::vector<Film*> films;
public:
    User(std::string email, std::string username, std::string password, int age);

    User();

    std::string getEmail();

    std::string getUsername();

    std::string getPassword();

    int getAge();

    int getMoney();

    void addMoney(int money);

    void setUserId(int userId);

    int getID();

    void buyFilm(Film* film, int money);

    void getType();
};

#endif