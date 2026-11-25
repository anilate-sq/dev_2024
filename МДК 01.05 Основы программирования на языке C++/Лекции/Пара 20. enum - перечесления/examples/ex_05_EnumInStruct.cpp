#include <iostream>
using namespace std;

enum class Status{
    Active,
    Inactive,
    Banned
};

struct Student{
    string name;
    int age;
    double grade;
    Status status;
};

int main(){
    Student s{"Данил", 18, 4.6, Status::Active};
}