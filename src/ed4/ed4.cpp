#ifndef ED4
#define ED4

#include <iostream>

using namespace std;

int main(){
    int mat[4] = {0,10,20,30}, *p, x;
    p = mat;

    // a) 0 10
    x = *p++;
    cout << x << " " << *p << endl;
    
    // b) 0 1
    x = (*p)++;
    cout << x << " " << *p << endl;

    // c) 0 10
    x = *(p++);
    cout << x << " " << *p << endl;

    // d) expression must be a modifiable lvalue
     x = *mat++;
    cout << x << " " << mat << endl;

    // e) 0 0x7fffffffdbc0
    x = (*mat)++;
    cout << x << " " << mat << endl;

    // f) expression must be a modifiable lvalue
    x = *(mat++);
    cout << x << " " << mat << endl;

}

#endif