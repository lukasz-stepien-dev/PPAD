#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<unsigned int> arr;
    int tempNumb = 0;
    bool first = true;

    while (tempNumb >= 0) {
        if (!first) {
            arr.push_back(tempNumb);
        }
        cout << "Podaj liczbe: ";
        cin >> tempNumb;
        first = false;
    }

    sort(arr.begin(), arr.end());

    cout << "Posortowane numery: ";
    for (auto numb : arr) {
        cout << numb << " ";
    }
    return 0;
}