#include <iostream>
#include <string>

struct Ksiazka {
    std::string tytul;
    std::string autor;
    int rokWydania;
};

int main() {
    std::cout << "Podaj liczbe ksiazek do dodania do biblioteki: ";
    int liczbaKsiazek;
    std::cin >> liczbaKsiazek;

    Ksiazka* biblioteka = new Ksiazka[liczbaKsiazek];

    for (int i = 0; i < liczbaKsiazek; ++i) {
        std::cout << "Podaj dane dla ksiazki " << i + 1 << ":\n";
        std::cout << "Tytul: ";
        std::cin.ignore();
        std::getline(std::cin, biblioteka[i].tytul);

        std::cout << "Autor: ";
        std::getline(std::cin, biblioteka[i].autor);

        std::cout << "Rok wydania: ";
        std::cin >> biblioteka[i].rokWydania;
    }

    std::cout << "\nInformacje o ksiazkach w bibliotece:\n";
    for (int i = 0; i < liczbaKsiazek; ++i) {
        std::cout << "Ksiazka " << i + 1 << ":\n";
        std::cout << "Tytul: " << biblioteka[i].tytul << "\n";
        std::cout << "Autor: " << biblioteka[i].autor << "\n";
        std::cout << "Rok wydania: " << biblioteka[i].rokWydania << "\n\n";
    }

    delete[] biblioteka;

    return 0;
}
