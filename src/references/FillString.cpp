#ifndef FILL_STRING
#define FILL_STRING

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream in("src/references/FillString.cpp");
    string s, line;
    while(getline(in, line)){
        s += line + "\n";
    }

    cout << s;
    
}

#endif