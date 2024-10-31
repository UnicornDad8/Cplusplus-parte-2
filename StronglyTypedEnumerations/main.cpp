// C++ (intermedio) - Strutures and Enumerations
// -----------------------------------------------------------------------------------------------
// Enumeraciones de tipado fuerte (enum) (class).
// Strongly typed enum.
// Los "strongly typed enums" son usados para evitar colision entre dos enums iguales.
//
// La unica diferencia entre un enum regular y un enum de fuerte tipado es que no se convierten
// en enteros implicitamente asique hay que hacer un cast a int antes de usarlos.

#include <iostream>

using namespace std;

enum class Action {
    list = 1,
    add,
    update
};

enum class Operation {
    list = 1,
    add,
    update
};

int main() {
    cout << "1: List Invoices" << endl <<
            "2: Add Invoice" << endl <<
            "3: Update Invoice" << endl << "\n" <<
            "Select: ";
    
    int input;
    cin >> input;
    
    if(input == static_cast<int>(Action::list)) {
        cout << "List Invoices" << endl;
    } else if(input == static_cast<int>(Action::add)) {
        cout << "Add Invoice" << endl;
    } else if(input == static_cast<int>(Action::update)) {
        cout << "Update Invoice" << endl;
    }
    
    return 0;
}
