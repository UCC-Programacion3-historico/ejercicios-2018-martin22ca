#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

int main() {
    cout << "Ejercicio 03/04\n" << endl;
    char arr[100];
    Pila<char> p;
    cout << "introduzca una formula Matematica";
    cin >> arr;
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == '(' || arr[i] == '[' || arr[i] == '{')
            p.push(arr[i]);
        else if (arr[i] == ')' || arr[i] == ']' || arr[i] == '}')
            p.pop();
    }
    if (p.esVacia())
        cout << "Los parentesis estan balanceados";
    else
        cout << "Los parentesis no estan balanceados";



        return 0;
}