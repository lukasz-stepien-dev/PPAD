// Łukasz Stępień
// Klasa 3E grupa. 2
// Data wykonania: 14.02.2024
// Nazwa programu: Klasa Książka
#ifndef PPAD_BOOK_H
#define PPAD_BOOK_H

#include <string>
#include <iostream>

enum class Genre {
    Fantasy,
    Thriller,
    Science,
    Romance,
    Other
};

class Book {
private:
    std::string title;
    std::string author;
    std::string publisher;
    int numbOfPages;
    int releaseYear;
    Genre genre;
    static int liczbaKsiazek;

public:
    static const int CURRENT_YEAR = 2024;
    Book(std::string title, std::string author, std::string publisher, int numberOfPages, int releaseYear, Genre genre);
    ~Book();
    void description();
    int age();
    bool isRecommended() const;
    static std::string genreToString(Genre);
    static Genre stringToGenre(const std::string&);
};

#endif //PPAD_BOOK_H
