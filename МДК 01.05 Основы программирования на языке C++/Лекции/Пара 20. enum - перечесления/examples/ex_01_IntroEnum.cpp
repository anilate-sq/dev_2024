#include <iostream>

using namespace std;

// создадим enum
enum Status{
    // тут указываем статуса
    Active,
    Inactive,
    Banned
};

int main(){
    // enum - перечеслиние
    Status s1 = static_cast<Status>(2); // передать статус через номер
    Status s2 = Active; // передать статус

    cout << s1;
    cout << s2;
}