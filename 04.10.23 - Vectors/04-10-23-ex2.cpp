#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 5, 7, 7};
    vector<int> uniqueElements;

    for (int i = 0; i < arr.size(); ++i) {
        int count = 0;
        for (int j = 0; j < arr.size(); ++j) {
            if (arr[i] == arr[j]) {
                count += 1;
            }
        }
        if (count == 1) {
            uniqueElements.push_back(arr[i]);
        }
    }


    cout << "Unikalne elementy wektora: ";
    for (auto numb : uniqueElements) {
        cout << numb << " ";
    }
    cout << endl;

    return 0;
}
