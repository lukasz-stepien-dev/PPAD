#include <iostream>

using namespace std;

void multiplication(int number)
{
    number *= 50;
    cout << number << endl;
}

void multiplicationWithReference(int& number)
{
    number *= 50;
    cout << number << endl;
}

void multiplicationWithPinters(int* number)
{
    *number *= 50;
    cout << *number << endl;
}

int main()
{
    int example = 10;
    multiplication(10);
    multiplicationWithReference(example);
    multiplicationWithPinters(&example);
}

