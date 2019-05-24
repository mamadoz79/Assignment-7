#include <bits/stdc++.h>
#include "structs.h"

class Film {
private:
    std::string name;
    int filmID;
    std::string director;
    float rate = 0;
    int price;
    int length;
    int productionYear;
    std::vector<int> scores;
    std::vector<comment> comments;
public:
    Film(const std::string &name, const std::string &director, int price, int lenght, int productionYear);

    void calculateRate();

    void setFilmId(int filmId);

    void addComment(std::string msg);

    void printComments();

    void printState();
};