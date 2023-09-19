#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Podaj rozmiar spirali (minimum 5) podawaj liczby nie parzyste: ";
    int size;
    cin >> size;
    vector<vector<char>> arr;
    int tempSize = size;
    int howMany = 0;
    int count = 0;
    int row;
    
    while (tempSize != 5) {
        tempSize -= 2;
        howMany++;
    }
    
    for (int i = 0; i < size; i++) {
        vector<char> temp;
        for (int j = 0; j < size; j++) {
            temp.push_back(' ');
        }
        arr.push_back(temp);
    }
    
    tempSize = size;
    while (tempSize != 1) {
        row = 0 + count;
        for (int i = 0; i < tempSize; i++) {
            if (row == 0+count || row == tempSize-1+count) {
                if (row != 0+count) {
                    arr[row][count] = '|';
                } else {
                    arr[row][count] = '-';
                }
                for (int j = count+1; j < tempSize+count; j++) {
                    arr[row][j] = '-';
                }
                arr[row][tempSize-1+count] = '|';
            } else {
                arr[row][count] = '|';
                for (int j = count+1; j < tempSize; j++) {
                   arr[row][j] = ' ';
                }
                arr[row][tempSize-1+count] = '|';
            }
            
            row++;
        }
        count++;
        tempSize -= 2;
    }
    
    for (int i = 0; i < size+1; i++) {
        for (int j = 0; j < size+1; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
