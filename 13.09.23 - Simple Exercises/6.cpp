#include <iostream>

using namespace std;

int main()
{
    int height, width;
    cout << "Podaj wysokosc: " << endl;
    cin >> height;
    cout << "Podaj szerokosc: " << endl;
    cin >> width;
    cout << endl;
    for (int i = 0; i < height; i++) {
        if (i == 0 || i == height - 1) {
            for (int j = 0; j < width; j++) {
                cout << "* ";
            }
        } else {
            cout << "* ";
            for (int j = 0; j < width - 2; j++) {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
