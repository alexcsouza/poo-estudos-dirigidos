#ifndef MAIN_CPP
#define MAIN_CPP

#define ARRAY_SIZE 5

#include <iostream>
#include "MinhaClasse.cpp"

using namespace std;

int main(int argc)
{
    
    MinhaClasse mc = MinhaClasse();
    MinhaClasse * arr = mc.buildArray(ARRAY_SIZE);

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << arr->getMinhaClasse()->getI() << endl;
        arr = arr->getMinhaClasse();
    }
    
    return 0;

}


#endif