#include <iostream>

using namespace std;

/*
    Синтаксис функций:
    тип_возвращаемого значени название(параметры){
        тело_функции
        return возвращаемо_значение(при наличии)
    }
*/

// Пример 1. Сумма 2 чисел
int sum(int a, int b){
    return a + b;
}

// Пример 2. Безвозвратная функция
void printMessage(){
    cout << "Привет";
}

int main(){
    cout << sum(2,4);
}