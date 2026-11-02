#include <iostream>

using namespace std;

// 3 разные функции
void printInt(int num){
    cout << "Int: " << num << endl;
}

void printString(string row){
    cout << "String: " + row << endl;
}

void printDouble(double dou){
    cout << "Double: " << dou << endl;
}

// Перегрузка 1 функции
void print(int num){
    cout << "Int: " << num << endl;
}

void print(string row){
    cout << "String: " + row << endl;
}

void print(double dou){
    cout << "Double: " << dou << endl;
}

// Изменение сигнатуры(изменение параметров: либо типов, либо количества)
int sum(int a, int b){
    return a + b;
}

int sum(int a, int b, int c){
    return a + b + c;
}

double sum(double a, double b){
    return a + b;
}

int main(){
    // Задача: сделать функцию для вывода переменной различных типов

    print(5);
    print(5.5);
    print("Текст");

    // Задача: сделать функцию под разные вариации суммирования
    cout << "Int sum 2 = " << sum(5, 2) << endl;
    cout << "Int sum 3 = " << sum(5, 2, 12) << endl;
    cout << "Double sum 2 = " << sum(5.2, 2.5) << endl;

}