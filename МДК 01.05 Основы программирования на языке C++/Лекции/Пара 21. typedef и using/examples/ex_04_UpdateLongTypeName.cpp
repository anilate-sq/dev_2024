#include <iostream>
#include <vector>
using namespace std;

using Group = std::pair<std::string, int>;
using Groups = vector<Group>;

int main(){
    Group g = {"Первые", 21};
    Groups gs;
    gs.push_back(g);
    gs.push_back({"Вторые", 22});
    gs.push_back({"Третьи", 12});

    for (pair item : gs){
        cout << item.first << " " << item.second << endl;
    }
}