#include <iostream>
using namespace std;

int main(){
    // Матрица - числовая таблица

    // Создание
    int matrix[3][3]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Обращение
    cout << "Значение элемента 3 строки и 2 колонки = " << matrix[2][1] << endl; // 8

    // Просмотр матрицы
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Изменение
    matrix[0][2] = 21; // Меняем элемент 1 строки и 3 колонки
}