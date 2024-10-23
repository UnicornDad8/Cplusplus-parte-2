// C++ (intermedio) - Strings
// ---------------------------------------------------------
// Secuencias de escape en strings.   \\   \"   \'   \n   \t

#include <iostream>

using namespace std;


int main() {
    string desktop_path = "c:\\Desktop";
    string mensaje = "\"Hello world!\"\nMy name is Ceci";
    
    char ch = '\'';
    
    string tabs = "tab_1\t\t\ttab_2\n\ndouble jump";
    
    cout << desktop_path << endl;
    cout << mensaje << " " << ch << endl;
    cout << tabs << endl;
   
    return 0;
}
