#include <iostream>

using namespace std;

int main() {
    int n, k; cin >> n >> k;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }

    for(int i = (n - 1); i >= k; i--) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}