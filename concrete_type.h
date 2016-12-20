//
// Created by RaczeQ on 17/12/2016.
//

#ifndef ZAD5_CONCRETE_TYPE_H
#define ZAD5_CONCRETE_TYPE_H


#include "any_type.h"
#include <iostream>

using namespace std;

template <class T>
class concrete_type : public any_type {
public:
    concrete_type(const T& value) : value_(value) {}
    virtual void print()
    {
        cout << value_ << '\n';
    }

    virtual uint64_t as_uint64() const { return this->data; }

    virtual bool operator > (concrete_type* a) {
        concrete_type* e = a;
        return value_ > e->value_;
    }

private:
    T value_;
};


#endif //ZAD5_CONCRETE_TYPE_H
