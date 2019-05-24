#include <bits/stdc++.h>
#include "structs.h"

class User;

class Film {
private:
    std::string name;
    int filmID;
    User* director;
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

    int getFilmID() const;

    int getPrice() const;
};