#include <iostream>
using namespace std;

int main(){
    char S;
    int N;
    cin >> S >> N;

    int nums[N];

    for(int i = 0; i < N; ++i){
        cin >> nums[i];
        for(int j = 1; j <= nums[i]; ++j){
            cout << S;
        }
        cout << "\n";
    }
}