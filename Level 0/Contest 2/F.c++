#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        string s; cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if((int)s[i] > 90) {
            s[i] = toupper(s[i]);
        }else{
            s[i] = tolower(s[i]);
        }
    }

    string reversed_s = "";
    for(int i = (s.length() - 1); i >= 0; i--){
        reversed_s.push_back(s[i]);
    }

    for(int i = 0; i < reversed_s.length(); i++) {
        if((int)reversed_s[i] > 90) {
            int char_ascii_value = (int)reversed_s[i];
            int opposite_char_ascii_value = 219 - char_ascii_value;
            reversed_s[i] = (char)opposite_char_ascii_value;
        }else{
            int char_ascii_value = (int)reversed_s[i];
            int opposite_char_ascii_value = 155 - char_ascii_value;
            reversed_s[i] = (char)opposite_char_ascii_value;
        }
    }

    cout << reversed_s << endl;
    }
}