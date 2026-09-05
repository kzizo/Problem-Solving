#include <iostream>

using namespace std;
using ll = long long;

int main() {
    ll n, m; cin >> n >> m;

    if(n >= m &&  n % 2 == m % 2) {
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
}