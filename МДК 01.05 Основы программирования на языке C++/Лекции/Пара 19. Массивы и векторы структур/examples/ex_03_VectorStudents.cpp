#include <iostream>
#include <vector>
using namespace std;

struct Student{
    string name;
    int age;
    double grade;
};

int main(){
    vector<Student> students;
    students.push_back({"Диана", 21, 4.3});
    students.push_back({"Максим", 17, 3.4});
    cout << students[0].name << "\n\n"; // получаю имя конкретного студента

    // вывод списка студентов
    for (size_t i = 0; i < students.size(); i++){
        cout << "Студент: " << students[i].name << " | Ср. балл: " << students[i].grade << "\n\n";
    }
}