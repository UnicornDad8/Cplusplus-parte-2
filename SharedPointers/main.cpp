// C++ (intermedio) - Pointers
// ---------------------------------------------------------------
// Punteros compartidos.
// A diferencia de los "Unique Pointers" con los "Shared Pointers"
// podemos tener dos punteros compartidos apuntando a la misma
// direccion, bajo la misma referencia.

#include <iostream>
#include <memory>

using namespace std;

int main() {
    shared_ptr<int> x = make_shared<int>();
    *x = 10;
    
    shared_ptr<int> y(x);
    cout << *y << endl;
    
    if(x == y)
        cout << "Equal" << endl;
    
    return 0;
}
