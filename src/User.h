#include <iostream>
#include <vector>
#include "structs.h"

using namespace std;

class User {
private:
    static User loggedUser;
    static vector<User> users;
    string email;
    string username;
    string password;
    int age;
public:
    User(string email, string username, string password, int age);

    User();

    string getEmail();

    string getUsername();

    string getPassword();

    int getAge();

    static vector<User> getUsers();

    static bool isUserAvailable(const string& username);

    static User Login(const string& username, const string& password);
};
