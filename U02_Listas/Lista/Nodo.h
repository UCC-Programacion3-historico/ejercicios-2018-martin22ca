//
// Created by Martin on 10/12/2019.
//
#ifndef PROGRAMACION3_NODO_H
#define PROGRAMACION3_NODO_H

template<class T>
class Nodo {
private:
    T dato;
    Nodo<T> *siguiente;
public:
    T getDato() {
        return dato;
    }

    Nodo<T> *getSiguiente() const {
        return siguiente;
    }

    void setDato(T data) {
        dato = data;
    }

    void setSiguiente(Nodo<T> *next) {
        this->siguiente = next;
    }
};

#endif //PROGRAMACION3_NODO_H
