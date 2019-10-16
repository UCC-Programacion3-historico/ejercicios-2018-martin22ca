#include <iostream>
#include "../Pila/Pila.h"
using namespace std;

int main() {
    cout << "Ejercicio 03/01\n" <<endl;
    char arr[100];
    Pila<char>p;
    cout<<"Introduzca Una Palabra"<< endl;
    cin>>arr;

    for(int i;arr[i]!='\0';i++)
        p.push(arr[i]);

    while (!p.esVacia())
        cout<<p.pop();
    return 0;
}