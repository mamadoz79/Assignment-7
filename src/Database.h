#include <bits/stdc++.h>
#include "User.h"
#include "Film.h"
#include "structs.h"

class Database {
private:
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
};