#include <iostream>

using namespace std;

class User {
private:
    string email;
    string username;
    string password;
    int age;
public:
    User(string email, string username, string password, int age);

    string getEmail();

    string getUsername();

    string getPassword();

    int getAge();
};