#include <iostream>

using namespace std;
using ll = long long;

int main() {
    ll R, L, N; cin >> R >> L >> N;
    
    ll totalNumbers = (L - R) + 1;
    ll numberOfMultiples = (L / N) - ((R - 1) / N);

    cout << totalNumbers - numberOfMultiples << endl;
}