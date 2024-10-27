// C++ (intermedio) - Strutures and Enumerations
// -----------------------------------------------------------------------------------------------
// Inicializando una estructura => Movie movie = { valor_1, valor_2 }

#include <iostream>

using namespace std;

struct Movie {
    string title;
    int releaseYear = 0;
    bool isPopular = true;
};

int main() {
    Movie movie = { "Terminator", 1984 };
    
    cout << "Movie title: " << movie.title << "\t\t\t"
         << "Release Year: " << movie.releaseYear << "\t\t\t"
         << "Popularity: " << boolalpha << movie.isPopular << endl;
    
    return 0;
}
