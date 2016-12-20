//
// Created by RaczeQ on 18/12/2016.
//

#ifndef ZAD5_MYTYPE_H
#define ZAD5_MYTYPE_H

#include <string>
#include <iostream>

using namespace std;

class MyType {
private:
    int x;
public:
    MyType(int a) { x = a; }

    int getSum();

    int getValue();

    bool operator > (MyType m);

    friend ostream& operator<<(ostream& os, const MyType& obj);

};


#endif //ZAD5_MYTYPE_H
