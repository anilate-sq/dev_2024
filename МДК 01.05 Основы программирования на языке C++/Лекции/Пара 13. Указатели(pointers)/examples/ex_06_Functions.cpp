#include <iostream>
using namespace std;

// Ссылки поактуальнее
void foo(int* p){
    *p = 27; // смена значения у оригинала
}

int main(){
    int x = 10;
    foo(&x);
    cout << x; 
}