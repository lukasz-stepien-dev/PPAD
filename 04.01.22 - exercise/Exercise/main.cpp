#include <iostream>
#include <cmath>

using namespace std;

struct s1
{
    char* nazwa;
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float pole;
    float objetosc;
};

void show(s1 pudelko1)
{
    cout << pudelko1.nazwa << endl;
    cout << pudelko1.wysokosc << endl;
    cout << pudelko1.szerokosc << endl;
    cout << pudelko1.dlugosc << endl;
    cout << (round(pudelko1.pole*100))/100 << endl;
    cout << (round(pudelko1.objetosc*100))/100 << endl;
}

void calculate()
{
    
}

int main()
{
    pudelko.nazwa = "Super pudelko";
    pudelko.wysokosc = 13.9;
    pudelko.szerokosc = 13.3;
    pudelko.dlugosc = 13.1;
    pudelko.pole = 
    (2 * pudelko.wysokosc * pudelko.szerokosc) + 
    (2 * pudelko.wysokosc * pudelko.dlugosc) + 
    (2 * pudelko.szerokosc * pudelko.dlugosc);
    pudelko.objetosc = pudelko.wysokosc * pudelko.szerokosc * pudelko.dlugosc;
    
    show(pudelko);
    return 0;
}