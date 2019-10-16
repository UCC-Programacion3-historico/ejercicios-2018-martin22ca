#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"
using namespace std;

int main() {
    cout << "Ejercicio 01/04\n" <<endl;
    Lista<int> l1;
    srand(getpid());
    for (int i = 0; i < 10; i++)
        l1.insertarPrimero(rand() % 100);

    Lista<int> l2;
    for (int i = 0; i < 10; i++)
        l2.insertarPrimero(rand() % 100);

    cout<<"Lista 1"<<endl;
    l1.print();
    cout<<"Lista 2"<<endl;
    l2.print();
    cout<<endl;

    unir(l1,l2);

    return 0;
}