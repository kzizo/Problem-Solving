#include <iostream>

using namespace std;

int main() {
    string st; cin >> st;

    int left = 0;
    int right = st.length() - 1;
    int differences = 0;

    while(left < right) {
        if(st[left] != st[right]) {
            differences++;
        }
        left++;
        right--;
    }

    if(differences == 1) {
        cout << "YES\n";
    }else if(differences == 0 && (st.length() % 2 == 1)) {
        cout << "YES\n";
    }else{
        cout << "No\n";
    }
}