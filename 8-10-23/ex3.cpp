#include <iostream>
#include <cstring>

int main() {
    const int maxStringLength = 100;

    char firstString[maxStringLength];
    char secondString[maxStringLength];

    std::cout << "Podaj pierwszy ciąg znaków: ";
    std::cin.getline(firstString, maxStringLength);

    std::cout << "Podaj drugi ciąg znaków: ";
    std::cin.getline(secondString, maxStringLength);

    strcat(firstString, secondString);

    std::cout << "Wynik połączenia: " << firstString << std::endl;

    return 0;
}
