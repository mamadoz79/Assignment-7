#ifndef ASSIGNMENT7_DATABASE_H
#define ASSIGNMENT7_DATABASE_H

#include <bits/stdc++.h>
#include "structs.h"
#include "Film.h"
#include "User.h"

class Database {
private:
    int filmIDBase = 1;
    int userIDBase = 1;
    std::vector<User*> users;
    std::vector<Film*> films;

public:
    std::string hashPassword(std::string password);

    const std::vector<User*> &getUsers() const;

    const std::vector<Film*> &getFilms() const;

    void addUser(User* user);

    void addFilm(Film* film);

    bool isUserAvailable(const std::string& username);

    User* login(const std::string& username, const std::string& password);
    
    Film* findFilmByID(int id);

    void deleteFilm(int id);
};

#endif //ASSIGNMENT7_DATABASE_H