#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int min_shovels = 1;
    while (true) {
        int last_digit = (k * min_shovels) % 10;
        if (last_digit == 0 || last_digit == r) {
            cout << min_shovels << endl;
            break;
        }
        min_shovels++;
    }
}