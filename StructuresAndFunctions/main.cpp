// C++ (intermedio) - Strutures and Enumerations
// -----------------------------------------------------------------------------------------------
// Estructuras y funciones.

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

bool operator==(const Movie& first, const Movie& second) {
    return (
            first.title == second.title &&
            first.releaseDate.year == second.releaseDate.year &&
            first.releaseDate.month == second.releaseDate.month &&
            first.releaseDate.day == second.releaseDate.day
    );
}

ostream& operator<<(ostream& stream, const Movie& movie) {
    stream << "{ " << movie.title << ", " << movie.releaseDate.year
           << " / " << movie.releaseDate.month << " / " << movie.releaseDate.day << " }" << endl;
    return stream;
}

Movie getMovie() {
    return { "Terminator", 1984 };
}

void showMovie(Movie& movie) {
    cout << movie.title << endl;
}

int main() {
    Movie movie = getMovie();
    showMovie(movie);
    
    return 0;
}

