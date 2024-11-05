// C++ (intermedio) - Streams and Files
// -----------------------------------------------------------------------------------------------
// Escribiendo en archivos de texto.

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    ofstream file;
    file.open("data.csv");
    
    if(file.is_open()) {
        // CSV: Comma Separated Value
        file << "id,title,year\n"
             << "1,Terminator 1,1984\n"
             << "2,Terminator 2,1991\n";
        file.close();
    }
    
    return 0;
}
