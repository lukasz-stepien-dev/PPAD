#include <iostream>

using namespace std;

int ex1(int* array, int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += array[i];
    }
    return result;
}

void ex2() // 2D array
{
    int array[3][5] =
    {
        { 1, 2, 3, 10, 11 },
        { 4, 5, 6, 12, 13 },
        { 7, 8, 9, 14, 15 }
    };
    for (int i = 0; i < 3; i++)
    {
        for (int a = 0; a < 5; a++)
        {
            cout << array[i][a] << " ";
        }
        cout << endl;
    }
}

void ex3(int sizeM) // tabliczka mnożenia
{
    for (int i = 1; i <= sizeM; i++)
    {
        for (int a = 1; a <= sizeM; a++)
        {
            int result = a * i;
            if (result)
            {

            }
        }
        cout << endl;
    }
}

int main()
{
    int array[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(array) / sizeof(int); // sizeof - return size in bytes

    // cout << ex1(array, size) << endl;

    // ex2();
    
    int sizeOfMulti = 0;
    cin >> sizeOfMulti;
    ex3(sizeOfMulti);
    return 0;
}
