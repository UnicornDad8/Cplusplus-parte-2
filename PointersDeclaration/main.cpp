// C++ (intermedio) - Pointers
// ------------------------------------------------------------------------------
// Entendiendo los punteros (pointers).

#include <iostream>

using namespace std;


int main() {
    int number = 10;
    
    int* ptr = &number;
    
    cout << *ptr << endl;
    
    *ptr *= 3;
    
    cout << number << endl;
    cout << *ptr << endl;
    
    return 0;
}
