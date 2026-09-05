#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;

    if(N == 1) {
        cout << 0 << endl;
    }else if(N == 2) {
        cout << 1 << endl;
    }else {
        ll a = 0, b = 1;
        for(int i = 3; i <= N; i++) {
            ll c = a + b;
            a = b;
            b = c; 
    }

        cout << b << endl;
    }
}