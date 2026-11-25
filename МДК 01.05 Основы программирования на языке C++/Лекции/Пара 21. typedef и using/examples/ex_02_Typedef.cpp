#include <iostream>
using namespace std;

// 1. целое число
typedef int Score;

// 2. интовый указатель
typedef int* IntPointer;

// 3. указатель на функцию
typedef int(*Operation)(int, int);

int main(){
    int x = 21;
    IntPointer y = &x;
    cout << *y;
}