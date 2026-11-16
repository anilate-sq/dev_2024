#include <iostream>
using namespace std;

int* createArray(int n){
    return new int[n];
}

int main(){
    int* arr = createArray(20);
    for (int i = 0; i < 20; i++){
        cout << *(arr + i) << " ";
    }
    delete[] arr;
}