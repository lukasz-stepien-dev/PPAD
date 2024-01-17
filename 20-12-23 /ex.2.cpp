#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    fstream file("imona_nazwisko.txt", ios::in | ios::out | ios::app);
    if (!file.is_open()) {
        cout << "Błąd otwarcia pliku" << endl;
        return 1;
    }

    vector<string> first_names;
    vector<string> last_names;
    string firstName, last_name;

    while (file >> firstName >> last_name) {
        first_names.push_back(firstName);
        last_names.push_back(last_name);
    }

    for (int i = 0; i < first_names.size(); i++) {
        cout << first_names[i] << " " << last_names[i] << endl;
    }
}