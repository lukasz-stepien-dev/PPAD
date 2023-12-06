#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    // Pobieranie ciągu znaków od użytkownika
    string input;
    cout << "Podaj ciag znakow: ";
    cin >> input;

    // Odwracanie ciągu znaków
    string reversed = input; // Tworzymy kopię oryginalnego ciągu
    reverse(reversed.begin(), reversed.end());

    // Wyświetlanie odwróconego ciągu
    cout << "Odwrocony ciag: " << reversed << endl;

    return 0;
}
