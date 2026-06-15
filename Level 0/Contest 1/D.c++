#include <iostream>

using namespace std;

int main() {
    int t, a, b, c, d;
    cin >> t;

    for(int i = 0; i < t; ++i) {
        int counter = 0;
        cin >> a >> b >> c >> d;
        if(b > a)
            counter++;
        if(c > a)
            counter ++;
        if(d > a)
            counter ++;
        cout << counter << endl;
    }


}