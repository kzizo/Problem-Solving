#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        if (k * k <= n && (n % 2 == k % 2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}