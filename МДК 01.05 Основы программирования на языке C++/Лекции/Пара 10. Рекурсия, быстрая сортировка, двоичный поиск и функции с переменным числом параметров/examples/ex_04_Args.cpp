#include <iostream>

using namespace std;

// Шаблон функции с неограниченным числом параметров
template<typename... Args>
void printAll(Args... args){
    (cout << ... << args) << endl; // "fold expression" ! нужна новая версия
}

int main(){
    printAll("Числа: ", 1, ", ", 2, ", ", 3);
}