#include <iostream>
#include "../Lista/Lista.h"

int main() {
    std::cout << "Ejercicio 01/03\n" << std::endl;
    int j = 0, res;
    Lista<int> l;
    srand(getpid());
    for (int i = 0; i < 10; i++)
        l.insertarPrimero(rand() % 100);
    while (j < 10){
        l.print();
        cout << "El dato es: " << l.getDato(j) << endl << "Lo desea elimiar?(Ingrese 1 para eliminar)" << endl;
        cin >> res;
        if (res == 1)
            l.remover(j);
        else
            j++;

    }
    return 0;
}