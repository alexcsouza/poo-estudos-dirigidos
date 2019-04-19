#ifndef WHAT_IS_THIS
#define WHAT_IS_THIS
/**
 * O que o seguinte programa faz?
 * 
 * Resposta: O programa calcula de forma recursiva a soma dos elementos do array "a"
 * 
 * */
#include <iostream>

using namespace std;

int whatIsThis(int b[], int size){
    if(size == 1){
        return (b[0]);
    }else{
        return (b[size-1] + whatIsThis(b, size - 1));
    }
}

int main(){
    int result, a[10] = {1,2,3,4,5,6,7,8,9,10};
    result = whatIsThis(a, 10);
    cout << "Resulatado: " << result;
}

#endif