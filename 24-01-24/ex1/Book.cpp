// Łukasz Stępień
// Klasa 3E grupa. 2
// Data wykonania: 14.02.2024
// Nazwa programu: Klasa Książka
#include "Book.h"
#include <utility>

int Book::liczbaKsiazek = 0;

Book::Book(std::string title, std::string author, std::string publisher, int numberOfPages, int releaseYear, Genre genre)
        : title(std::move(title)),
          author(std::move(author)),
          publisher(std::move(publisher)),
          numbOfPages(numberOfPages),
          releaseYear(releaseYear),
          genre(genre) {
    liczbaKsiazek++;
}

Book::~Book() {
    liczbaKsiazek--;
}

void Book::description() {
    std::cout << title << " autorstwa " << author << ", wydane przez " << publisher << ", " << numbOfPages << " stron, wydana w roku " << releaseYear << "." << std::endl;
}

int Book::age() {
    return CURRENT_YEAR - releaseYear;
}

std::string Book::genreToString(Genre genre) {
    switch (genre) {
        case Genre::Fantasy:
            return "Fantazy";
        case Genre::Thriller:
            return "Thriller";
        case Genre::Science:
            return "Naukowa";
        case Genre::Romance:
            return "Romans";
        default:
            return "Inne";
    }
}

Genre Book::stringToGenre(const std::string& genre) {
    if (genre == "Fantasy") return Genre::Fantasy;
    else if (genre == "Thriller") return Genre::Thriller;
    else if (genre == "Science") return Genre::Science;
    else if (genre == "Romans") return Genre::Romance;
    else return Genre::Other;
}

bool Book::isRecommended() const {
    return numbOfPages > 100 && releaseYear > 2000;
}
