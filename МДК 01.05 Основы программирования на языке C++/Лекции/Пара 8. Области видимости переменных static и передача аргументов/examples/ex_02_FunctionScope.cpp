#include <iostream>

using namespace std;

// Переменная y будет доступна исключительно внутри функции
void test(int x){
    int y;
}

int main(){
    test(10);

    // x = 12; доступа нет
    // y = 21; доступа нет
}