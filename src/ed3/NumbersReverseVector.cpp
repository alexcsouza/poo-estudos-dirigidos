#ifndef NUMBERS_VECTOR_REVERSE
#define NUMBERS_VECTOR_REVERSE

#define TAMANHO 15

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    int intArray[TAMANHO] = {3, 1, 1, 4, 2, 1, 2, 4, 25, 4, 67, 67, 67, 2, 2};
    vector<int> v(intArray, intArray + TAMANHO);
    
    for (int i = 0; i < v.size(); i++)
    {
        
        int nextVal = v[i+1];
        int val = v[i];
        bool q = val != nextVal;
        
        int cont = 1;

        while(q && cont < val) {
             q = v[i+cont] == nextVal;
             cont++;
        }
        if(q){
            v[i] = nextVal;
            i += val-1; 
            if(v.size() <= i){
                v[i-1] = val;
                break;
            }
        }
    
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

#endif