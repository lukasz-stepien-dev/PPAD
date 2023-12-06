#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string input;
    cout << "Podaj ciag znakow: ";
    cin >> input;

    string reversed = input;
    reverse(reversed.begin(), reversed.end());

    if (reversed == input) {
        cout << "Jest polindromem";
    }
    else {
        cout << "Nie jest polindromem";
    }
    return 0;
}
