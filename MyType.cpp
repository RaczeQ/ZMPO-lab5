//
// Created by RaczeQ on 18/12/2016.
//

#include "MyType.h"

int MyType::getSum() {
    int num = this->x;
    int sum = 0;
    while (num > 0) {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

int MyType::getValue() {
    return x;
}

bool MyType::operator>(MyType m) {
    return this->getSum() > m.getSum();
}

ostream &operator<<(ostream &os, const MyType &obj) {
    os << obj.x;
    return os;
}
