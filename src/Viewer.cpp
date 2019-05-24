#include "Viewer.h"

using namespace std;

Viewer::Viewer(const string &email, const string &username, const string &password, int age) : User(email, username,
                                                                                                    password, age) {
	type = "Viewer";
}