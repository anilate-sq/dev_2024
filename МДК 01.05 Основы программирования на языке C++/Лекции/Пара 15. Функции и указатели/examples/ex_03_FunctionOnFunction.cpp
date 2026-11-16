#include <iostream>

using namespace std;

// Создаем калькулятор из операций сложения и умножения
int calc(int (*op)(int, int), int x, int y){
    return op(x, y);
}

// Сложение двух переменных
int add(int a, int b){ return a + b; } 
// Умножение двух переменных
int mul(int a, int b){ return a * b; } 

int main(){
    cout << calc(add, 2, 3) << "\n"; // 5
    cout << calc(mul, 2, 3) << "\n"; // 6
}