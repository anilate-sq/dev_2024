#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    double grade;
};

// вывод информации о студенте
void print(Student s){
    cout << s.name << " " << s.age << " " << s.grade << endl;
}

int main(){
    print({"Артем", 22, 4.78});
    print({"Валера", 20, 4.28});
    print({"Кристина", 21, 4.54});
}