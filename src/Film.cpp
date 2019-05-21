//
// Created by mamad on 5/21/19.
//

#include "Film.h"

Film::Film(const string &name, const string &filmId, const string &director, int price, int length, int productionYear)
        : name(name), filmID(filmId), director(director), price(price), length(length),
          productionYear(productionYear) {}
