#include <iostream>

using namespace std;

// Создание простового шаблона
template <typename T> // настройка шаблона
T square(T x){ // шаблонная функция
    return x * x;
}

// Более строгий шаблон
template <typename T, typename U>
void showSum(T x,  U y){
    cout << "Сумма чисел " << x << " и " << y << " = " << x + y;
}

int main(){
    // int square(2);
    // double square(4.1);

    cout << "Int: " << square(2) << endl;
    cout << "Double: " << square(4.1) << endl;
    showSum(2, 4);
}  