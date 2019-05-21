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

vector<User> User::getUsers() {
    return users;
}

bool User::isUserAvailable(const string &username) {
    for (User user : users) {
        if (user.getUsername() == username) {
            return true;
        }
    }
    return false;
}

User User::Login(const string& username, const string& password) {
    for (User user : users) {
        if (user.getUsername() == username && user.getPassword() == password) {
            loggedUser = user;
            return user;
        }
    }
}

User::User() {}
