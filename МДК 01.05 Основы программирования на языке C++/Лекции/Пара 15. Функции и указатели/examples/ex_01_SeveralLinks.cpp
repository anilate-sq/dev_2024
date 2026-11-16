#include <iostream>

using namespace std;

void transform(int* a, int* b){
    *a *= 2;
    *b *= 3;
}

int main(){
    int x = 2, y = 3;
    transform(&x, &y);

    cout << x << " " << y;
}