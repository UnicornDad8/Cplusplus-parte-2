// C++ (intermedio) - Strutures and Enumerations
// -----------------------------------------------------------------------------------------------
// Structure Binding o Unpacking

#include <iostream>

using namespace std;

struct Movie {
    string title;
    int releaseYear = 0;
    bool isPopular = true;
};

int main() {
    Movie movie = { "Terminator", 1984 };
    
    // structure binding
    auto [title, releaseYear, isPopular] { movie };
    
    cout << title << endl;
    
    return 0;
}
