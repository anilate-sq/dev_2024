#include <iostream>
using namespace std;

enum class Status{
    Active,
    Inactive,
    Banned
};

int main(){
    Status s = Status::Inactive;
    // cout << s; так нельзя enum class не возвращает значение

    switch(s) {
        case Status::Active:
            cout << "студент онлайн\n";
            break;

        case Status::Inactive:
            cout << "студент не онлайн\n";
            break;
        
        case Status::Banned:
            cout << "студент в бане\n";
            break;

    }
}