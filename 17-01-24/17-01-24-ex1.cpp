// Łukasz Stępień 3E
// Zadanie 1

#include <iostream>
#include <string>

int main() {
    std::cout << "Podaj tekst: ";
    std::string tekst;
    std::getline(std::cin, tekst);

    std::cout << "Podaj słowo, którego wystąpienia chcesz policzyć: ";
    std::string szukane;
    std::cin >> szukane;

    int ilosc_wystapien = 0;
    for (size_t i = 0; i < tekst.length(); i++) {
        if (tekst[i] == szukane[0]) {
            size_t j = 1;
            while (i + j < tekst.length() && tekst[i + j] == szukane[j]) {
                j++;
            }
            if (j == szukane.length()) {
                ilosc_wystapien++;
            }
        }
    }

    std::cout << "Wystąpienia słowa \"" << szukane << "\" w tekście: " << ilosc_wystapien << std::endl;

    return 0;
}