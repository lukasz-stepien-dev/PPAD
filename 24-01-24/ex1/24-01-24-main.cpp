#include <iostream>
#include "Book.h"

int main() {
    Book book1("Wiedźmin", "Andrzej Sapkowski", "SuperNowa", 400, 1993, Genre::Fantasy);
    Book book2("Zbrodnia i kara", "Fiodor Dostojewski", "Greg", 600, 1866, Genre::Other);

    book1.description();
    book2.description();

    return 0;
}
