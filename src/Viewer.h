#ifndef ASSIGNMENT7_VIEWER_H
#define ASSIGNMENT7_VIEWER_H


#include "User.h"

class Viewer : public User {
public:
    Viewer(const std::string &email, const std::string &username, const std::string &password, int age);
};


#endif //ASSIGNMENT7_VIEWER_H