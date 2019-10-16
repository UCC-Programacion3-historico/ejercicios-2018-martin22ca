#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"
#include "random"

using namespace std;

int main() {
    cout << "Ejercicio 02/01\n" << endl;
    Lista<int> l;
    srand(getpid());
    for (int i=0 ; i<20; i++ )
        l.insertarPrimero(rand() %100);
    l.print();
    fnInvierte(&l);
    l.print();
    return 0;
}