#include <iostream>

using namespace std;

class PermissionDeniedException : public exception {
public:
    PermissionDeniedException();

private:
    string msg = "Permission Denied";
};