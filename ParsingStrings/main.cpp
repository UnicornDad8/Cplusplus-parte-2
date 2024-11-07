// C++ (intermedio) - Streams and Files
// -----------------------------------------------------------------------------------------------
// Parseando cadenas de texto o "Parsing strings".
// -----------------------------------------------------------------------------------------------
// Ejercicio:
// Dada la siguiente cadena de texto, escribe una función para parsear y convertirla
// en una estructura de película (struct Movie).
//
// "Terminator 1,1984"

#include <iostream>
#include <sstream>

using namespace std;

struct Movie {
    string title;
    int year;
};

Movie parseMovie(string str) {
    stringstream stream;
    stream.str(str);
    
    Movie movie;
    getline(stream, movie.title, ',');
    stream >> movie.year;
    
    return movie;
}

int main() {
    Movie movie = parseMovie("Terminator 1,1984");
    
    cout << "Title: " << movie.title << endl;
    cout << "Year: " << movie.year << endl;
    
    return 0;
}
