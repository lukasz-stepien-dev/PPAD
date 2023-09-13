#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i < 101; ++i) {
        sum += i;
    }
    cout << "Suma liczb od 1 do 100 wynosi: " << sum;
    return 0;
}
