#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        
        string arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int minDiff = 1000;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int diff = 0;
                for(int k = 0; k < m; k++) {
                    if(arr[i][k] > arr[j][k]) {
                        diff += arr[i][k] - arr[j][k];
                    }else {
                        diff += arr[j][k] - arr[i][k];
                    }
                }

                if(diff < minDiff) {
                    minDiff = diff;
                }
            }
        }

        cout << minDiff << endl;
    }
}