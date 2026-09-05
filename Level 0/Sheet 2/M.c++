#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    string st; cin >> st;

    int chars[26] = {};
    for(int i = 0; i < n; i++) {
        st[i] = tolower(st[i]);
        if(st[i] >= 'a' && st[i] <= 'z') {
            chars[st[i] - 'a'] = 1;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(chars[i] == 0) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}