#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    
    while(t--) {
        ll n;
        cin >> n;
        
        ll sum = n * (n + 1) / 2;
        
        ll sum_squares = n * (n + 1) * (2 * n + 1) / 6;
        
        ll result = sum * sum - sum_squares;
        
        cout << result << "\n";
    }    
}