#include <iostream>
using namespace std;

struct Address{
    string city;
    string street;
    int house;
};

struct Student{
    string name;
    int age;
    Address address; // структура Address
};

// вывод полной информации о студенте
void printInfo(const Student& s){
    cout << "Имя: " << s.name << "\nВозраст: " << s.age << "\nАдрес: г. " << s.address.city << " ул. " << s.address.street << " д. " << s.address.house << endl; 
}

int main(){
    // создание
    Student student{
        "Григорий",
        21,
        {
            "Иркутск",
            "Розы-Люксенбурга",
            21
        }
    };
    
    printInfo(student);
    
}