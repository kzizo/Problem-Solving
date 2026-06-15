#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll arr[3];

    // Storing User's Array
    for(int i = 0; i < 3; ++i){
        cin >> arr[i];
    }

    // Sorting User's Array
    for(int i = 1; i < 3; ++i) {
        for(int j = 0; j < 3; ++j){
            if(arr[j] > arr[i]) {
                ll temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        
    }

    // Printing User's Array
    for(int i = 0; i < 3; ++i) {
        cout << arr[i] << " ";
    }
}