#include <iostream>
#include <vector>
using namespace std;

// Быстрая сортировка
void quickSort(vector<int>& arr, int left, int right){
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];

    while(i <= j){
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;
        if(i <= j) swap(arr[i++], arr[j--]);
    }
    if (left < j) quickSort(arr, left, j);
    if (right > i) quickSort(arr, i, right);
}

int main(){
    vector<int> data = {10, 7, 2, 8, 6, 1, 5};
    quickSort(data, 0, data.size() - 1);
    for(int x : data) cout << x << " ";
}