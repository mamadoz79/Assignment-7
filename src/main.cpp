#include <iostream>
#include <bits/stdc++.h>
#include "Errors.h"
#include "User.h"
#include "Publisher.h"
#include "Viewer.h"
#include "Database.h"

class Publisher;

using namespace std;

vector<string> split(const string &s, char delim);

int main() {
    Database database = Database();
    User loggedUser = User();
    vector<string> v;
    string line;
    while (1) {
        try {
            getline(cin, line);
            v = split(line, ' ');
            if (v[0] == "POST" || v[0] == "DELETE" || v[0] == "GET" || v[0] == "PUT") {
                if (v[0] == "POST") {
                    if (v[1] == "signup" && (v.size() == 11 || v.size() == 13) && !database.isUserAvailable(v[4])) {
                        User user;
                        if ((v.size() == 13 && v[12] == "false") || v.size() == 11) {
                            user = Viewer(v[8], v[4], v[6], stoi(v[10]));
                        } else {
                            user = Publisher(v[8], v[4], v[6], stoi(v[10]));
                        }
                        database.addUser(user);
                        loggedUser = user;
                        cout << "ok" << endl;

                    } else if (v[1] == "login") {

                    } else if (v[1] == "replies") {

                    } else if (v[1] == "money") {
                        //moneyC
                        //moneyP
                    } else if (v[1] == "followers") {

                    } else if (v[1] == "rate") {

                    } else if (v[1] == "buy") {

                    } else {
                        throw (BadRequestException());
                    }

                }
                if (v[0] == "DELETE") {
                    if (v[1] == "films") {
                        //dynamic_cast<User*> (&loggedUser) != nullptr ? //hast : //nist;


                    } else if (v[1] == "comments") {

                    }
                }
                if (v[0] == "GET") {
                    if (v[1] == "comments") {

                    } else if (v[1] == "published") {


                    } else if (v[1] == "films") {

                        }
                    } else if (v[1] == "purchased") {

                    } else if (v[1] == "notifications") {

                    }
                }
                if (v[0] == "PUT") {
                    if (v[1] == "comments") {

                    } else if (v[1] == "films") {

                    }

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