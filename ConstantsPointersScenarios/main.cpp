// C++ (intermedio) - Pointers
// ------------------------------------------------------------------------------
// Punteros constantes (ver los 3 casos)

#include <iostream>

using namespace std;


int main() {
    // La variable es constante pero el puntero no es constante
    const int caso1 = 10;
    const int a = 20;
    
    const int* ptr1 = &caso1;
    cout << *ptr1 << endl;
    
    ptr1 = &a;
    cout << *ptr1 << endl;
    cout << "---------------------------------------------------------" << endl;
    // -------------------------------------------------------------------------
    // La variable no es constante pero el puntero si es constante
    int caso2 = 10;
    int b = 20;
    
    int* const ptr2 = &caso2;
    cout << *ptr2 << endl;
    // si intentamos reasignar un puntero constante nos da error
    // para ver el error descomenta la linea de abajo con el ptr2
    // ptr2 = &b;
    cout << "---------------------------------------------------------" << endl;
    // -------------------------------------------------------------------------
    // Ambos la variable y el puntero son constantes
    const int caso3 = 10;
    const int c = 20;
    
    const int* const ptr3 = &caso3;
    
    // no se puede reasignar, da error
    // descomentar linea de abajo con ptr3
    // ptr3 = &c;
    
    cout << *ptr3 << endl;
   
    return 0;
}
