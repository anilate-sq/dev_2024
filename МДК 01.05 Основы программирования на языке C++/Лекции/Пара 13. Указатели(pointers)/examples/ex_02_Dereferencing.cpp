#include <iostream>
using namespace std;

int main(){
    // *p - разыменовать
    // p - получить адрес

    int a = 12;
    int b = 47;
    int* p = &a;    
    cout << "Изначальное значение a: " << a << endl;
    *p = 21;
    cout << "Измененное значение a: " << a << endl;

    // Можно менять адрес
    p = &b;
    cout << "Поменял на перменную b: " << *p;
}   