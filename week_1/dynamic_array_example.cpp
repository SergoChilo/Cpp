#include <iostream>
using namespace std;

int main(){
    int size = 5;
    cin >> size;
    int *arr = new int[size];
    delete [] arr;
    return 0;
}