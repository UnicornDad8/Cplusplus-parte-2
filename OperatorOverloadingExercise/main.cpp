// C++ (intermedio) - Strutures and Enumerations
// -----------------------------------------------------------------------------------------------
// Sobreacarga de operadores.
// -----------------------------------------------------------------------------------------------
// Defina una estructura para representar un punto.
// - x
// - y
//
// Sobrecargue los operadores de igualdad (==) e inserción de flujo (<<) para los puntos.
// imprima el punto 1 y el punto dos seguido de un mensaje de igualdad si son iguales o de
// diferencia si son diferentes.

#include <iostream>

using namespace std;


struct Punto {
    int x = 0;
    int y = 0;
};

bool operator==(const Punto& primero, const Punto& segundo) {
    return (primero.x == segundo.x && primero.y == segundo.y);
}

ostream& operator<<(ostream& stream, const Punto& punto) {
    return stream << "(" << punto.x << ", " << punto.y << ")";
}

int main() {
    Punto punto1 = { 5, 7 };
    Punto punto2 = { 5, 7 };
    
    cout << punto1 << "\t\t" << punto2 << endl;
    
    cout << "\n\n";
    
    if(punto1 == punto2)
        cout << "Iguales" << endl;
    else
        cout << "Diferentes" << endl;
    
    return 0;
}
