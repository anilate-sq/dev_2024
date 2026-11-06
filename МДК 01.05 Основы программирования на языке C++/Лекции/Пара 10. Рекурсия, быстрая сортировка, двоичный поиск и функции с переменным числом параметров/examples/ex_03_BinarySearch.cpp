// Алгоритм двоичного поиска
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int left, int right, int target){
    if(left > right) return - 1; // не найден
    int mid = (left + right) / 2; // определяем среднее значение

    if(arr[mid] == target)
        return mid;
    else if(arr[mid] > target){
        return binarySearch(arr, left, mid-1, target);
    }
    else{
        return binarySearch(arr, mid-1, right, target);
    }
}

int main(){
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << binarySearch(data, 0, data.size() - 1, 3);
}