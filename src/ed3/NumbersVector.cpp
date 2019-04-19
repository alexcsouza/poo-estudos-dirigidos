#ifndef NUMBERS_VECTOR
#define NUMBERS_VECTOR

#define TAMANHO 15

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int intArray[TAMANHO] = {1, 1, 1, 4, 1, 1, 4, 4, 25, 67, 67, 67, 67, 2, 2};
    vector<int> v(intArray, intArray + TAMANHO);
    
    for(int i = 0 ; i < v.size() ; i++) {
        int j = 1;
        while(v[i] == v[i+j]){
            j++;
        }
        if(j!=1){
            v[i] = j;
            i += j-1;
        }
        
    }

    for(int i = 0 ; i < v.size() ; i++) {
        cout << v[i] << " ";
    }
    
}

#endif