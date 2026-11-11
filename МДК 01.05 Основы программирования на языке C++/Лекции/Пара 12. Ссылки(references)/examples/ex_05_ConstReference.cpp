#include <iostream>

using namespace std;

// Запрещает передачу значений
void print(const string& s){
    cout << s;
    // s += 12; а так уже нельзя
}

int main(){
    string msg = "Очень важное сообщение";
    print(msg);
}