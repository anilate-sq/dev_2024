#include <iostream>
using namespace std;

enum class Status{
    Active = 1,
    Inactive = 2,
    Banned = 3
};

int main(){
    // тут отработаем по заданному номеру
    Status s = static_cast<Status>(3);

    switch(s) {
        case static_cast<Status>(1):
            cout << "студент онлайн\n";
            break;

        case static_cast<Status>(2):
            cout << "студент не онлайн\n";
            break;
        
        case static_cast<Status>(3):
            cout << "студент в бане\n";
            break;

    }
}