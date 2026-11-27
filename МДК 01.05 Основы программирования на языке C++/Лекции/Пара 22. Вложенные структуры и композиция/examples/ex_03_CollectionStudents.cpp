#include <iostream>
#include <vector>
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

void printInfo(const Student& s){
    cout << "Имя: " << s.name << "\nВозраст: " << s.age << "\nАдрес: г. " << s.address.city << " ул. " << s.address.street << " д. " << s.address.house << endl; 
    cout << "================================================" << endl;
}

int main(){
   vector<Student> students{
    {
        "Анастасия",
        19,
        {"Санкт-Питербург", "Ленина", 21}
    },
    {
        "Станислав",
        23,
        {"Москва", "Тверская", 12}  
    },
    {
        "Виктория",
        25,
        {"Екатеринбург", "Гагарина", 2}
    }
   };   

   for (const Student& s : students){
        printInfo(s);
   }
}