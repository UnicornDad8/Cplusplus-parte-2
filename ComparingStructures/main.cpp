// C++ (intermedio) - Strutures and Enumerations
// -----------------------------------------------------------------------------------------------
// Comparando estructuras.

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
    Movie movie1 = { "Terminator", { 1984, 6, 1 } };
    Movie movie2 = { "Terminator", { 1984, 6, 1 } };
    
    if(movie1.title == movie2.title && movie1.releaseDate.year == movie2.releaseDate.year &&
       movie1.releaseDate.month == movie2.releaseDate.month && movie1.releaseDate.day == movie2.releaseDate.day)
        cout << "Equal" << endl;
    
    return 0;
}
