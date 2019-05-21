#include "Database.h"
string Database::hashPassword(string password) {
    reverse(password.begin(), password.end());
    for (char & i : password) {
        if (i == 'a')
            i = *"\u0444";
        else if (i == 'b')
            i = *"\u0445";
        else if (i == 'c')
            i = *"\u0446";
        else if (i == 'd')
            i = *"\u0447";
        else if (i == 'e')
            i = *"\u0448";
        else if (i == 'f')
            i = *"\u0449";
        else if (i == 'g')
            i = *"\u0450";
        else if (i == 'h')
            i = *"\u0451";
        else if (i == 'i')
            i = *"\u0452";
        else if (i == 'j')
            i = *"\u0453";
        else if (i == 'k')
            i = *"\u0454";
        else if (i == 'l')
            i = *"\u0455";
        else if (i == 'm')
            i = *"\u0455";
        else if (i == 'n')
            i = *"\u0456";
        else if (i == 'o')
            i = *"\u0457";
        else if (i == 'p')
            i = *"\u0458";
        else if (i == 'q')
            i = *"\u0459";
    }
    return password;
}

const vector<User> &Database::getUsers() const {
    return users;
}

const vector<Film> &Database::getFilms() const {
    return films;
}

void Database::addUser(const User& user) {
    users.push_back(user);
}

void Database::addFilm(const Film& film) {
    films.push_back(film);
}

bool Database::isUserAvailable(const string &username) {
    for (User user : users) {
        if (user.getUsername() == username) {
            return true;
        }
    }
    return false;
}

User Database::Login(const string &username, const string &password) {
    for (User user : users) {
        if (user.getUsername() == username && user.getPassword() == password) {
            return user;
        }
    }
}
