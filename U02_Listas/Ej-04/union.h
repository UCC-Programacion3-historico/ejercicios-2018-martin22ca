#include "../Lista/Lista.h"
#include "../Lista/Nodo.h"

#ifndef UNION_H
#define UNION_H


template<class T>
void unir(Lista<T> &lisA, Lista<T> &lisB) {
    Lista<T> C;
    int tama = lisA.getTamanio(), tamb = lisB.getTamanio();

    for (int i = 0; i < tama; i++) {
        C.insertar(i, lisA.getDato(i));
    }

    for (int i = 0; i < tamb; i++) {
        C.insertar(i+tama, lisB.getDato(i));
    }
    C.print();


}


#endif //UNION_H
