#include <iostream>
#include <cmath>

// Łukasz Stępień

using namespace std;



//  
float ex1(int brutto, float tax)
{
    float taxPct = 1;
    taxPct -= tax / 100;
    return brutto * taxPct;
}

int main()
{
    int brutto = 0, tax = 0;
    cout << "Podaj kwote brutto: ";
    cin >> brutto;
    cout << "Podaj podatek: ";
    cin >> tax;
    cout << "Cena netto: " << ex1(brutto, tax);
}

