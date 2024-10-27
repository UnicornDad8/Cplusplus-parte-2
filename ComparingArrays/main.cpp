// C++ (intermedio) - Arreglos o listas
// ----------------------------------------------------------------------------
// la forma correcta de comparar dos arreglos

#include <iostream>

using namespace std;

int main() {
    // Creando e inicializando arreglos, cada uno con los mismos valores (las listas son iguales)
    int primer_lista[] = { 10, 20, 30 };
    int segunda_lista[] = { 10, 20, 30 };
    
    bool sonIguales = true;
    for(int i = 0; i < size(primer_lista); i++) {
        if(primer_lista[i] != segunda_lista[i]) {
            sonIguales = false;
            break;
        }
    }
    
    cout << "la primer y segunda lista son iguales: " << boolalpha << sonIguales << endl;
        
    return 0;
}
