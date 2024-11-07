// C++ (intermedio) - Streams and Files
// -----------------------------------------------------------------------------------------------
// Convirtiendo valores en cadenas de texto.

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    double number = 12.34;
    stringstream stream;
    
    stream << fixed << setprecision(2) << number << endl;
    string str = stream.str();
    
    cout << str << endl;
    
    return 0;
}
