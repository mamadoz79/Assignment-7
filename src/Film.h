#include <bits/stdc++.h>
#include "structs.h"

using namespace std;

class Film {
private:
    string name;
    string filmID;
    string director;
    float rate;
    int price;
    int length;
    int productionYear;
    vector<int> scores;
    vector<comment> comments;
public:
    Film(const string &name, const string &filmId, const string &director, int price, int lenght, int productionYear);
};