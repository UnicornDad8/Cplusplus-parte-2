// C++ (intermedio) - Pointers
// ----------------------------------------------------------
// Recalculando la capacidad de un arreglo de forma dinámica.

#include <iostream>

using namespace std;

int main() {
    int capacidad = 5;
    int* numeros = new int[capacidad];
    int entradas = 0;
   
    while(true) {
        cout << "Numero: ";
        cin >> numeros[entradas];
        
        if(cin.fail()) break;
        entradas++;
        
        if(entradas == capacidad) {
            // crear un arreglo temporal de doble capacidad
            capacidad *= 2;
            int* temp = new int[capacidad];
            // copiar todos los elementos al nuevo arreglo
            for(int i = 0; i < entradas; i++)
                temp[i] = numeros[i];
            
            // que el puntero "numeros" apunte al nuevo arreglo
            delete[] numeros;
            numeros = temp;
        }
    }
    
    for(int i = 0; i < entradas; i++)
        cout << numeros[i] << endl;
    
    delete[] numeros;
    
    return 0;
}
