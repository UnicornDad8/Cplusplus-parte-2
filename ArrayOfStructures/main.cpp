// C++ (intermedio) - Strutures and Enumerations
// -----------------------------------------------------------------------------------------------
// Arreglo de estructuras.

#include <iostream>
#include <vector>

using namespace std;

struct Movie {
    string title;
    int releaseYear = 0;
    bool isPopular = true;
};

int main() {
    vector<Movie> movies;
    
    movies.push_back({ "Terminator", 1984 });
    movies.push_back({ "La historia sin fin", 1984 });
    
    for(const Movie& movie: movies) {
        cout << movie.title << endl;
    }
    
    return 0;
}
