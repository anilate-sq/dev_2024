#include <iostream>

using namespace std;

struct Student{
    string name; // имя студента
    int age; // возраст студента
    double grade; // средний балл студента
};

int main(){
    Student student; // создали студента
    student.name = "Илья";
    student.age = 18;
    student.grade = 4.2;

    cout << "КАРТОЧКА СТУДЕНТА\nИмя: " << student.name << "\nВозраст: " << student.age << "\nСредний балл: " << student.grade << endl;
}