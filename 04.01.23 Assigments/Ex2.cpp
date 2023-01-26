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
#define New_line cout << endl;

struct Box 
{
    char* name;
    float height;
    float width;
    float length;
    float area;
    float volume;
};

// A
void show_data(struct Box box)
{
    Console(box.name);
    Console(box.height);
    Console(box.width);
    Console(box.length);
    Console(box.area);
    Console(box.volume);
}

// B
void calculate_area_and_volume(struct Box * box)
{
    float height = box->height;
    float width = box->width;
    float length = box->length;
    box->area = 2 * (height*width + width*length + height*length);
    box->volume = height * width * length;
}

int main()
{
    Box my_box;
    strcpy(my_box.name, "Moje pudelko");
    my_box.height = 5;
    my_box.width = 10;
    my_box.length = 3;
    my_box.area = 0;
    my_box.volume = 0;
    Console("A:");
    show_data(my_box);
    New_line;
    calculate_area_and_volume(&my_box);
    Console("B:");
    show_data(my_box);
    
    return 0;
}