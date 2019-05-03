#ifndef MINHA_CLASSE_CPP
#define MINHA_CLASSE_CPP

#include <iostream>
#include "MinhaClasse.h"

MinhaClasse::MinhaClasse(){
    std::cout << "Criou a instância"<< std::endl;
};

MinhaClasse * MinhaClasse::buildArray(int i){
    //MinhaClasse mc[i+1];
    MinhaClasse current = MinhaClasse();
    for(int j = 0 ; j < i ; j++){
        MinhaClasse next = MinhaClasse();
        
        current.setI(j);
        //if(j>0){
        current.setMinhaClasse(&next);
        current = *current.getMinhaClasse();
        //}
    }

    return this;
}

int MinhaClasse::getI(){
    return i;
}

void MinhaClasse::setI(int ni){
    i = ni;
}

MinhaClasse * MinhaClasse::getMinhaClasse(){
    return minhaClasse;
}

void MinhaClasse::setMinhaClasse(MinhaClasse * mc){
    minhaClasse = mc;
}

#endif