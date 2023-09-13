#include <iostream>

using namespace std;

int main()
{
    int human = 0; 
    int dog;
    cout << "Podaj wiek psa\n";
    cin >> dog;
    for (int i = 0; i < dog; i++) {
        if (i == 0) {
            human = 15;
        } else if (i == 1) {
            human += 10;
        } else {
            human += 5;
        }
    }
    cout << human;
    return 0;
}