#ifndef FACTORIAL
#define FACTORIAL

#include <iostream>

using namespace std;

unsigned long factorial (int n ){
    return n == 0 ? 1 : (n * factorial( n-1 ));
}

int main(){
    for(int i = 0 ; i <= 33 ; i++){
        cout << "\nFactorial: " << i << " = " << factorial(i);
    }
}

#endif