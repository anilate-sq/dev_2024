#include <iostream>
using namespace std;

void increase(int& x){
    x++;
}

void decrease(int& x){
    x--;
}

int main(){
    int w = 7;
    cout << "Изначальное значени w: " << w << endl;
    increase(w);
    increase(w);
    increase(w);
    cout << "Значение w после увеличения: " << w << endl;
    decrease(w);
    decrease(w);
    cout << "Значение w после увеличения: " << w << endl;
}