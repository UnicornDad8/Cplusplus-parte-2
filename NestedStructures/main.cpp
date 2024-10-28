// C++ (intermedio) - Strutures and Enumerations
// -----------------------------------------------------------------------------------------------
// Estructuras anidadas.

#include <iostream>

using namespace std;

struct Date {
    int year = 1900;
    int month = 1;
    int day = 1;
};

struct Movie {
    string title;
    Date releaseDate;
    bool isPopular = true;
};

int main() {
    Movie movie = {
        "Terminator",
        { 1984, 6, 1 }
    };
    
    cout << movie.releaseDate.month << endl;
    
    return 0;
}