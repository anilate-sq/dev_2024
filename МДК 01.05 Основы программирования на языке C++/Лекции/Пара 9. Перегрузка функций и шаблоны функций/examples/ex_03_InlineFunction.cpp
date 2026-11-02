#include <iostream>

using namespace std;

// На вид работает как обычная функция, на деле подставляет код из функции на место вызова
inline int sum(int a, int b){
    return a + b;
}

int main(){
    // inline-функции можно использовать для небольших функций
    cout << "Сумма чисел 2 и 34 = " << sum(2, 34) << endl;
}