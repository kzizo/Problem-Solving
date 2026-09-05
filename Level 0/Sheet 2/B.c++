#include <iostream>

using namespace std;

int main() {
    int N, x; cin >> N >> x;

    int arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < N; i++) {
        if(arr[i] == x) {
            cout << i << endl;
            return 0;
        }
    }

    cout << "Not Found\n";
}