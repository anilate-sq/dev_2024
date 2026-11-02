#include <iostream>

using namespace std;

void setValue(int x){
    x = 100;
}

void setLink(int& x){
    x = 100;
}


int main(){
    int a = 10;
    cout << "До ссылки: " << a << endl;
    setValue(10);
    setLink(a); // Передаем только переменную
    cout << "После работы с ссылкой: " << a;
}
