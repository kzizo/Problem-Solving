#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N; cin >> N;

    int arr[N];
    int asc_arr[N];
    int desc_arr[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < N; i++) {
        asc_arr[i] = arr[i];
        desc_arr[i] = arr[i];
    }
    sort(asc_arr, asc_arr + N);
    sort(desc_arr, desc_arr + N, greater<int>());

    int arr_1[N] = {};
    for(int i = 0; i < (N / 2); i++) {
        arr_1[i] = asc_arr[i];
    }

    for(int i = (N / 2); i < N; i++) {
        arr_1[i] = desc_arr[i];
    }

    for(int i = 0; i < N; i++) {
        cout << arr_1[i] << " ";
    }
    cout << endl;

    int arr_2[N] = {};
    for(int i = 0; i < (N / 2); i++) {
        arr_2[i] = desc_arr[i];
    }

    for(int i = (N / 2); i < N; i++) {
        arr_2[i] = asc_arr[i];
    }

    for(int i = 0; i < N; i++) {
        cout << arr_2[i] << " ";
    }
}