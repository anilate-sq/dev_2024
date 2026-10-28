#include <iostream>

using namespace std;

// ключевое слово static делает его статичным
void counter(){
    static int x = 0;
    x++;
    cout << x;
}

int main(){
    counter();
    counter();
    counter();
}