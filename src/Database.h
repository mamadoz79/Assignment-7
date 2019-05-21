#include <bits/stdc++.h>
#include "User.h"
#include "Film.h"
#include "structs.h"

using namespace std;

class Database {
private:
    vector<User> users;
    vector<Film> films;

public:
    string hashPassword(string password);

    const vector<User> &getUsers() const;

    const vector<Film> &getFilms() const;

    void addUser(const User& user);

    void addFilm(const Film& film);

    bool isUserAvailable(const string& username);

    User Login(const string& username, const string& password);
};