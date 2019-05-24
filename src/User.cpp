#include "User.h"
#include "Film.h"

User::User(std::string email, std::string username, std::string password, int age) :
        email(email),
        username(username),
        password(password),
        age(age)
        {}
User::User() = default;

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

int User::getMoney() {
    return money;
}

void User::setUserId(int userId) {
    userID = userId;
}

int User::getID() {
	return userId;
}

void User::addMoney(int money) {
    this->money += money;
}

void User::buyFilm(Film *film, int money) {
    films.push_back(film);
    this->money -= money;
}

void User::getType() {
	return type;
}