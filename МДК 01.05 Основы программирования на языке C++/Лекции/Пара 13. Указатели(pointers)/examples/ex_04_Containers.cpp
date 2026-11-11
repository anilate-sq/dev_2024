#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int* p = arr; // передали ссылку на массив


    for(int i = 0; i < 5; i++){
        cout << *(p + i);
        cout << " ";
    }
}