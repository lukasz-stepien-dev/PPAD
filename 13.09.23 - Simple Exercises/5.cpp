#include <iostream>

using namespace std;

int main()
{
    int rows = 1;
    int numb;
    cout << "Podaj liczbe poziomow piramidy: ";
    cin >> numb;
    for (int i = numb; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = 0; k < rows; k++) {
            cout << "*";
        }
        cout << endl;
        rows += 2;
    }
    return 0;
}
