#include <iostream>
#include "set2.h"
#include "MyType.h"

int main() {
    set2<double> zbior = set2<double>();
    int n = 15;
    int k = 26;
    zbior + n;
    set2<double> zbior2 = set2<double>();
    zbior2 + k;
    zbior.printSet();
    zbior2.printSet();

    zbior2 + zbior;
    zbior2.printSet();

    set2<MyType> set = set2<MyType>();
    MyType a = MyType(154);
    MyType b = MyType(2);
    MyType c = MyType(99);
    set + a + b + c;
    set.printSet();
    return 0;
}