// C++ (intermedio) - Strings
// ------------------------------------------------------
// String numeric conversion.

#include <iostream>

using namespace std;


int main() {
    double price = stod("19.99");
    
    cout << price << endl;
    
    int age = 31;
    cout << to_string(age) << endl;
    
    return 0;
}
