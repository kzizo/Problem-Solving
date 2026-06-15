#include <iostream>
#include <string>

using namespace std;

int main() {
    string pass, s;
    pass = "208241";
    cin >> s;

    if(s == pass)
        cout << "Yes\n";
    else
        cout << "No\n";
}