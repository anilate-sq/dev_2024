#include <iostream>

using namespace std;

struct Student{
    string name;
    int age;
    double grade;
};

int main(){
    Student student{"Иван", 19, 4.3}; // один студент
    // группа студентов 
    Student group[3]{
        {"Анастасия", 22, 4.85}, 
        {"Егор", 24, 4.37},
        {"Макар", 20, 4.82}
    };

    cout << group[0].name; // выводим имя первого студента из группа

}