#include <iostream>
#include <cstring>

int main() {
    char ciag[100];
    char podciag[100];

    std::cout << "Podaj ciag znakow: ";
    std::cin.getline(ciag, sizeof(ciag));

    std::cout << "Podaj podciag znakow do znalezienia: ";
    std::cin.getline(podciag, sizeof(podciag));

    char *pozycja = strstr(ciag, podciag);

    if (pozycja != nullptr) {
        int pozycja_poczatku = pozycja - ciag;
        std::cout << "Znaleziono podciag na pozycji: " << pozycja_poczatku << std::endl;
    } else {
        std::cout << "Podciag nie zostal znaleziony." << std::endl;
    }

    return 0;
}
