//
// Created by mamad on 5/22/19.
//

#ifndef ASSIGNMENT7_VIEWER_H
#define ASSIGNMENT7_VIEWER_H


#include "User.h"

class Viewer : public User {
public:
    Viewer(const string &email, const string &username, const string &password, int age);
};


#endif //ASSIGNMENT7_VIEWER_H
