#include <iostream>
#include <cstring>

using namespace std;

/*
Instructions

Utwórz zmienna strukturalną, wypełnij ja wartościami zdefiniowanymi dla tej struktury i wyświetl je na ekranie.

A. Napisz funkcję, która przyjmuje wartość struktury pudelko i wyświetla każdą składową.
B. Napisz funkcję, która przyjmuje adres struktury pudelko, oblicza i ustawia składowe pole i objetosc
C. Napisz funkcję, która przyjmuje referencję do struktury pudelko i wyświetla każdą składową. W jaki sposób zabezpieczyć strukturę przed ewentualnymi zmianami wartości składowych dokonanymi przez użytkownika
D. Napisz funkcję, która przyjmuje referencję do struktury pudelko, oblicza i ustawia składowe pole i objetosc.
*/

#define Console(x) cout << x << endl; 

struct Box 
{
    char* name;
    float height;
    float width;
    float length;
    float area;
    float volume;
};

void show_data(struct Box *box)
{
    Console(box->name);
    Console(box->height);
    Console(box->width);
    Console(box->length);
}

int main()
{
    Box my_box;
    strcpy(my_box.name, "Moje pudelko");
    my_box.height = 5;
    my_box.width = 10;
    my_box.length = 3;
    show_data(&my_box);
    return 0;
}