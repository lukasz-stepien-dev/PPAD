#include <iostream>

using namespace std;

int main() {
    int * tab = nullptr, size;
    cout << "Podaj rozmiar tablicy: ";
    cin >> size;
    tab = new int[size];
    for (int i = 0; i < size; ++i) {
        cout << "Podaj liczbe: ";
        cin >> tab[i];
    }

    for (int i = 0; i < sizeof(tab) / sizeof(int); ++i) {
        cout << tab[i] << " ";
    }
    delete[] tab;
    return 0;
}
