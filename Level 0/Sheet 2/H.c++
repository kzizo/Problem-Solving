#include <iostream>

using namespace std;

int main() {
    int N, q; cin >> N >> q;

    int arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int counter = 0;
    for(int i = 0; i < q; i++) {
        int l, r, x; cin >> l >> r >> x;
        for(int j = l - 1; j <= r - 1; j++){
            if(x == arr[j]){
                counter ++;
            }
        }
        cout << counter << endl;
        counter = 0;
    }
}