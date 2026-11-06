// Рекурсивная функция - функция, вызываяющая саму себя до базового случая.
#include <iostream>

using namespace std;

int sum(int arr[], int size){
    if(size == 0){
        return 0; // Базовый случай, без него рекурсия не остановится
    }
    return arr[size - 1] + sum(arr, size - 1); // рекурсия
}

int main(){
    int data[] = {1,2,3,4,5};
    cout << sum(data, 5);
}