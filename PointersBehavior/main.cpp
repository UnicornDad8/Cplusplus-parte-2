// C++ (intermedio) - Pointers
// ------------------------------------------------------------------------------
// Entendiendo los punteros (pointers).
// sin ejecutar el programa intenta predecir los valores de x y de y al final
// de estas lineas de codigo.
// Output:  20, 60

#include <iostream>

using namespace std;


int main() {
    int x = 10;
    int y = 20;
    
    int* ptr = &x;
    *ptr *= 2;
    ptr = &y;
    *ptr *= 3;
    
    cout << x << ", " << y << endl;
    
   
    return 0;
}
