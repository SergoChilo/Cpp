#include <iostream>
using namespace std;

void Foo(int a){
    a = 1;
    }
void Foo2(int &a){
    a = 2;
}
void Foo3(int *a){
    *a = 3;
}

int main() {
    int value = 5;

    Foo(value);
    cout << "Foo \t" << value << endl;

    Foo2(value);
    cout << "Foo2 \t" << value << endl;

    Foo3(&value);
    cout << "Foo3 \t" << value << endl;
}