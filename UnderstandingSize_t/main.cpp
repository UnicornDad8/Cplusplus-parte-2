// C++ (intermedio) - Arreglos o listas
// ------------------------------------------
// Entendiendo size_t

#include <iostream>

using namespace std;

int main() {
    cout << numeric_limits<long long>::min() << "\t" << numeric_limits<long long>::max() << endl;
    cout << "\n\n";
    // size_t es como un long long pero de positivos es decir empieza en 0 y por lo tanto alcanza
    // mayores valores que long long
    cout << numeric_limits<size_t>::min() << "\t" << numeric_limits<size_t>::max() << endl;
        
    return 0;
}
