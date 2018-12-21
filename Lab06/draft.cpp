#include <iostream>
#include "draft.h"
using namespace std;

// #include "catch.hpp"

// Exercise 1
using namespace std;

char* strdup(const char* c, int n)
{
    char* p = new char[n+1];

    for (int i = 0; i < n; ++i)
        *p++ = *c++;

    if (!c) {
        *p = *c;                // grab terminator
        ++n;
    }

    return p -= n;
}