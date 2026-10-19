// Строковые значения
#include <iostream>
#include <string> // не обязательно

using namespace std;

int main(){  
    setlocale(LC_ALL, " ");    
    string name = "Petr Ivanovich";
    
    // range-based for
    for(char sym : name){
        cout << sym;
    }
    
    name += " Ivanov"; // конкатенация
    cout << "\n" << name;

    cout << "\n" << name.find("Ivanov"); // поиск первого вхождения
    cout << "\n" << name.substr(0, 13);
}