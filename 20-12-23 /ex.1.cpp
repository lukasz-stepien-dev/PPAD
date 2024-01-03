#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream file("./dane.txt", ios::in | ios::out | ios::app);
    if (!file.is_open()) {
        cout << "Nie udalo sie otworzyc pliku" << endl;
        return 1;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}