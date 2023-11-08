#include <iostream>
#include <string>
using namespace std;

int main() {
    string tekst1, tekst2;

    cout << "Podaj pierwszy tekst: ";
    getline(cin, tekst1);
    cout << "Podaj drugi tekst: ";
    getline(cin, tekst2);

    int liczbaSlowTekst1 = 0;
    int liczbaSlowTekst2 = 0;

    for (char c : tekst1) {
        if (isspace(c)) {
            liczbaSlowTekst1++;
        }
    }
    liczbaSlowTekst1++;

    for (char c : tekst2) {
        if (isspace(c)) {
            liczbaSlowTekst2++;
        }
    }
    liczbaSlowTekst2++;

    string szukaneSlowo;
    cout << "Podaj słowo do zliczenia w tekście: ";
    cin >> szukaneSlowo;

    int liczbaWystapien = 0;
    size_t pozycja = tekst1.find(szukaneSlowo);
    while (pozycja != string::npos) {
        liczbaWystapien++;
        pozycja = tekst1.find(szukaneSlowo, pozycja + 1);
    }

    bool zawieraPodciag = (tekst2.find(tekst1) != string::npos);

    cout << "Liczba słów w tekście 1: " << liczbaSlowTekst1 << endl;
    cout << "Liczba słów w tekście 2: " << liczbaSlowTekst2 << endl;
    cout << "Liczba wystąpień słowa '" << szukaneSlowo << "' w tekście 1: " << liczbaWystapien << endl;
    if (zawieraPodciag) {
        cout << "Tekst 2 zawiera tekst 1 jako podciąg." << endl;
    } else {
        cout << "Tekst 2 nie zawiera tekst 1 jako podciągu." << endl;
    }

    return 0;
}
