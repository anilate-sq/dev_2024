#include<iostream>
#include<vector>
using namespace std;

// using - современный инструмент для работы с псевдонимами и не только;

// целое число
using Score = int;

// вектор
template<typename T>
using Vec = vector<T>;

int main(){
    Score score = 10; // используем псевдоним
    Vec<int> nums{1, 2, 3, 4, 5};

    for (int num : nums){
        cout << num << "\n";
    }
}