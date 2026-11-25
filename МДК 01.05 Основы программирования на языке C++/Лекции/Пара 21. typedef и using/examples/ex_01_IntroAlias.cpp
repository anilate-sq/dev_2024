#include <iostream>
using namespace std;

typedef int Score; // сделали псевдоним для типа int

int main(){
    /*
        Alias(псевдонимы) - инструменты для задания нового имени определенному типу данных.
        В C++ 2 основные псевдонима: typedef и using
    */

    Score score = 21;
    cout << "кол-во очков: " << score;
}