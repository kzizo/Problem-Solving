#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;

    int counter = 0;
    while(counter < t) {
        int n; cin >> n;

    string st;
    cin >> st;

    int ballons = 0;
    int chars[26] = {};
    for(int i = 0; i < st.size(); i++) {
        if(chars[st[i] - 'A'] == 0) {
            ballons += 2;
            chars[st[i] - 'A'] = 1;
        }else {
            ballons++;
        }
    }

    cout << ballons << endl;
    counter++;
    }
    
}