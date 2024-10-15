// C++ (intermedio) - Arreglos o listas
// ------------------------------------------------------------------------------
// Implementa el algoritmo de busqueda lineal (linear search).
// crea una función para encontrar un valor en una lista de enteros.
// Si el valor objetivo existe, devuelve su índice; de ​​lo contrario, devuelve -1.

#include <iostream>

using namespace std;

int find(int numbers[], int size, int target) {
    for(int i = 0; i < size; i++)
        if(numbers[i] == target)
            return i;
    
    return -1;
}

int main() {
    int lista[] = { 6, 2, 5, 4, 3, 7 };
    
    int target_5 = find(lista, size(lista), lista[2]);
    int target_8 = find(lista, size(lista), 8);
    
    
    cout << "con target 5, el index es: " << target_5 << endl;
    cout << "con un target que no existe en la lista, como 8, nos devuelve: " << target_8 << endl;
    
    return 0;
}
