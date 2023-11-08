#include <iostream>

int main() {
    std::string imie, nazwisko;

    std::cout << "Podaj imię: ";
    std::cin >> imie;

    std::cout << "Podaj nazwisko: ";
    std::cin >> nazwisko;

    if (imie.empty() || nazwisko.empty()) {
        std::cout << "Podano niepoprawne dane. Program zostanie zakończony." << std::endl;
        return 1;
    }

    char inicjal_imienia = imie[0];
    char inicjal_nazwiska = nazwisko[0];
    std::cout << "Inicjały: " << inicjal_imienia << " " << inicjal_nazwiska << std::endl;

    return 0;
}
