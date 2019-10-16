//
// Created by Martin on 10/13/2019.
//
#include <iostream>
#include "Lista.h"

using namespace std;

int main() {
    Lista<int> l;

    for (int i = 0; i < 20; ++i) {
        l.insertarPrimero(i);

    }
    l.print();
    l.insertar(20,3);
    l.print();
    l.moverPri(5);
    l.print();


    return 0;
}