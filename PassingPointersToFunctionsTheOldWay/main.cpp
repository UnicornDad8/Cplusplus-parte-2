// C++ (intermedio) - Pointers
// ------------------------------------------------------------------------------
// Pasando punteros a funciones. (The old way)

#include <iostream>

using namespace std;

void incrementarPrecio(double* precio) {
    *precio *= 1.2;
}

int main() {
    double precio = 100;
    
    incrementarPrecio(&precio);
    
    cout << precio << endl;
   
    return 0;
}
