// C++ (intermedio) - Strings
// ------------------------------------------------------
// Trabajando con caracteres.
// ------------------------------------------------------
// Dado el siguiente formato para números de cliente:
// - 2 caracteres alfabéticos
// - 4 dígitos
//
// Escriba una función para validar un número de cliente.
// ------------------------------------------------------
// bool isValid(string customerNumber)

#include <iostream>

using namespace std;

bool isValid(string customerNumber) {
    if(customerNumber.length() != 6) return false;
    
    for(int i = 0; i < 2; i++)
        if(!isalpha(customerNumber[i]))
            return false;
    
    for(int i = 2; i < customerNumber.length(); i++)
        if(!isdigit(customerNumber[i]))
            return false;
    
    return true;
}

int main() {
    string customerNumber = "CA1562";
    
    cout << boolalpha << isValid(customerNumber) << endl;
       
    return 0;
}
