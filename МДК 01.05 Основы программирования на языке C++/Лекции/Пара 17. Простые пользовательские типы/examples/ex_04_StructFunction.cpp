#include <iostream>
using namespace std;

struct Student{
    string name; // имя студента
    int age; // возраст студента
    double grade; // средний балл студента
};

// Печать карточки студента
void print(const Student& s){
    cout << "КАРТОЧКА СТУДЕНТА\nИмя: " << s.name << "\nВозраст: " << s.age << "\nСредний балл: " << s.grade << "\n\n";
}

int main(){
    // Создаем студентов
    Student s1 = {"Николай", 22, 4.7}; 
    Student s2 {"Анастасия", 19, 4.9};
    Student s3 {"Анна", 21, 3.9};
    
    print(s1);
    print(s2);
    print(s3);
}