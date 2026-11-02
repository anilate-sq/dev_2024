#include <iostream>

using namespace std;

int global = 100;

void globalTest(){
    global -= 50;
}

int main(){
    {
        cout << "Начальное значение global: " << global << endl;
        globalTest();
        cout << "Значение global после вызова функции: " << global << endl;
    }
}



