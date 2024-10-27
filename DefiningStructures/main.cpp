// C++ (intermedio) - Strutures and Enumerations
// -----------------------------------------------------------------------------------------------
// Definir una estructura para representar a los clientes.
// -----------------------------------------------------------------------------------------------
// ID (int)
// Name (string)
// Email (string)
// -----------------------------------------------------------------------------------------------
// Pídale al usuario estos valores, guárdelos en un objeto de cliente e imprima el resultado.

#include <iostream>

using namespace std;

struct Customer {
    int id;
    string name;
    string email;
};

int main() {
    Customer customer;
    
    cout << "ID: ";
    cin >> customer.id;
    
    cout << "Name: ";
    cin >> customer.name;
    
    cout << "Email: ";
    cin >> customer.email;
    
    cout << "ID: " << customer.id << "\t\t\t"
         << "Name: " << customer.name << "\t\t\t"
         << "Email: " << customer.email << endl;
    
    return 0;
}
