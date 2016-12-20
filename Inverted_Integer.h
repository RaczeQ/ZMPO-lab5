//
// Created by RaczeQ on 2016-12-20.
//

#ifndef ZAD5_INVERTED_INTEGER_H
#define ZAD5_INVERTED_INTEGER_H

#include <string>
#include <iostream>

using namespace std;

class Inverted_Integer {
private:
    int x;
public:
    Inverted_Integer(int a) { x = a; }

    bool operator > (Inverted_Integer i);

    bool operator < (Inverted_Integer i);

    friend ostream& operator<<(ostream& os, const Inverted_Integer& obj);
};


#endif //ZAD5_INVERTED_INTEGER_H
