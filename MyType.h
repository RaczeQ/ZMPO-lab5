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

    int getSum() {
        int num = this->x;
        int sum = 0;
        while (num > 0) {
            sum = sum + num % 10;
            num = num / 10;
        }
        return sum;
    }

    int getValue() {
        return x;
    }

    bool operator > (MyType m) {
        return this->getSum() > m.getSum();
    }

    friend ostream& operator<<(ostream& os, const MyType& obj) {
        os << obj.x;
        return os;
    }

};


#endif //ZAD5_MYTYPE_H
