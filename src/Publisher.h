#ifndef ASSIGNMENT7_PUBLISHER_H
#define ASSIGNMENT7_PUBLISHER_H

#include <bits/stdc++.h>
#include "structs.h"
#include "User.h"
#include "Film.h"

class Publisher : public User{
private:
    std::vector<User*> followers;
    std::vector<Film*> films;
public:
    Publisher(const std::string &email, const std::string &username, const std::string &password, int age);

    void addFollower(User* user);

    const std::vector<User *> &getFollowers() const;
};

#endif //ASSIGNMENT7_PUBLISHER_H