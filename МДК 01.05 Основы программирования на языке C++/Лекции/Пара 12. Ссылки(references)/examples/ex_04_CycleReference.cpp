#include <iostream>
using namespace std;

int main(){
    int container[3] = {1, 2, 3};
    for (auto& x : container){
        x += 10;
        cout << x << " ";
    }  
}