#include <iostream>

using namespace std;
using ll = long long;

int main() {
    ll N; cin >> N;

    ll arr[N];
    for(ll i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for(ll i = 0; i < N; i++) {
        if(arr[i] != arr[N - (i + 1)]){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}