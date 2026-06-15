#include <iostream>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll  n;
        cin >> n;

        ll sumPowerTwo = 0;
        for(ll i = 1; i <= n; i *= 2){
            sumPowerTwo += i;
        }

        ll originalSum = (n * (n + 1)) / 2;

        cout << originalSum - (2 * sumPowerTwo) << endl;
    }
}

