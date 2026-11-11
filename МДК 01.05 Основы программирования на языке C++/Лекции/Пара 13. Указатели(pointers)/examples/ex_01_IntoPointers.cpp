// Указатели
#include <iostream>
using namespace std;

int main(){
    // Указатель - переменная, хранящая адрес другой переменной.

    int x = 10;
    int* p = &x; // уазатель

    cout << "Адрес переменной x: ";
    cout << p << endl;
    cout << "Значение переменной x: ";
    cout << *p << endl;
}