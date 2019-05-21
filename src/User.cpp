#include "User.h"

User::User(string email, string username, string password, int age) :
        email(email),
        username(username),
        password(password),
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

User::User() {}