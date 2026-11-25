#include <iostream>
using namespace std;

enum Status{
    Active,
    Inactive,
    Banned
};

int main(){
    setlocale(LC_ALL, "ru");
    Status s;
    int num;
    cout << "Введите статус: ";
    cin >> num;
    s = static_cast<Status>(num);

    switch(s){
        case Active:
            cout << "студент в сети\n";
            break;

        case Inactive:
            cout << "студент не в сети\n";
            break;
        
        case Banned:
            cout << "студент забанен\n";
            break;
    }
}