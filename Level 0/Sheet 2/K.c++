#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N; cin >> N;
    
    int arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    swap(*min_element(arr, arr + N), *max_element(arr, arr + N));
    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
}