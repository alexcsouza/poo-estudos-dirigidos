#ifndef SCOPY
#define SCOPY

#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream in("src/references/Scopy.cpp");
    ofstream out("src/references/Scopy2.cpp");

    string s;
    while(getline(in, s)){
        out << s << "\n";
    }
}

#endif
