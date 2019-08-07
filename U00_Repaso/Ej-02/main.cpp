#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
    cout << "Ejercicio 00/02\n" << endl;
    Calculadora <int, float> Mica;
    cout<<"El resultador es:";
    cout<<Mica.division(10,3)<<endl;
    return 0;
}