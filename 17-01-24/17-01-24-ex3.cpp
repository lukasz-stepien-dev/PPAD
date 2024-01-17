// Łukasz Stępień 3E
// Zadanie 3

#include <iostream>
#include <string>

using namespace std;

enum Weekdays {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    unsigned int number;
    Weekdays weekday;
    cout << "Wprowadz liczbe: " << endl;
    cout << "1 - Poniedzialek" << endl;
    cout << "2 - Wtorek" << endl;
    cout << "3 - Sroda" << endl;
    cout << "4 - Czwartek" << endl;
    cout << "5 - Piatek" << endl;
    cout << "6 - Sobota" << endl;
    cout << "7 - Niedziela" << endl;
    cin >> number;
    weekday = static_cast<Weekdays>(number);
    switch (weekday-1) {
        case Monday:
            cout << "1. Szkoła" << endl;
            cout << "2. Granie na gitarze" << endl;
            break;
        case Tuesday:
            cout << "1. Szkoła" << endl;
            cout << "2. Plywanie" << endl;
            break;
        case Wednesday:
            cout << "1. Szkoła" << endl;
            cout << "2. Trening pilki noznej" << endl;
            break;
        case Thursday:
            cout << "1. Szkoła" << endl;
            cout << "2. Malowanie" << endl;
            break;
        case Friday:
            cout << "1. Szkoła" << endl;
            cout << "2. Programowanie" << endl;
            break;
        case Saturday:
            cout << "1. Szkoła" << endl;
            cout << "2. Nauka angielskiego" << endl;
            break;
        case Sunday:
            cout << "1. Szkoła" << endl;
            cout << "2. Wolontariat" << endl;
            break;
    }
    return 0;
}