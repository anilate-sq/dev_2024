#include <iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}

int (*fptr)(int, int) = add;

int main(){
    cout << fptr(2, 3);
}