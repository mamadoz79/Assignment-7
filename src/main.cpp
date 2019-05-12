#include <iostream>
#include <bits/stdc++.h>
#include "Errors.h"
#include "Publisher.h"

using namespace std;

vector<string> split(const string &s, char delim);

int main() {
    try {
        throw (BadRequestException());
    } catch (exception &ignore){}
}

vector<string> split(const string &s, char delim) {
    vector<string> v;
    stringstream ss(s+' ');
    string item;
    while(getline(ss, item, delim))
    {
        v.push_back(item);
    }
    return v;
}