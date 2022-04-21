#include <iostream>

using namespace std;

int main() {
    int rows = 4;
    int cols = 5;
    //Creating 1d array
    int **arr = new int *[rows];
    //Creating 1d array in the "rows" array
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    // Adding 2d array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 20;
        }
    }
    //Printing array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    //Deleting parameters of array [j]
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    //Deleting parameters of array [i]
    delete[] arr;
}