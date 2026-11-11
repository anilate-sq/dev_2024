#include <iostream>
using namespace std;

int& getElement(int arr[], int index){
    return arr[index];
}

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    getElement(a, 3);
}