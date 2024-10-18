// C++ (intermedio) - Pointers
// -------------------------------------------------------------
// La aritmética de los punteros.

#include <iostream>

using namespace std;

int main() {
    int numeros[] = { 10, 20, 30 };
    int* ptr = numeros;
    
    // incrementa 4 bites
    ptr++;
    
    cout << *ptr << endl;
    
    return 0;
}
