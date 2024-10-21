// C++ (intermedio) - Strings
// -----------------------------------------------
// funciones de busqueda de caracteres en strings.

#include <iostream>

using namespace std;

int main() {
    string name = "Ceci Benitez";
    
    cout << name.find("e") << endl;
    cout << name.find("e", 3) << endl;
    
    // C++ es case sensitive
    if(name.find("E") == -1) cout << "No existe esa letra" << endl;
   
    return 0;
}
