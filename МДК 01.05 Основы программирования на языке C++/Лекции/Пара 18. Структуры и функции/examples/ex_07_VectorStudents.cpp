#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    double grade;
};

void printGroup(vector<Student> vec){
    for(auto student : vec){
    cout << student.name << " " << student.age << " " << student.grade << endl;
    }
}

int main(){
    vector<Student> students;
    students.push_back({"Артем", 22, 4.78});
    students.push_back({"Валера", 20, 4.28});
    students.push_back({"Кристина", 21, 4.54});
    printGroup(students);
}