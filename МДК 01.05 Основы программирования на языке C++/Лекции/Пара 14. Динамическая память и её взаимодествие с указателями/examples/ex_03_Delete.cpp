#include <iostream>
using namespace std;

int main(){
    int* p = new int(20);
    cout << *p << endl;
    delete p;
    cout << *p;

    // всегда чистим указатели
}