#include <iostream>

using namespace std;

int main() {
    string s; cin >> s;

    int counter_of_Y = 0;
    int counter_of_e = 0;
    int counter_of_s = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'Y') {
            counter_of_Y++;
        }else if(s[i] == 'e') {
            counter_of_e++;
        }else if(s[i] == 's') {
            counter_of_s++;
        }
    }

    if(counter_of_Y >= 1 && counter_of_e >= 1 && counter_of_s >= 1) {
        cout << "Ziad eld3eef\n";
    }else {
        cout << "Ziad is weak\n";
    } 
}