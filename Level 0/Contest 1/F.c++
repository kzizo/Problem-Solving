#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int xR, yR, xW, yW;
    cin >> xR >> yR >> xW >> yW;

    ll resultR = (xR * xR) + (yR * yR);
    ll resultW = (xW * xW) + (yW * yW);

    if(resultR < resultW)
        cout << "Russo\n";
    else if(resultR > resultW)
        cout << "Wil\n";
    else 
        cout << "Empate\n";
}