#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int size;
    std::cout << "Podaj rozmiar tablicy: ";
    std::cin >> size;

    srand(time(nullptr));
    int *array = new int[size];

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
        cout << array[i] << " ";
    }

    int largest = array[0];
    int smallest = array[0];
    double avg = 0;

    for (int i = 1; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }
    cout << "\nLargest: " << largest << endl;

    for (int i = 1; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    cout << "Smallest: " << smallest << endl;

    for (int i = 0; i < size; i++) {
        avg += array[i];
    }
    avg /= size;
    cout << "Average: " << avg << endl;

    delete[] array;
}