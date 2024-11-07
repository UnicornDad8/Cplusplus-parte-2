// C++ (intermedio) - Streams and Files
// -----------------------------------------------------------------------------------------------
// Leyendo datos de archivos binarios.

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("numbers.dat", ios::binary);
    
    if(file.is_open()) {
        int number;
        while(file.read(reinterpret_cast<char*>(&number), sizeof(number))) {
            cout << number << "\n";
        }
        
        file.close();
    }
    
    return 0;
}
