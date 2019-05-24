#include <iostream>

class PermissionDeniedException : public std::exception {
public:
    PermissionDeniedException();

private:
    std::string msg = "Permission Denied";
};