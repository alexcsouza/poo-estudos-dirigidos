#ifndef POINTERS_MANIPULATION_2
#define POINTERS_MANIPULATION_2

#include <iostream>

using namespace std;

int main(){
    int i = 5;
    int *pti;
    pti = &i;
    cout << "Ponteiro: "<< pti << " Endereço de i: " << &i << " Valor de i: " << i << endl;
    *pti = 7;
    cout << "Ponteiro: "<< pti << " Endereço de i: " << &i << " Valor de i: " << i << endl;
}

#endif