// Массив
#include <iostream>
#include <array> // подключение

using namespace std;
int main(){
    array <int, 5> arr = {1, 2, 3, 4, 5}; // создаем массив

    cout << "Длина массива: " <<  arr.size() << endl; // вывод длины массива
    for(int i = 0; i < arr.size(); i++){
        cout << arr.at(i) << endl; // безопасный доступ
    }

    cout << "Первый элемент массива: " << arr.front() << "\nПоследний элемент массива: " << arr.back() << endl;
    
    array <int, 10> void_arr;
    void_arr.fill(21); // заполнение массива
    for(int i = 0; i < void_arr.size(); i++){
        cout << void_arr.at(i) << endl; // безопасный доступ
    }

}