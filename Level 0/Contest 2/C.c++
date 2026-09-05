#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    ll x; cin >> x;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] < x) {
            cout << arr[i] << " ";
        }
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] > x) {
            cout << arr[i] << " ";
        }
    }
}