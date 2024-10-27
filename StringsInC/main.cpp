// C++ (intermedio) - Strings
// ---------------------------------------------------------------
// C strings - the old way in legacy code

#include <iostream>

using namespace std;

int main() {
    // null terminator \0
    // char name[5] = { 'C', 'e', 'c', 'i', '\0' };
    
    // string literal in C
    char name[5] = "Ceci";
    
    // character literal
    name[0] = 'X';
    cout << name[0] << endl;
    cout << strlen(name) << endl;
    
    return 0;
}
