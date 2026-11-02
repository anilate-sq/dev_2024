#include <iostream>

using namespace std;

int main(){
    // Постфиксы
    // Произойдут неявные преобразования
    double var1 = 12.32f; // Будет float
    int var2 = 34u; // unsigned
    int var3 = 23l; // long
    int var4 = 23ll; // long long
    int var5 = 24ull; // unsigned long long 

    // Системы счисления
    int num10 = 42; // десятичная
    int num2 = 0b101010; // двоичная
    int num8 = 052; // восьмеричная(аккуратно)
    int num16 = 0x2A; // шестнадцатеричная 

    cout << "Десятичная: " << num10 << "\nДвоичная: " << num2 << "\nВосьмеричная: " << num8 << "\nШестнадцатеричная: " << num16 << endl; 
}