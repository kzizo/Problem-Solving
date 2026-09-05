#include <iostream>
#include <string>

using namespace std;
using ll = long long;

int main() {
    ll num_a, num_b; cin >> num_a >> num_b;
    ll num_c = num_a + num_b;

    string st_a = to_string(num_a);
    string st_b = to_string(num_b);
    string st_c = to_string(num_c);

    string a_non_zeros = "";
    string b_non_zeros = "";
    string c_non_zeros = "";
    for(int i = 0; i < st_a.length(); i++) {
        if(st_a[i] != '0') {
            a_non_zeros += st_a[i];
        }
    }

    for(int i = 0; i < st_b.length(); i++) {
        if(st_b[i] != '0') {
            b_non_zeros += st_b[i];
        }
    }

    for(int i = 0; i < st_c.length(); i++) {
        if(st_c[i] != '0') {
            c_non_zeros += st_c[i];
        }
    }

    ll final_a = stoll(a_non_zeros);
    ll final_b = stoll(b_non_zeros);
    ll final_c = stoll(c_non_zeros);

    if((final_a + final_b) == final_c) {
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
}