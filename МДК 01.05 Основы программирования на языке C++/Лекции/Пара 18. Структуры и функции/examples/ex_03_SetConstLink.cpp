#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    double grade;
};

void print(const Student& s){
    cout << s.name << " " << s.age << " " << s.grade << endl;
}

int main(){
    Student s1 = {"Артем", 22, 4.78};
    Student s2 = {"Валера", 20, 4.28};
    Student s3 = {"Кристина", 21, 4.54};

    print(s1);
    print(s2);
    print(s3);
}