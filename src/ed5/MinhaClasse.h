#ifndef MINHA_CLASSE_H
#define MINHA_CLASSE_H



class MinhaClasse{
    private: 
        int i;
        MinhaClasse * minhaClasse;

    public:

        MinhaClasse();

        MinhaClasse * buildArray(int i);

        int getI();

        void setI(int i);

        MinhaClasse * getMinhaClasse();

        void setMinhaClasse(MinhaClasse * mc);
};

#endif