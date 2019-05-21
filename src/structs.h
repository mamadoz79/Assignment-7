#include <bits/stdc++.h>

#ifndef STRUCTS_H
#define STRUCTS_H

struct notification{
    std::vector<std::string> massage;
};

struct comment{
    int commentId;
    std::vector<std::string> replies;
    std::string content;
};

#endif STRUCTS_H