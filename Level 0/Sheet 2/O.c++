#include <iostream>

using namespace std;

int main() {
    int N, M; cin >> N >> M;

    int arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int freqArr[100000] = {};
    for(int i = 0; i < N; i++) {
        freqArr[arr[i]]++;
    }

    for(int i = 1; i <= M; i++) {
        cout << freqArr[i] << endl;
    }
}