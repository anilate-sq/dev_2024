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
    students.push_back({"Григорий", 16, 4.7});
    students.push_back({"Яна", 19, 4.4});
    students.push_back({"Василиса", 23, 4.1});

    if(students.empty()){
        cout << "Список студентов пуст\n";
    } else {
        const Student* best = &students[0];
        for (const Student& s : students){
            if(s.grade > best->grade){
                best = &s;
            } 
        }
        cout << "Лучший студент: " << best->name << "\n";
    }

}