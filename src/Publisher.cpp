#include "Publisher.h"

Publisher::Publisher(const std::string &email, const std::string &username, const std::string &password, int age) : User(email,
                                                                                                          username,
                                                                                                          password,
                                                                                                          age) {
	type = "Publisher";
}

void Publisher::addFollower(User *user) {
    followers.push_back(user);
}

const std::vector<User *> &Publisher::getFollowers() const {
    return followers;
}
