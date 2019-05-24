#include <iostream>
#include <bits/stdc++.h>
#include "Errors.h"
#include "User.h"
#include "Publisher.h"
#include "Viewer.h"
#include "Database.h"
#include "Film.h"

class Publisher;

using namespace std;

vector<string> split(const string &s, char delim);

int main() {
    Database database = Database();
    User *loggedUser = nullptr;
    database.addUser(new User("alimohseni@gmail.com", "ali", "1234am", 24));
    vector<string> v;
    string line;
    while (1) {
        try {
            getline(cin, line);
            v = split(line, ' ');
            if (v[0] == "POST" || v[0] == "DELETE" || v[0] == "GET" || v[0] == "PUT") {
                if (v[0] == "POST") {
                    if (v[1] == "signup" && (v.size() == 11 || v.size() == 13) && !database.isUserAvailable(v[4])) {
                        User *user;
                        if ((v.size() == 13 && v[12] == "false") || v.size() == 11) {
                            user = new Viewer(v[8], v[4], v[6], stoi(v[10]));
                        } else {
                            user = new Publisher(v[8], v[4], v[6], stoi(v[10]));
                        }
                        database.addUser(user);
                        loggedUser = user;
                        cout << "OK" << endl;

                    } else if (v[1] == "login") {
                        if (database.isUserAvailable(v[4])) {
                            loggedUser = database.login(v[4], v[6]);
                            if (loggedUser == nullptr) {
                                throw (BadRequestException());
                            }
                            cout << "OK" << endl;
                        } else {
                            throw (BadRequestException());
                        }
                    } else if (v[1] == "replies") {

                    } else if (v[1] == "money") {
                        loggedUser->addMoney(stoi(v[4]));
                        cout << "OK" << endl;
                    }
                } else if (v[1] == "followers") {

                } else if (v[1] == "rate") {

                } else if (v[1] == "buy") {
                    Film *film = database.findFilmByID(stoi(v[4]));
                    if (film->getPrice() > loggedUser->getMoney()) {
                        throw (BadRequestException());
                    } else {
                        loggedUser->buyFilm(film, film->getPrice());
                        cout << "OK" << endl;
                    }
                } else {
                    throw (BadRequestException());
                }

            } else if (v[0] == "DELETE") {
                if (v[1] == "films") {
                    if(loggedUser->getType() == "Publisher") {
                        if (database.findFilmByID(stoi(v[4])) != nullptr) {
                            database.deleteFilm(stoi(v[4]));
                        } else {
                            cout << "Not Found" << endl;
                        }
                    } else {
                        throw (PermissionDeniedException());
                    }
                } else if (v[1] == "comments") {

                }
            } else if (v[0] == "GET") {
                if (v[1] == "comments") {

                } else if (v[1] == "published") {


                } else if (v[1] == "followers") {
                    if(loggedUser->getType() == "Publisher") {
                        cout << "List of followers" << endl;
                        auto* publisher = (Publisher*) (loggedUser);
                        for (int i = 1; i <= publisher->getFollowers().size(); i++) {
                            User* follower = publisher->getFollowers()[i];
                            cout << i << ". " << follower->getID() << " | " << follower->getUsername();
                            cout << " | " + follower->getEmail() << endl;
                        }
                    } else {
                        throw (PermissionDeniedException());
                    }
                } else if (v[1] == "films") {

                } else if (v[1] == "purchased") {

                } else if (v[1] == "notifications") {

                }
            } else if (v[0] == "PUT") {
                if (v[1] == "comments") {

                } else if (v[1] == "films") {

                }

            } else {
                throw (CommandNotFoundException());
            }
        }
        catch (exception ignore) {

        }
        if (v.size() == 0) {
            break;
        }
    }
}

vector<string> split(const string &s, char delim) {
    vector<string> v;
    stringstream ss(s + ' ');
    string item;
    while (getline(ss, item, delim)) {
        v.push_back(item);
    }
    return v;
}