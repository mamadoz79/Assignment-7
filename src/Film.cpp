#include "Film.h"
#include "User.h"

using namespace std;

Film::Film(const string &name, const string &director, int price, int length, int productionYear)
        : name(name), director(director), price(price), length(length),
          productionYear(productionYear) {}

void Film::calculateRate() {
    int size = scores.size();
    int score = 0;
    for (auto a : this->scores) {
        score += a;
    }
    rate = score * 1.0 / size * 1.0;
}

void Film::setFilmId(int filmId) {
    filmID = filmId;
}

void Film::printState() {
    cout << "Details of Film " <<  name << endl;
}

void Film::addComment(std::string msg) {
    comment comment;
    comment.content = msg;
    comment.commentId = comments.size() + 1;
    comments.push_back(comment);
}

void Film::printComments() {
    for (const auto &a : comments) {
        cout << a.commentId << ". " + a.content << endl;
        int i = 0;
        for (const auto &b : a.replies) {
            cout << a.commentId << "." << ++i << "." << b << endl;
        }
    }
}

int Film::getFilmID() const {
    return filmID;
}

int Film::getPrice() const {
    return price;
}


