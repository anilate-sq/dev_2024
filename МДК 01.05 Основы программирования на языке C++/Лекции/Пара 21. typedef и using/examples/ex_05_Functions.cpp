#include <iostream>
using namespace std;

// основные способы работы
typedef int (*Operation)(int, int); 
using Operation = int(*)(int, int);

int add(int a, int b) { return a + b; }

int main(){
    Operation op = add;
    cout << op(3, 4);
}