#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N; cin >> N;

    int arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int lowest = *min_element(arr, arr + N);

    for(int i = 0; i < N; i++) {
        if(arr[i] == lowest) {
            cout << lowest << " " << i + 1 << endl;
            return 0;
        }
    }
}