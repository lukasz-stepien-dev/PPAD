#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    string surname;
    string degreeCourse;
    int age;
    int indexNumber;
    double avg;
};

int main () {
    Student student;
    cout << "Wpisz dane studenta: " << endl;
    cout << "Imie: ";
    cin >> student.name;
    cout << "Nazwisko: ";
    cin >> student.surname;
    cout << "Kierunek studiow: ";
    cin >> student.degreeCourse;
    cout << "Wiek: ";
    cin >> student.age;
    cout << "Indeks: ";
    cin >> student.indexNumber;
    cout << "Srednia ocen: ";
    cin >> student.avg;

    cout << "Dane studenta: " << endl;
    cout << "Imie: " << student.name << endl;
    cout << "Nazwisko: " << student.surname << endl;
    cout << "Kierunek studiow: " << student.degreeCourse << endl;
    cout << "Wiek: " << student.age << endl;
}