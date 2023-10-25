#include <iostream>
#include <cstring>

int main() {
    char firstString[100];
    char secondString[100];

    std::cout << "Podaj pierwszy ciąg znaków: ";
    std::cin.getline(firstString, sizeof(firstString));

    std::cout << "Podaj drugi ciąg znaków: ";
    std::cin.getline(secondString, sizeof(secondString));

    int result = std::strcmp(firstString, secondString);

    if (result == 0) {
        std::cout << "Ciągi znaków są takie same." << std::endl;
    } else {
        std::cout << "Ciągi znaków są różne." << std::endl;
    }

    return 0;
}
