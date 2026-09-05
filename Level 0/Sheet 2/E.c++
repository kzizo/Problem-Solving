#include <iostream>

using namespace std;

int main() {
    int N, M; cin >> N >> M;

    int arr[N][M];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }

    int X; cin >> X;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(arr[i][j] == X){
                cout << "YES\n";
                return 0;
            }
        }
    }

    cout << "NO\n";
}