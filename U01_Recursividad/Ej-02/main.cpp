#include <iostream>
#include "sumatoria.h"

using namespace std;

int main() {
    int *arr1 = new int[10];
    cout << "ingrese arreglo de numeros " << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "poscicion " << i << endl;
        cin >> arr1[i];
    }
    cout << sumatoria(arr1, 10) << endl;

}