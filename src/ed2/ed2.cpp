#include <iostream>
#include <vector>

using namespace std;



class float_comparator {
public:
    bool operator()(const float n1, const float n2) const {
        return n1 < n2 ;
    }
};

void ordemCrescente(float a, float b, float c);
int main()
{
    
    int i;
    float a, b, c;

    cout << "i: ";
    cin >> i;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;
    cout << endl;

    if(i == 1){
        ordemCrescente(a,b,c);
    }

}

void ordemCrescente(float a, float b, float c){
    
    if(a<=b && a<=c){
        cout << a << endl;
        if(b<=c){
            cout << b << endl;
            cout << c << endl;
        }else{
            cout << c << endl;
            cout << b << endl;
        }
    }

    if(b<=a && b<=c){
        cout << b << endl;
        if(a<=c){
            cout << a << endl;
            cout << c << endl;
        }else{
            cout << c << endl;
            cout << a << endl;
        }
    }

    if(c<=a && c<=b){
        cout << c << endl;
        if(a<=b){
            cout << a << endl;
            cout << b << endl;
        }else{
            cout << b << endl;
            cout << a << endl;
        }
    }

}

void ordemDecrescente(float a, float b, float c){
    
    if(a>=b && a>=c){
        cout << a << endl;
        if(b>=c){
            cout << b << endl;
            cout << c << endl;
        }else{
            cout << c << endl;
            cout << b << endl;
        }
    }

    if(b>=a && b>=c){
        cout << b << endl;
        if(a>=c){
            cout << a << endl;
            cout << c << endl;
        }else{
            cout << c << endl;
            cout << a << endl;
        }
    }

    if(c>=a && c>=b){
        cout << c << endl;
        if(a>=b){
            cout << a << endl;
            cout << b << endl;
        }else{
            cout << b << endl;
            cout << a << endl;
        }
    }
    

}

void semOrdenacao(float a, float b, float c){
    
    if(a>=b && a>=c){
        cout << b << endl;
        cout << a << endl;
        cout << c << endl;
    }

    if(b>=a && b>=c){
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }

    if(c>=a && c>=b){
        cout << b << endl;
        cout << c << endl;
        cout << a << endl;
    }
}