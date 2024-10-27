// C++ (intermedio) - Pointers
// -------------------------------------------------------------
// Relación entre arreglos y punteros.

#include <iostream>

using namespace std;

void imprimirNumeros(int numeros[]) {
    numeros[0] = 0;
}

int main() {
    int numeros[] = { 10, 20, 30 };
    imprimirNumeros(numeros);
    
    cout << numeros[0] << endl;
    
    return 0;
}
