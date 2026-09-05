#include <iostream>

using namespace std;

int main() {
    string N; cin >> N;

    int sumDigits = 0;
    for(int i = 0; i < N.length(); i++) {
        sumDigits += N[i];
    }

    if(sumDigits % 3 == 0) {
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
}