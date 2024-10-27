// C++ (intermedio) - Strings
// ---------------------------------------------------------------
// C++ string class

#include <iostream>

using namespace std;

int main() {
    string name = "Ceci";
    
    cout << name.empty() << endl;
    name[0] = 'X';
    
    cout << name << " " << name.length() << endl;
    
    name += " Benitez";
    cout << name << endl;
    
    return 0;
}
