// C++ (intermedio) - Strutures and Enumerations
// -----------------------------------------------------------------------------------------------
// Comparando estructuras usando un metodo "equals" dentro de la estructura.
// Se llama "metodo" a las funciones que son parte de un objeto, en nuestro caso la structura
// es un objeto.

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
    
    // Method
    bool equals(const Movie& movie) {
        return (
                title == movie.title &&
                releaseDate.year == movie.releaseDate.year &&
                releaseDate.month == movie.releaseDate.month &&
                releaseDate.day == movie.releaseDate.day
        );
    }
};

int main() {
    Movie movie1 = { "Terminator", { 1984, 6, 1 } };
    Movie movie2 = { "Terminator", { 1984, 6, 1 } };
    
    if(movie1.equals(movie2))
        cout << "Equal" << endl;
    
    return 0;
}
