// C++ (intermedio) - Strutures and Enumerations
// -----------------------------------------------------------------------------------------------
// Cree una estructura para representar una dirección
// - Calle
// - Ciudad
// - Código postal
//
// Anide la estructura de dirección dentro de Cliente.
// Cree e inicialice un objeto de cliente.
// Imprima en consola la calle del cliente con la direccion anidada.

#include <iostream>

using namespace std;

struct Direccion {
    string calle;
    string ciudad;
    int codigoPostal;
};

struct Cliente {
    int id = 0;
    string nombre;
    string email;
    Direccion direccion;
};

int main() {
    Cliente cliente = {
        1,
        "Ceci",
        "unicorndad8@gmail.com",
        {"Juan de Salazar 1897", "Asuncion", 1490}
    };
   
    cout << cliente.direccion.calle << endl;
    
    return 0;
}
