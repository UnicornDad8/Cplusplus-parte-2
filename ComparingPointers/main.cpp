// C++ (intermedio) - Pointers
// -------------------------------------------------------------
// Dado este arreglo:
//
// int numeros[] = { 10, 20, 30 };
//
// Crea un puntero que apunte al último elemento de este arreglo.
// Utiliza un bucle while para iterar sobre este arreglo
// e imprime los números en orden inverso.

#include <iostream>

using namespace std;

int main() {
    int numeros[] = { 10, 20, 30 };
    int* ptr = &numeros[size(numeros) - 1];
    
    while(ptr >= numeros) {
        cout << *ptr << endl;
        ptr--;
    }
    
    return 0;
}
