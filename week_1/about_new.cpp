#include <iostream>
#include <string>

using namespace std;

int main() {
    int *pa = new int;
    *pa = 10;
    cout << *pa << endl;
    delete pa;

    pa = NULL;
    cout << *pa << endl;
}