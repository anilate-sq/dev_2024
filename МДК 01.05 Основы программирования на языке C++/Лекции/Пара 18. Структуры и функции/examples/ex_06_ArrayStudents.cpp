#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    double grade;
};

void printGroup(Student arr[], int size){
    for(int i = 0; i < size; i++){
    cout << arr[i].name << " " << arr[i].age << " " << arr[i].grade << endl;
    }
}

int main(){
    Student group[3];
    group[0] = {"Артем", 22, 4.78};
    group[1] = {"Валера", 20, 4.28};
    group[2] = {"Кристина", 21, 4.54};
    printGroup(group, 3);
}