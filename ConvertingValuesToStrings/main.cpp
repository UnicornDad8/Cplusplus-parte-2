// C++ (intermedio) - Streams and Files
// -----------------------------------------------------------------------------------------------
// Convirtiendo valores en cadenas de texto.
//
// Ejercicio: Haz una funcion que covierta el numero con una precision de comas dada en un string.

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

// overloading the to_string method
string to_string(double number, int precision) {
    stringstream stream;
    
    stream << fixed << setprecision(precision) << number << endl;
    
    return stream.str();
}

int main() {
    double number = 12.34;
    
    cout << to_string(number, 2) << endl;
    
    return 0;
}
