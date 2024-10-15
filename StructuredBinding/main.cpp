// C++ (intermedio) - Arreglos o listas
// --------------------------------------------------------------
// Structured Binding o Unpacking arrays (desempacando arreglos).

#include <iostream>

using namespace std;

int main() {
    int values[3] = { 10, 20, 30 };
    // Esta tecnica tiene diferentes nombres de acuerdo al lenguaje utilizado
    // C++: Structured Binding
    // JavaScript: Destructuring
    // Python: Unpacking
    auto [x, y, z] = values;
    
    /*
    int x = values[0];
    int y = values[1];
    int z = values[2];
    */
    
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
     
    return 0;
}
