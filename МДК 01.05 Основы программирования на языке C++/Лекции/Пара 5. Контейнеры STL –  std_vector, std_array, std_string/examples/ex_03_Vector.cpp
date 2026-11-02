// Динамический массив
#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> nums = {1,2,3}; 

    cout << "Изначальный вектор: " << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums.at(i) << endl;
    }
    
    nums.push_back(4); // добавляем новый элемент
    nums.push_back(5); // добавляем новый элемент
    cout << "Измененный вектор: " << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums.at(i) << endl;
    }
    
    nums.pop_back(); // удаляем последний элемент
    cout << "Вектор после удаления элемента: " << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums.at(i) << endl;
    }

    nums.clear(); // очистка
    cout << nums[0]; // проверка
};