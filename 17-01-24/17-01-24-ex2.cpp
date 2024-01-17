// Łukasz Stępień 3E
// Zadanie 2
#include <iostream>
#include <string>

int main() {
    std::cout << "Podaj tekst: ";
    std::string tekst;
    std::getline(std::cin, tekst);

    std::cout << "Podaj słowo, które chcesz znaleźć: ";
    std::string szukane;
    std::cin >> szukane;

    std::cout << "Podaj słowo, na które chcesz je zamienić: ";
    std::string zamiana;
    std::cin >> zamiana;

    std::string tekst_zamieniony = tekst;
    int liczaba_slow = 0;
    for (int i = 0; i < tekst_zamieniony.length(); i++) {
        if (tekst_zamieniony[i] == szukane[0]) {
            for (int j = 0; j < szukane.length(); j++) {
                tekst_zamieniony[i + j] = zamiana[j];
            }
            liczaba_slow++;
        }
    }

    std::cout << "Tekst oryginalny: " << tekst << std::endl;
    std::cout << "Tekst po zamianie: " << tekst_zamieniony << std::endl;
    std::cout << "Liczba slow zamienionych: " << liczaba_slow;
    return 0;
}