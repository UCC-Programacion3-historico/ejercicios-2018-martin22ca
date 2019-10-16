#ifndef COLA_H
#define COLA_H

#include "../../U02_Listas/Lista/Nodo.h"

/**
 * Clase que implementa una Cola generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class Cola {
private:
    Nodo<T> *Frente, *Fondo;
public:
    Cola();

    ~Cola();

    void encolar(T dato);

    T desencolar();

    bool esVacia();

    T peek();

};


/**
 * Constructor de la clase Cola
 * @tparam T
 */
template<class T>
Cola<T>::Cola() {
    Frente = nullptr;
    Fondo = nullptr;

}


/**
 * Destructor de la clase Cola, se encarga de liberar la memoria de todos los nodos
 * utilizados en la Cola
 * @tparam T
 */
template<class T>
Cola<T>::~Cola() {
    while (!esVacia())
        desencolar();
}


/**
 * Inserta un dato en la Cola
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void Cola<T>::encolar(T dato) {
    Nodo<T> *nuevo;

    nuevo = new Nodo<T>;
    nuevo->setDato(dato);
    nuevo->setSiguiente(nullptr);

    if (Fondo == nullptr)
        Frente = nuevo;
    else
        Fondo->setSiguiente(nuevo);
    Fondo = nuevo;
}


/**
 * Obtener el dato de la Cola
 * @tparam T
 * @return dato almacenado en el nodo
 */
template<class T>
T Cola<T>::desencolar() {
    T dato;
    Nodo<T> *aBorrar = Frente;

    if (Frente== nullptr)
        throw 404;
    dato = Frente->getDato();
    Frente=Frente->getSiguiente();
    if (Frente== nullptr)
        Fondo = nullptr;
    delete  aBorrar;
    return dato;
}

/**
 * Responde si la Cola se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool Cola<T>::esVacia() {
    return Frente== nullptr;
}

template<class T>
T Cola<T>::peek() {
    if (Frente == nullptr)
        throw 404;
    else
        return Frente->getDato();

}

#endif //LISTA_H