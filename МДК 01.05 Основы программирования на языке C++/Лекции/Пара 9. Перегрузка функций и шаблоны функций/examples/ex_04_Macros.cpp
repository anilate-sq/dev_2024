#include <iostream>
#define SQUARE(x, y) (x * y);
#define ADD(x, y) x + y;

using namespace std;

int main(){
    cout << "Площадь прямоугольника со сторонами 2 и 8: ";
    cout << SQUARE(2, 8);
    cout << endl;

    // Проблема
    cout << "Сумма чисел 2 и 3 умноженных на 5 = ";
    cout << ADD(2, 3) * 5; // В новых версиях языка пофикшено
    cout << endl;
}