#include <iostream>

using namespace std;

int sum(int a, int b){
    return a + b;
}

long sum(long a, long b){
    return a + b;
}

double sum(double a, double b){
    return a + b;
}

int main(){
    cout << "Целое число: " << sum(2, 3) << endl;
    cout << "Большое число: " << sum(10000000, 20000000) << endl;
    cout << "Дробное число: " << sum(1.2, 3.4) << endl;
}