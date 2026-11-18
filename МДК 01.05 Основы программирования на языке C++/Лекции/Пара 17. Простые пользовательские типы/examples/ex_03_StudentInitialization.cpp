#include <iostream>

using namespace std;

struct Student{
    string name; // имя студента
    int age; // возраст студента
    double grade; // средний балл студента
};

int main(){
    // Способ 1. Можно посмотреть в ex_02_StructStudent.cpp
    // Способ 2. Списковая инициализация с =
    Student s1 = {"Николай", 22, 4.7};
    // Способ 3. Прямая списковая инициализация
    Student s2 {"Анастасия", 19, 4.9};

    cout << "КАРТОЧКА СТУДЕНТА\nИмя: " << s1.name << "\nВозраст: " << s1.age << "\nСредний балл: " << s1.grade << "\n\n";
    cout << "КАРТОЧКА СТУДЕНТА\nИмя: " << s2.name << "\nВозраст: " << s2.age << "\nСредний балл: " << s2.grade << endl;
}   
