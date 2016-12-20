//
// Created by RaczeQ on 2016-12-20.
//

#include "Inverted_Integer.h"

bool Inverted_Integer::operator > (Inverted_Integer i) {
    return x <= i.x;
}

bool Inverted_Integer::operator < (Inverted_Integer i) {
    return x >= i.x;
}

ostream &operator<<(ostream &os, const Inverted_Integer &obj) {
    os << obj.x;
    return os;
}
