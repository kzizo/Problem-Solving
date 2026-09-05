#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N; cin >> N;

    int arr[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }

    int sumMainDiag = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i == j) {
                sumMainDiag += arr[i][j];
                break;
            }
        }
    }

    int sumSecDiag = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i + j == N-1) {
                sumSecDiag += arr[i][j];
                break;
            }
        }
    }

    cout << abs(sumMainDiag - sumSecDiag);
}