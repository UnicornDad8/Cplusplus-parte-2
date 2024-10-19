// C++ (intermedio) - Pointers
// ----------------------------------------------------------
// Unique pointers.

#include <iostream>
#include <memory>

using namespace std;

int main() {
    unique_ptr<int[]> numbers = make_unique<int[]>(10);
    unique_ptr<int> y = make_unique<int>();
    
    numbers[0] = 10;
    cout << numbers[0] << endl;
    
    return 0;
}
