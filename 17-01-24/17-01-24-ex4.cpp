// Łukasz Stępień 3E
// Zadanie 4

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

enum Genre {
    Horror,
    Thriller,
    Drama,
    Comedy
};

struct Film {
    string title;
    int releaseYear;
    Genre genre;
};

void saveToFile(const vector<Film>& library, const string& filename) {
    ofstream file(filename);
    if (file.is_open()) {
        for (const auto& film : library) {
            file << film.title << "," << film.releaseYear << "," << static_cast<int>(film.genre) << endl;
        }
        file.close();
        cout << "Zapisano do pliku: " << filename << endl;
    } else {
        cout << "Nie mozna otworzyc pliku do zapisu." << endl;
    }
}

void loadFromFile(vector<Film>& library, const string& filename) {
    ifstream file(filename);
    if (file.is_open()) {
        library.clear();
        string line;
        while (getline(file, line)) {
            Film film;
            size_t pos = 0;
            pos = line.find(",");
            film.title = line.substr(0, pos);
            line.erase(0, pos + 1);
            pos = line.find(",");
            film.releaseYear = stoi(line.substr(0, pos));
            line.erase(0, pos + 1);
            film.genre = static_cast<Genre>(stoi(line));
            library.push_back(film);
        }
        file.close();
        cout << "Wczytano z pliku: " << filename << endl;
    } else {
        cout << "Nie mozna otworzyc pliku do wczytania." << endl;
    }
}


int main() {
    vector<Film> library;
    int choice;
    while (true) {
        cout << "1 - Dodaj film" << endl;
        cout << "2 - Wyswietl wszystkie filmy" << endl;
        cout << "3 - Zapisz do pliku" << endl;
        cout << "4 - Wczytaj z pliku" << endl;
        cin >> choice;
        Film film;
        switch (choice) {
            case 1:
                cout << "Podaj tytul: " << endl;
                cin >> film.title;
                cout << "Podaj rok wydania: " << endl;
                cin >> film.releaseYear;
                int genreChoice;
                cout << "Wybierz gatunek" << endl;
                cout << " 1 - Horror" << endl;
                cout << " 2 - Thriller" << endl;
                cout << " 3 - Drama" << endl;
                cout << " 4 - Comedy" << endl;
                cin >> genreChoice;
                film.genre = static_cast<Genre>(genreChoice - 1);
                library.push_back(film);
                break;
            case 2:
                for (auto & i : library) {
                    cout << "--------------------------------" << endl;
                    cout << "Tytul: " << i.title << endl;
                    cout << "Rok wydania: " << i.releaseYear << endl;
                    cout << "Gatunek: ";
                    switch (i.genre) {
                        case Horror:
                            cout << "Horror" << endl;
                            break;
                        case Thriller:
                            cout << "Thriller" << endl;
                            break;
                        case Drama:
                            cout << "Drama" << endl;
                            break;
                        case Comedy:
                            cout << "Comedy" << endl;
                            break;
                    }
                }
                break;
            case 3:
                saveToFile(library, "library.txt");
                break;
            case 4:
                loadFromFile(library, "library.txt");
                break;
        }
    }
    return 0;
}