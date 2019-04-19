#ifndef HELLOSTRINGS
#define HELLOSTRINS

#include <string>
#include <iostream>

using namespace std;

int main(){
    string s1, s2;
    string s3 = "Hello World.";
    string s4("I am");
    s2 = "years old";
    s1 = s3 + " " + s4;
    s1 += " 40 ";

    cout << s1 + s2 + "!" << endl;
}

#endif