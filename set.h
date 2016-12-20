//
// Created by RaczeQ on 17/12/2016.
//


#ifndef ZAD5_SET_H
#define ZAD5_SET_H

#include "concrete_type.h"
#include <string>
#include <iostream>
#include <vector>
#include <bits/unique_ptr.h>

using namespace std;

class set {
private:
    vector<unique_ptr<any_type>> v;
public:
    set() {}

    //void sort();

    //void printSet();
    //void printObject(concrete_type<T> e);

    //set& operator+(concrete_type<T> e);
    set& operator+(set s);

};


#endif //ZAD5_SET_H

