#include "User.h"

User::User(std::string email, std::string username, std::string password, int age) :
        email(email),
        username(username),
        password(password),
        age(age)
        {}

std::string User::getEmail() {
    return email;
}

std::string User::getUsername() {
    return username;
}

std::string User::getPassword() {
    return password;
}

int User::getAge() {
    return age;
}
int User::getmoney() {
    return money;
}

User::User() {}

void User::setUserId(int userId) {
    userID = userId;
}

void User::addMoney(int money) {
    this->money += money;
}
