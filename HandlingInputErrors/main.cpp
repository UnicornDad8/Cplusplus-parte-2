// C++ (intermedio) - Streams and Files
// -----------------------------------------------------------------------------------------------
// Ahora hacemos una validacion para que cin solo acepte numeros enteros.
// manejo de errores en inputs invalidos.

#include <iostream>

using namespace std;

int getNumber(const string& prompt) {
    int number;
    
    while(true) {
        cout << prompt;
        cin >> number;
        
        if(cin.fail()) {
            cout << "Escribe un numero valido" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
    }
    
    return number;
}

int main() {
    int primero = getNumber("Primero: ");
    int segundo = getNumber("Segundo: ");
    
    cout << "Los numeros que escribiste en la consola son: " << primero << " y " << segundo << endl;
    
    return 0;
}
