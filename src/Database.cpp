#include "Database.h"
#include "User.h"

using namespace std;

string Database::hashPassword(string password) {
    reverse(password.begin(), password.end());
    for (char &i : password) {
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

const vector<User *> &Database::getUsers() const {
    return users;
}

const vector<Film *> &Database::getFilms() const {
    return films;
}

void Database::addUser(User *user) {
    users.push_back(user);
    user->setUserId(userIDBase++);
}

void Database::addFilm(Film *film) {
    films.push_back(film);
    film->setFilmId(filmIDBase++);
}

bool Database::isUserAvailable(const string &username) {
    for (User *user : users) {
        if (user->getUsername() == username) {
            return true;
        }
    }
    return false;
}

User *Database::login(const string &username, const string &password) {
    for (User *user : users) {
        if (user->getUsername() == username && user->getPassword() == password) {
            return user;
        }
    }
    return nullptr;
}

Film *Database::findFilmByID(int id) {
    for (auto a : films) {
        if(a->getFilmID() == id) {
            return a;
        }
    }
    return nullptr;
}

void Database::deleteFilm(int id) {
    remove(films.begin(), films.end(), findFilmByID(id));
}
