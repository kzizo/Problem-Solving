#include <iostream>

using namespace std;

int main() {
    string st; cin >> st;

    bool hasProblem = true;
    for(int i = 1; i < st.length(); i++) {
        if(st[i] >= 'a'){
            hasProblem = false;
        }
    }

    if(hasProblem) {
        for(int i = 1; i < st.length(); i++) {
            st[i] = tolower(st[i]);
        }
        cout << st << endl;
    }else{
        cout << st << endl;
    }
}