#include <iostream>

using namespace std;

int main() {
    int size = 0;
    cout << "Enter array size : ";
    cin >> size;
    int *arr = new int[size];

    //Add array from 0 to 9
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t" << arr + i << endl;
    }

    delete[] arr;
}