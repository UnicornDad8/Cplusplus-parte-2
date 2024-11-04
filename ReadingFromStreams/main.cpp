// C++ (intermedio) - Streams and Files
// -----------------------------------------------------------------------------------------------
// Explcando como funciona el buffer del cin.

#include <iostream>

using namespace std;

int main() {
    // Intenta ingresar dos numeros en el primer cin a ver que pasa
    cout << "Primero: ";
    int primero;
    cin >> primero;
    // prueba el ejercicio sin esta linea de abajo
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << "Segundo: ";
    int segundo;
    cin >> segundo;
    
    cout << "Ingresaste " << primero << " y " << segundo << endl;
    
    return 0;
}
