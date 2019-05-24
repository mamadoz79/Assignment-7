#include <bits/srdc++.h>
#include "structs.h"


#ifndef ASSIGNMENT7_PUBLISHER_H
#define ASSIGNMENT7_PUBLISHER_H

#include "User.h"

class Film;

class Publisher : public User{
private:
    std::vector<User*> followers;
    std::vector<Film*> films;
public:
    Publisher(const std::string &email, const std::string &username, const std::string &password, int age);

    void addFollower(User* user);
};

#endif //ASSIGNMENT7_PUBLISHER_H