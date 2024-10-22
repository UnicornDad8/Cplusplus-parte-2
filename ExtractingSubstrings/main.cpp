// C++ (intermedio) - Strings
// ---------------------------------------------------------------
// Extrayendo substrings de strings.
// usando lo aprendido en lecciones anteriores extrae de nombre
// completo tus nombres y el primer apellido en dos variables.

#include <iostream>

using namespace std;

int main() {
    string nombre_completo = "Maria Cecilia Benitez";
    
    size_t index = nombre_completo.rfind(" ");
    
    string nombres = nombre_completo.substr(0, index);
    string apellido = nombre_completo.substr(index + 1);
    
    cout << "(" << nombres << ")" << endl;
    cout << "(" << apellido << ")" << endl;
   
    return 0;
}
