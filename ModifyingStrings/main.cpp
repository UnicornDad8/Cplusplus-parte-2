// C++ (intermedio) - Strings
// ---------------------------------------------------------------
// funciones para modificar strings

#include <iostream>

using namespace std;

int main() {
    string name = "Ceci";
    
    name.append(" Benitez");
    cout << name << endl;
    
    name.insert(0, "I am ");
    cout << name << endl;
    
    name.erase(0, 3);
    cout << name << endl;
    
    cout << "-----------------------------------------";
    name.clear();
    cout << name << endl;
    
    name = "Peque";
    name.replace(2, 2, "kk");
    
    cout << name << endl;
    
    return 0;
}
