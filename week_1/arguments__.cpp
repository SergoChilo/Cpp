#include <iostream>
using namespace std;

void Foo(int *pa){
    (*pa)++;
}
int main(){
    int a = 0;
    cout << a << endl;
    Foo(&a);
    cout << a << endl;
}