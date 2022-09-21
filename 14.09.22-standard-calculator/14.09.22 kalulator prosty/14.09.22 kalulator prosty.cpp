#include <iostream>

using namespace std;

void welcome()
{
    cout << "Witaj w kalulatorze!\n";
    cout << "wpisz obliczenie z dwoma składnikami np. 2 + 2\n";
    cout << "Nie zapomnij o spacji pomiedzy skladnikami a znakiem.\n";
    cout << "Potem dodawaj znak i skladnik np. + 2.\n";
}

int main()
{
    welcome();
    int b, result;
    char sign;
    
    cin >> result;
    
    do 
    {
        cin >> sign;
        if (sign == '+' || sign == '-' || sign == '*' || sign == '/')
        {
            cin >> b;
        } else if (sign == 'c')
        {
            system("cls");
            cout << "\nPodaj dzialanie:\n";
            cin >> result;
            cin >> sign;
            cin >> b;
        } else 
        {
            return 0;    
        }
        
        switch (sign)
        {
        case '+':
            result += b;
            break;
        case '-':
            result -= b;
            break;
        case '*':
            result *= b;
            break;
        case '/':
            if (b != 0)
            {
                result /= b; 
            } else 
            {
                cout << "Nie mozna dzielic przez 0\n";
            }
            break;
        default:
            return 0;
        }
        cout << result;
    } while (true);

    
    system("cls");
    cout << " = " << result << " ";
    return 0;
    
}