#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    double grade;
};

Student createStudent(){
    Student s{"Виталий", 19, 4.6};
    return s;
};

void print(Student& s){
    cout << s.name << " " << s.age << " " << s.grade << endl;
}

int main(){
    Student get_student = createStudent();
    print(get_student);
}