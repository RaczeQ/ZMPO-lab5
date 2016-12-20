//
// Created by RaczeQ on 17/12/2016.
//

#ifndef ZAD5_SET2_H
#define ZAD5_SET2_H

#include "concrete_type.h"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


template <class T>
class set2 {
private:
    vector<T> v;
public:
    set2() {}

    void sort() {
        for (int i=0; i<v.size(); i++){
            for (int j=v.size()-1; j>i; j--){
                if (v[j-1] > v[j]){
                    T temp = v[j];
                    v[j] = v[j-1];
                    v[j-1] = temp;
                }
            }
        }
    };

    void printSet() {
        cout << "Set contains: \n";
        for (int i=0; i<v.size(); i++){
            printElement(v[i]);
        }
        cout << endl;
    };

    void printElement(T e) {
        cout << e << endl;
    };

    set2<T>& operator+(T e) {
        v.push_back(e);
        sort();
        return *this;
    };

    set2<T>& operator+(set2 s) {
        unsigned int i;
        for (i = 0; i<s.v.size(); i++) {
            v.push_back(s.v.at(i));
        }
        sort();
        return *this;
    };

    bool operator > (set2 s) {
        return v.size() > s.v.size();
    };
};


#endif //ZAD5_SET2_H
