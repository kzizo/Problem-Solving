#include <iostream>

using namespace std;
using ll = long long;

int main() {
    ll L, R;
    cin >> L >> R;

    ll sum = 0;
    while(R >= L) {
        sum+= L;
        L++;
    }
    cout << sum << endl;
}