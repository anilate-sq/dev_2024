#include <iostream>
using namespace std;

int main(){
    int* p = new int(21);
    delete p;

    cout << *p; // Результат будет не предсказуемый

    p = nullptr; // Чтобы небыло висяго указателя
    cout << p;
}