#include <iostream>
#include "../Cola/Cola.h"
using namespace std;

int main() {
    cout << "Ejercicio 04/01\n" << endl;

    Cola<char>c1,c2;
    for (int i = 0; i < 5; i++) {
        c1.encolar('a');
        c2.encolar('a');
    }
    for (int i = 0; i < 5; i++) {
        if(c1.desencolar()!=c2.desencolar()){
            cout<<"No son iguales";
            return 0;
        }
    }
    cout<<"Son iguales"<<endl;
    return 1;

}