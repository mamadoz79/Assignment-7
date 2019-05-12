#include "User.h"

User::User(string email, string username, string password, int age) :
        email(std::move(email)),
        username(std::move(username)),
        password(std::move(password)),
        age(age) {}

string User::getEmail() {
    return email;
}

string User::getUsername() {
    return username;
}

string User::getPassword() {
    return password;
}

int User::getAge() {
    return age;
}
