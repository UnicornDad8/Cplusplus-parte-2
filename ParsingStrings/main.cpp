// C++ (intermedio) - Streams and Files
// -----------------------------------------------------------------------------------------------
// Parseando cadenas de texto o "Parsing strings".

#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string str = "10 20";
    stringstream stream;
    
    stream.str(str);
    
    int first;
    stream >> first;
    
    int second;
    stream >> second;
    
    cout << first + second << endl;
    
    return 0;
}
