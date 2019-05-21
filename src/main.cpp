#include <iostream>
#include <bits/stdc++.h>
#include "Errors.h"
#include "User.h"
#include "structs.h"

using namespace std;

vector<string> split(const string &s, char delim);

int main() {
    User loggedUser = User();
    string line;
    while (1) {
        try {
            getline(cin, line);
            vector<string> v = split(line, ' ');
            if (v[0] == "POST" || v[0] == "DELETE" || v[0] == "GET" || v[0] == "PUT") {
                if (v[0] == "POST") {
                    if (v[1] == "signup") {

                    } else if (v[1] == "login") {

                    } else if (v[1] == "replies") {

                    } else if (v[1] == "money") {
                        //moneyC
                        //moneyP
                    } else if (v[1] == "followers") {

                    } else if (v[1] == "rate") {

                    } else if (v[1] == "buy") {

                    }

                }
                if (v[0] == "DELETE") {
                    if (v[1] == "films") {
                        dynamic_cast<User*> (&loggedUser) != nullptr ? //hast : //nist


                    } else if (v[1] == "comments") {

                    }
                }
                if (v[0] == "GET") {
                    if (v[1] == "comments") {

                    } else if (v[1] == "published") {

                    } else if (v[1] == "films") {

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
        break;
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