#ifndef POINTERS_MANIPULATION_1
#define POINTERS_MANIPULATION_1

#include <iostream>

using namespace std;

int main(){
    int a, b, *ptr1, *ptr2;
    a = 10;
    b = 11;
    ptr1 = &a;
    ptr2 = &b;
    *ptr2 = 20;
    b = 21;
    *(&a) = 30;

    cout << "a = " << a << "b = " << b;
}

#endif