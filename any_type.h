//
// Created by RaczeQ on 17/12/2016.
//

#ifndef ZAD5_ANY_TYPE_H
#define ZAD5_ANY_TYPE_H

class any_type {
public:
    virtual ~any_type() {}
    virtual void print() = 0;
    bool operator < (const any_type& a) const { return this->data() < a.data(); }

private:
    virtual double data() const = 0;
};


#endif //ZAD5_ANY_TYPE_H
