// C++ (intermedio) - Strutures and Enumerations
// -----------------------------------------------------------------------------------------------
// Definiendo enumeraciones (enum).
// enum es un tipo de (struct) estructura.

#include <iostream>

using namespace std;

enum Action {
    List = 1,
    Add,
    Update
};

int main() {
    cout << "1: List Invoices" << endl <<
            "2: Add Invoice" << endl <<
            "3: Update Invoice" << endl << "\n" <<
            "Select: ";
    
    int input;
    cin >> input;
    
    if(input == Action::List) {
        cout << "List Invoices" << endl;
    } else if(input == Action::Add) {
        cout << "Add Invoice" << endl;
    } else if(input == Action::Update) {
        cout << "Update Invoice" << endl;
    }
    
    return 0;
}
