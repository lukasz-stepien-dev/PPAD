#include <iostream>
#include <cstring>

int main() {
    const int max_length = 100;

    char pierwszyCiąg[max_length];
    char drugiCiąg[max_length];

    std::cout << "Podaj pierwszy ciąg znaków: ";
    std::cin.getline(pierwszyCiąg, max_length);

    std::strcpy(drugiCiąg, pierwszyCiąg);

    std::cout << "Zaktualizowany ciąg znaków: " << drugiCiąg << std::endl;

    return 0;
}
