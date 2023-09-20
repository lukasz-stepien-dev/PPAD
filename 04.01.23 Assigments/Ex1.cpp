#include <iostream>

using namespace std;

/*Instruction
    int zamien(char *lnc, char c1, char c2);
    Funkcja powinna zastępować każde wystąpienie znaku c1 w łańcuchu lnc znakiem c2 i zwracać liczbę dokonanych zamian. 
    W funkcji main sprawdź działanie funkcji dla łańcucha i znaku podanego przez użytkownika.
*/

#define Console(x) cout << x << endl;

int change_letters(char* lnc, char c1, char c2)
{
    int number_of_change = 0;
    for (int i = 0; i <= sizeof(lnc) / sizeof(char); i++)
    {
        if (lnc[i] == c1)
        {
            lnc[i] = c2;
            number_of_change++;
        }
    }
    Console("Twoj ciag znaku po podmianie wyglada tak:");
    Console(lnc);
    return number_of_change;
}

int main() 
{
    char lnc[] = "aaaaaabbbbbhgsdaseyvvs";
    cout << "Ilosc zmian w ciagu znaku: " << change_letters(lnc, 'a', 'c') << endl;
    return 0;
}