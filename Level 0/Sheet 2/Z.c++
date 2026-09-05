#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string st;
    cin >> st;

    int n = st.length();

    bool pal[5000][5000] = {};

    for (int i = 0; i < n; i++) {
        pal[i][i] = true;
    }

    for (int i = 0; i < n - 1; i++) {
        if (st[i] == st[i + 1]) {
            pal[i][i + 1] = true;
        }
    }

    for (int len = 3; len <= n; len++) {

        for (int i = 0; i + len - 1 < n; i++) {

            int j = i + len - 1;

            if (st[i] == st[j] && pal[i + 1][j - 1]) {
                pal[i][j] = true;
            }
        }
    }

    int q;
    cin >> q;

    while (q--) {
        int L, R;
        cin >> L >> R;

        L--;
        R--;

        if (pal[L][R]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
