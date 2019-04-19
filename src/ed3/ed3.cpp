#ifndef ED3
#define ED3

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ifstream in("src/ed3/ed3.cpp");
    
    string s;
    int count;
    while(getline(in, s)){
        for(int i = 0 ; i < sizeof(s) ; i++){
            if(s[i] == ' '){
                count++;
            }
        }
    }
    cout << "O número de espaços é: " << count;
}

#endif
