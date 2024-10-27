// C++ (intermedio) - Arreglos o listas
// ----------------------------------------------------------------------------
// Empezamos la segunda parte del curso

#include <iostream>

using namespace std;

int main() {
    // Creando e inicializando arreglos
    int first_list[] = { 10, 20, 30 };
    int second_list[size(first_list)]; // size, sirve para ver cuantos elementos hay en un arreglo
    
    for(int i = 0; i < size(first_list); i++) {
        // copiando elementos del primer arreglo en el segundo arreglo
        second_list[i] = first_list[i];
    }
    
    for(int number: second_list) {
        cout << number << endl;
    }
        
    return 0;
}
