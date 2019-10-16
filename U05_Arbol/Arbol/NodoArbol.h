#ifndef ARBOLNODO_H
#define ARBOLNODO_H

#include <tdh.h>

template<class T>
class NodoArbol {
private:
    T dato;
    NodoArbol *izq, *der;
public:
    NodoArbol (T d){
        dato = d;
        izq = nullptr;
        der = nullptr;
    }
    NodoArbol (){
        izq = nullptr;
        der = nullptr
    }

    T getDato() const {
        return dato;
    }

    NodoArbol *getIzq() const {
        return izq;
    }

    NodoArbol *getDer() const {
        return der;
    }

    void setDato(T dato) {
        NodoArbol::dato = dato;
    }

    void setIzq(NodoArbol *izq) {
        NodoArbol::izq = izq;
    }

    void setDer(NodoArbol *der) {
        NodoArbol::der = der;
    }
};

#endif //ARBOLNODO-H