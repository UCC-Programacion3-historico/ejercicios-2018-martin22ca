#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

int main() {
    cout << "Ejercicio 03/02\n" << endl;
    Pila<int> p1, p2;

    for (int i = 0; i < 10; i++) {
        p1.push(i+3);
        p2.push(i+3);
    }
    for (int i = 0; i < 10; i++) {
        if (p1.pop() != p2.pop()) {
            cout<<"No son Iguales";
            return 0;
        }
    }
    cout<<"Son iguales";
    return 0;

}