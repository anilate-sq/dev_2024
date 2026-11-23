#include <iostream>

using namespace std;

struct Student{
    string name;
    int age;
    double grade;
};

int main(){
    Student group[3]{
        {"Анастасия", 22, 4.85}, 
        {"Егор", 24, 4.37},
        {"Макар", 20, 4.82}
    };
    int size = 3;
    
    // пройдемся по списку студентов
    for (int i = 0; i < size ; i++){    
        cout << "Студент: " << group[i].name << " | Ср. балл: " << group[i].grade << "\n\n";
    }
}